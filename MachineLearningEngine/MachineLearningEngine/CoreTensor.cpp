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


CoreTensor::CoreTensor(const ICoreTensor &tensor)
{
	//const std::vector<int> dimensions = tensor->;
	//const CoreEntry defaultValue = CoreEntryFactory::Number(0);


}


CoreTensor::CoreTensor(const ICoreTensor &tensor, const CoreEntry &defaultValue)
{

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


void CoreTensor::addDimension(int)
{

}

void CoreTensor::removeDimension(int)
{

}


CoreTensor CoreTensor::get(int) 
{

	return CoreTensor();
}


CoreTensor CoreTensor::get(std::vector<int>) 
{

	return CoreTensor();
}


CoreTensor CoreTensor::lookFrom(int)
{

	return CoreTensor();
}


CoreTensor CoreTensor::loookFrom(std::vector<int>)
{

	return CoreTensor();
}


void CoreTensor::setEntry(std::vector<int>)
{

}

void CoreTensor::constructCoreTensor(std::vector<int> dimensions, CoreEntry defaultValue)
{
	_defaultValue = defaultValue;
	_memory = &CoreMemoryFactory::all(dimensions, defaultValue);

	for(size_t direction = 0; direction < dimensions.size(); ++direction)
		_directionalLookup.push_back(direction)
}

