#include "AllMemory.h"
#include <numeric>



AllMemory::AllMemory()
{
	CoreEntry defaultValue = CoreEntryFactory::Number(0);
	_dimentions = { 1, 1 };
	_fullColumnSize = 1;

	constructMemory(1, 1, defaultValue);
}


AllMemory::AllMemory(std::vector<int> dimentionalVector)
{
	dimensionalVectorCheck(dimentionalVector);
	
	_fullColumnSize = std::accumulate(dimentionalVector.begin()+1, dimentionalVector.end(), 1, std::multiplies<int>());

	_dimentions = dimentionalVector;
	CoreEntry defaultValue = CoreEntryFactory::Number(0);

	constructMemory(dimentionalVector[0], _fullColumnSize, defaultValue);
}


AllMemory::AllMemory(CoreEntry &defaultValue)
{
	_dimentions = { 1, 1 };
	_fullColumnSize = 1;

	constructMemory(1, _fullColumnSize, defaultValue);
}


AllMemory::AllMemory(ICoreMemory &memory)
{
	_dimentions = memory.size();

	_fullColumnSize = 1;
	for (size_t index = 1; index < memory.size().size(); ++index)
		_fullColumnSize *= memory.size()[index];

	CoreEntry defaultValue = CoreEntryFactory::Number(0);

	constructMemory(memory.size()[0], _fullColumnSize, defaultValue);

	moveMemory(memory);
}


AllMemory::AllMemory(std::vector<int>dimensions, CoreEntry &defaultValue)
{
	dimensionalVectorCheck(dimensions);

	_fullColumnSize = std::accumulate(dimensions.begin() + 1, dimensions.end(), 1, std::multiplies<int>());

	_dimentions = dimensions;

	constructMemory(dimensions[0], _fullColumnSize, defaultValue);
}


void AllMemory::constructMemory(int rows, int columns, CoreEntry &defaultValue)
{
	_memoryBuffer = new CoreEntry*[rows];
	for (size_t index = 0; index < rows; ++index)
		_memoryBuffer[index] = new CoreEntry[columns];

	for (size_t row = 0; row < _dimentions[0]; ++row)
		for (size_t column = 0; column < _fullColumnSize; ++column)
			_memoryBuffer[row][column] = defaultValue;
}


AllMemory::~AllMemory()
{
	deconstructMemory();
}


void AllMemory::deconstructMemory()
{
	try
	{
		for (size_t cursor = 0; cursor < _dimentions[0]; ++cursor)
			delete[] _memoryBuffer[cursor];
		delete[] _memoryBuffer;
	}
	catch (std::exception ex)
	{
		throw new std::exception("Delete Tensor memeory problem");
	}
}

void AllMemory::dimensionalVectorCheck(std::vector<int> dimentionalVector)
{
	if (dimentionalVector.size() == 1)
		throw std::exception("The tensor must at least be two dimentions");
	
	for (size_t index = 1; index < dimentionalVector.size(); ++index)
		if (dimentionalVector[index] <= 0)
			throw std::exception("A size of a dimention is positive. A negative value has been given");
}


CoreEntry AllMemory::get(const std::vector<int> dimentionalVector) const
{
	return getEntryPointer(dimentionalVector);
}


void AllMemory::set(const std::vector<int> dimentionalVector, CoreEntry newValue) 
{
	getEntryPointer(dimentionalVector) = newValue;
}


std::vector<int> AllMemory::size(void)
{
	return _dimentions;
}


void AllMemory::operator=(ICoreMemory &memory)
{
	deconstructMemory();

	_dimentions = memory.size();

	_fullColumnSize = 1;
	for (size_t index = 1; index < memory.size().size(); ++index)
		_fullColumnSize *= memory.size()[index];

	CoreEntry defaultValue = CoreEntryFactory::Number(0);

	constructMemory(memory.size()[0], _fullColumnSize, defaultValue);

	moveMemory(memory);
}


CoreEntry & AllMemory::getEntryPointer(const std::vector<int> dimentionalVector) const
{
	if (dimentionalVector.size() < _dimentions.size())
		throw std::exception("The dimentional vector has too few elements");
	if (dimentionalVector.size() > _dimentions.size())
		throw std::exception("The dimentional vector has too many elements");

	int row = dimentionalVector[0];
	int column = 0;

	for (size_t index = 1; index < dimentionalVector.size(); ++index)
		column += dimentionalVector[index] * productOfFutureDimentions(index);

	return _memoryBuffer[row][column];
}


int AllMemory::productOfFutureDimentions(int currentDimentionNumber) const
{
	int productOfFutureDimentions = 1;

	for (size_t i = currentDimentionNumber + 1; i < _dimentions.size(); i++)
		productOfFutureDimentions *= _dimentions[i];

	return productOfFutureDimentions;
}

void AllMemory::moveMemory(ICoreMemory &memory)
{
	std::vector<int> iterativeVector(memory.size().size(), 0);
	int index = 0;
	while (index < memory.size().size())
		if (iterativeVector[index] == memory.size()[index])
			iterativeVector[index++] = 0;
		else
		{
			set(iterativeVector, memory.get(iterativeVector));

			iterativeVector[index]++;

			if (index != 0) index--;
		}
}
