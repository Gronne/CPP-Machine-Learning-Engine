#pragma once
#include <vector>
#include "CoreEntry.h"

class ICoreMemory
{
public:
	ICoreMemory();
	ICoreMemory(std::vector<int>);
	~ICoreMemory();

	virtual CoreEntry get(const std::vector<int>) const = 0;
	virtual void set(const std::vector<int>, CoreEntry) = 0;
};

