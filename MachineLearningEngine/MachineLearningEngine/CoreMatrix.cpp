#include "CoreMatrix.h"



CoreMatrix::CoreMatrix()
{
}

CoreMatrix::CoreMatrix(const CoreEntry &)
{
}

CoreMatrix::CoreMatrix(const ICoreMatrix &)
{
}

CoreMatrix::CoreMatrix(const ICoreMatrix &, const CoreEntry &)
{
}

CoreMatrix::CoreMatrix(std::vector<int>)
{
}

CoreMatrix::CoreMatrix(std::vector<int>, const CoreEntry &)
{
}


CoreMatrix::~CoreMatrix()
{
}

void CoreMatrix::addDimension(int)
{
}

void CoreMatrix::removeDimension(int)
{
}

CoreEntry CoreMatrix::getEntry(std::vector<int>) const
{
	return CoreEntry();
}

void CoreMatrix::setEntry(std::vector<int>)
{
}

CoreMatrix CoreMatrix::getLowerDimension(int) const
{
	return CoreMatrix();
}

void CoreMatrix::setDimension(int, CoreMatrix) const
{
}
