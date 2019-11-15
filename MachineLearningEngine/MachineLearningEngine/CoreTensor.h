#pragma once
#include <vector>
#include "ICoreMemory.h"
#include "CoreEntry.h"
#include "CoreEntryFactory.h"
#include "CoreMemoryFactory.h"

class CoreTensor
{
public:
	CoreTensor();
	CoreTensor(const CoreEntry&);
	CoreTensor(const CoreTensor&);
	CoreTensor(const CoreTensor&, const CoreEntry&);
	CoreTensor(std::vector<int>);
	CoreTensor(std::vector<int>, const CoreEntry&);
	~CoreTensor();

	void addDimension(int);
	void removeDimension(int = 0);

	CoreTensor lookFrom(int);
	CoreTensor loookFrom(std::vector<int>);
	CoreTensor get(int);
	CoreTensor get(std::vector<int>);
	
	void setEntry(std::vector<int>, CoreEntry);
	void setEntry(std::vector<int>, CoreTensor);

private:
	void constructCoreTensor(std::vector<int>, CoreEntry);
	void moveIntoSmallerDimensionalTensor(ICoreMemory&, ICoreMemory&, std::vector<int>, std::vector<int>, int);
	void moveIntoSuperTensor(ICoreMemory&, ICoreMemory&, std::vector<int>, std::vector<int>, std::vector<int>);

	CoreEntry _defaultValue;
	std::vector<int> _directionalLookup;
	ICoreMemory *_memory;
};

