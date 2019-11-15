#pragma once
#include "ICoreMemory.h"
#include "CoreEntry.h"

class NextMemory : public ICoreMemory
{
public:
	NextMemory();
	NextMemory(std::vector<int>);
	NextMemory(CoreEntry&);
	NextMemory(ICoreMemory&);
	NextMemory(std::vector<int>, CoreEntry&);
	~NextMemory();

	virtual CoreEntry get(const std::vector<int>) const;
	virtual void set(const std::vector<int>, CoreEntry);
	virtual std::vector<int> size(void);
	virtual void operator=(ICoreMemory&);
};

