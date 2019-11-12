#pragma once
#include "ICoreMemory.h"
#include "CoreEntry.h"

class ClusterMemory : public ICoreMemory
{
public:
	ClusterMemory();
	ClusterMemory(std::vector<int>);
	ClusterMemory(CoreEntry&);
	ClusterMemory(std::vector<int>, CoreEntry&);
	~ClusterMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual void set(const std::vector<int>, CoreEntry);

	virtual std::vector<int> size(void);
};

