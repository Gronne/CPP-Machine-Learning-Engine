#pragma once
#include "ICoreMemory.h"

class ClusterMemory : public ICoreMemory
{
public:
	ClusterMemory();
	ClusterMemory(std::vector<int>);
	~ClusterMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual void set(const std::vector<int>, CoreEntry);
};

