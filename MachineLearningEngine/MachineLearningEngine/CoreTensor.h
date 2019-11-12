#pragma once
#include <vector>
#include "ICoreTensor.h"
#include "ICoreMemory.h"
#include "CoreEntry.h"
#include "CoreEntryFactory.h"
#include "CoreMemoryFactory.h"

class CoreTensor : ICoreTensor
{
public:
	CoreTensor();
	CoreTensor(const CoreEntry&);
	CoreTensor(const ICoreTensor&);
	CoreTensor(const ICoreTensor&, const CoreEntry&);
	CoreTensor(std::vector<int>);
	CoreTensor(std::vector<int>, const CoreEntry&);
	~CoreTensor();

	void addDimension(int);
	void removeDimension(int);

	CoreTensor lookFrom(int);
	CoreTensor loookFrom(std::vector<int>);
	CoreTensor get(int);
	CoreTensor get(std::vector<int>);
	
	void setEntry(std::vector<int>);

private:
	void constructCoreTensor(std::vector<int>, CoreEntry);

	CoreEntry _defaultValue;
	std::vector<int> _directionalLookup;
	ICoreMemory *_memory;
};

