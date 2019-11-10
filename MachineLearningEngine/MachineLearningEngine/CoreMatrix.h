#pragma once
#include <vector>
#include "ICoreMatrix.h"
#include "ICoreMemory.h"
#include "CoreEntry.h"

class CoreMatrix : ICoreMatrix
{
public:
	CoreMatrix();
	CoreMatrix(const CoreEntry&);
	CoreMatrix(const ICoreMatrix&);
	CoreMatrix(const ICoreMatrix&, const CoreEntry&);
	CoreMatrix(std::vector<int>);
	CoreMatrix(std::vector<int>, const CoreEntry&);
	~CoreMatrix();

	void addDimension(int);
	void removeDimension(int);

	CoreEntry getEntry(std::vector<int>) const;
	void setEntry(std::vector<int>);

	CoreMatrix getLowerDimension(int) const;
	void setDimension(int, CoreMatrix) const;

private:
	CoreEntry _defaultValue;
};

