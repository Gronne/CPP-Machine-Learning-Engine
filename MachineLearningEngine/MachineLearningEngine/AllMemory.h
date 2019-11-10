#pragma once
#include "ICoreMemory.h"

class AllMemory : public ICoreMemory
{
public:
	AllMemory(std::vector<int>);
	~AllMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual void set(const std::vector<int>, CoreEntry);

private:
	void constructMemory(int, int);
	void deconstructMemory(void);
	CoreEntry& getEntryPointer(const std::vector<int>) const;

	CoreEntry **_memoryBuffer;
	std::vector<int> _dimentions;
	int _fullColumnSize = 0;
};

