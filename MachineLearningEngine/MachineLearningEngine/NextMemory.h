#pragma once
#include "ICoreMemory.h"

class NextMemory : public ICoreMemory
{
public:
	NextMemory();
	NextMemory(std::vector<int>);
	~NextMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual void set(const std::vector<int>, CoreEntry);
};

