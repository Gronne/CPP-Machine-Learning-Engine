#pragma once
#include "ICoreMemory.h"

class AllMemory : public ICoreMemory
{
public:
	AllMemory();
	~AllMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual CoreEntry set(const std::vector<int>) const;
};

