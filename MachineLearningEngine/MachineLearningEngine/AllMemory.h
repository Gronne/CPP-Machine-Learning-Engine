#pragma once
#include "ICoreMemory.h"
#include "CoreEntryFactory.h"
#include "CoreEntry.h"

class AllMemory : public ICoreMemory
{
public:
	AllMemory();
	AllMemory(std::vector<int>);
	AllMemory(CoreEntry&);
	AllMemory(std::vector<int>, CoreEntry&);
	~AllMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual void set(const std::vector<int>, CoreEntry);

	virtual std::vector<int> size(void);

private:
	void constructMemory(int, int, CoreEntry&);
	void deconstructMemory(void);
	void dimensionalVectorCheck(std::vector<int>);
	CoreEntry& getEntryPointer(const std::vector<int>) const;
	int productOfFutureDimentions(int) const;

	CoreEntry **_memoryBuffer;
	std::vector<int> _dimentions;
	int _fullColumnSize = 0;
};

