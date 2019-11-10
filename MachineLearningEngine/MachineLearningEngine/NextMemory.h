#pragma once
#include "ICoreMemory.h"

class NextMemory : public ICoreMemory
{
public:
	NextMemory();
	~NextMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual CoreEntry set(const std::vector<int>) const;
};

