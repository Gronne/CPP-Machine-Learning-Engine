#include "CoreTensor.h"



CoreTensor::CoreTensor()
{
	const std::vector<int> dimensions = { 1, 1 };
	const CoreEntry defaultValue = CoreEntryFactory::Number(0);

	constructCoreTensor(dimensions, defaultValue);
}

CoreTensor::CoreTensor(const CoreEntry &defaultValue)
{
	const std::vector<int> dimensions = { 1, 1 };

	constructCoreTensor(dimensions, defaultValue);
}


CoreTensor::CoreTensor(const CoreTensor &tensor)
{
	const std::vector<int> dimensions = tensor._memory->size();
	const CoreEntry defaultValue = CoreEntryFactory::Number(0);

	constructCoreTensor(dimensions, defaultValue);

	//Move the tensors memory into the local memory
}


CoreTensor::CoreTensor(const CoreTensor &tensor, const CoreEntry &defaultValue)
{
	const std::vector<int> dimensions = tensor._memory->size();

	constructCoreTensor(dimensions, defaultValue);
}


CoreTensor::CoreTensor(std::vector<int> dimensions)
{
	const CoreEntry defaultValue = CoreEntryFactory::Number(0);

	constructCoreTensor(dimensions, defaultValue);
}


CoreTensor::CoreTensor(std::vector<int> dimensions, const CoreEntry &defaultValue)
{
	constructCoreTensor(dimensions, defaultValue);
}


CoreTensor::~CoreTensor()
{

}


void CoreTensor::addDimension(int newdimensionSize)
{
	std::vector<int> dimensions = _memory->size();
	dimensions.push_back(newdimensionSize);
	_directionalLookup.push_back(_directionalLookup.size());

	ICoreMemory *newMemory = &CoreMemoryFactory::all(dimensions, _defaultValue);

	std::vector<int> allDimensions(newMemory->size().size(), 0);

	std::vector<int> dimensionsToIterate(_memory->size().size(), 0);
	for (size_t index = 0; index < dimensionsToIterate.size(); index++)
		dimensionsToIterate[index] = index;

	moveIntoSuperTensor(*newMemory, *_memory, _memory->size(), allDimensions, dimensionsToIterate);

	*_memory = *newMemory;
}


void CoreTensor::removeDimension(int keepSliceNr)
{
	if (0 > keepSliceNr || keepSliceNr > _memory->size()[_memory->size().size()])
		throw std::exception("You cannot keep a slice that is outside the tensors dimensions");

	std::vector<int> dimensions = _memory->size();
	dimensions.pop_back();
	_directionalLookup.pop_back();

	ICoreMemory *newMemory = &CoreMemoryFactory::all(dimensions, _defaultValue);


	std::vector<int> memoryAccess(dimensions.size(), 0);
	moveIntoSmallerDimensionalTensor(*newMemory, *_memory, dimensions, memoryAccess, keepSliceNr);

	*_memory = *newMemory;
}


void CoreTensor::moveIntoSmallerDimensionalTensor(ICoreMemory &newMemory, ICoreMemory &oldMemory, std::vector<int> dimensions, std::vector<int> counters, int keepSliceNr)
{
	int index = 0;
	while (index < dimensions.size())
		if (counters[index] == dimensions[index])
			counters[index++] = 0;
		else
		{
			std::vector<int> setCounters = counters;
			setCounters.push_back(keepSliceNr);

			newMemory.set(setCounters, oldMemory.get(counters));

			counters[index]++;

			if (index != 0) index--;
		}
}


CoreTensor CoreTensor::get(int keepSliceNr) 
{
	if (0 > keepSliceNr || keepSliceNr > _memory->size()[_memory->size().size()])
		throw std::exception("You cannot keep a slice that is outside the tensors dimensions");

	std::vector<int> dimensions = _memory->size();
	dimensions.pop_back();
	_directionalLookup.pop_back();

	ICoreMemory *newMemory = &CoreMemoryFactory::all(dimensions, _defaultValue);


	std::vector<int> memoryAccess(dimensions.size(), 0);
	moveIntoSmallerDimensionalTensor(*newMemory, *_memory, dimensions, memoryAccess, keepSliceNr);
	

	CoreTensor newTensor;

	const std::vector<int> newDimensions = newMemory->size();
	const CoreEntry defaultValue = CoreEntryFactory::Number(0);

	newTensor.constructCoreTensor(newDimensions, defaultValue);

	*newTensor._memory = *newMemory;

	return newTensor;
}


CoreTensor CoreTensor::get(std::vector<int> dimensions) 
{
	CoreTensor newTensor;

	for (auto &dimension : dimensions)
		newTensor = get(dimension);

	return newTensor;
}


CoreTensor CoreTensor::lookFrom(int)
{

	return CoreTensor();
}


CoreTensor CoreTensor::loookFrom(std::vector<int>)
{

	return CoreTensor();
}


void CoreTensor::setEntry(std::vector<int> dimensions, CoreEntry entry)
{
	_memory->set(dimensions, entry);
}

void CoreTensor::setEntry(std::vector<int> dimensions, CoreTensor entryCluster)
{
	if ((_memory->size().size() - dimensions.size()) != entryCluster._memory->size().size())
		throw std::exception("The dimensions for the entryCluster does not macth with the dimensions for the sub-tensor");


	std::vector<int> dimensionsToIterate(entryCluster._memory->size().size(), 0);
	for (size_t index = 0; index < dimensionsToIterate.size(); index++)
		dimensionsToIterate[index] = index;

	std::vector<int> allDimensions(_memory->size().size(), 0);
	for (size_t index = 0; index < dimensions.size(); index++)
		allDimensions[(dimensions.size() - 1) - index] = dimensions[index];

	std::vector<int> dimentionalBaoundaries = _memory->size();

	moveIntoSuperTensor(*_memory, *entryCluster._memory, dimentionalBaoundaries, allDimensions, dimensionsToIterate);
}




void CoreTensor::moveIntoSuperTensor(	ICoreMemory &superTensorMemory, 
										ICoreMemory &memory,
										std::vector<int> dimensionalBoundaries, 
										std::vector<int> allDimensions,
										std::vector<int> dimensionsToIterate )
{
	std::vector<int> iterateMatrix(memory.size().size(), 0);

	int index = 0;
	while (index < iterateMatrix.size())
		if (iterateMatrix[index] == dimensionalBoundaries[dimensionsToIterate[index]])
			iterateMatrix[index++] = 0;
		else
		{
			for (size_t i = 0; i < iterateMatrix.size(); i++)
				allDimensions[dimensionsToIterate[i]] = iterateMatrix[index];

			superTensorMemory.set(allDimensions, memory.get(iterateMatrix));

			iterateMatrix[index]++;

			if (index != 0) index--;
		}
}


void CoreTensor::constructCoreTensor(std::vector<int> dimensions, CoreEntry defaultValue)
{
	_defaultValue = defaultValue;
	_memory = &CoreMemoryFactory::all(dimensions, defaultValue);

	for (size_t direction = 0; direction < dimensions.size(); ++direction)
		_directionalLookup.push_back(direction);
}

