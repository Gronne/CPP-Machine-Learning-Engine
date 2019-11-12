#include "AllMemory.h"
#include <numeric>



AllMemory::AllMemory()
{
	constructMemory(1, 1);

	_dimentions = { 1, 1 };
}

AllMemory::AllMemory(std::vector<int> dimentionalVector)
{
	if (dimentionalVector.size() == 1)
		throw std::exception("The tensor must at least be two dimentions");

	for (size_t index = 1; index < dimentionalVector.size(); ++index)
		if (dimentionalVector[index] <= 0)
			throw std::exception("A size of a dimention is positive. A negative value has been given");
	
	_fullColumnSize = std::accumulate(dimentionalVector.begin()+1, dimentionalVector.end(), 1, std::multiplies<int>());

	constructMemory(dimentionalVector[0], _fullColumnSize);

	_dimentions = dimentionalVector;
}


void AllMemory::constructMemory(int rows, int columns)
{
	_memoryBuffer = new CoreEntry*[rows];
	for (size_t index = 0; index < rows; ++index)
		_memoryBuffer[index] = new CoreEntry[columns];
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


CoreEntry AllMemory::get(const std::vector<int> dimentionalVector) const
{
	return getEntryPointer(dimentionalVector);
}

void AllMemory::set(const std::vector<int> dimentionalVector, CoreEntry newValue) 
{
	getEntryPointer(dimentionalVector) = newValue;
}


CoreEntry & AllMemory::getEntryPointer(const std::vector<int> dimentionalVector) const
{
	if (dimentionalVector.size() < _dimentions.size())
		throw std::exception("The dimentional vector has too few elements");
	else if (dimentionalVector.size() > _dimentions.size())
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