#pragma once
#include "ICoreMemory.h"

class ClusterMemory : public ICoreMemory
{
public:
	ClusterMemory();
	~ClusterMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual CoreEntry set(const std::vector<int>) const;
};

