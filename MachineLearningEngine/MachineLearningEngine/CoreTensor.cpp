#include "CoreTensor.h"



CoreTensor::CoreTensor()
{
}

CoreTensor::CoreTensor(const CoreEntry &)
{

}


CoreTensor::CoreTensor(const ICoreTensor &)
{

}


CoreTensor::CoreTensor(const ICoreTensor &, const CoreEntry &)
{

}


CoreTensor::CoreTensor(std::vector<int>)
{

}


CoreTensor::CoreTensor(std::vector<int>, const CoreEntry &)
{

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


CoreTensor CoreTensor::getLowerDimension(int) const
{

	return CoreTensor();
}


void CoreTensor::setDimension(int, CoreTensor) const
{

}
