#pragma once
#include "ICoreMemory.h"
#include "AllMemory.h"
#include "NextMemory.h"
#include "ClusterMemory.h"

class CoreMemoryFactory
{
public:
	CoreMemoryFactory();
	~CoreMemoryFactory();

	static ICoreMemory& all(void) { return *(new AllMemory()); }
	static ICoreMemory& next(void) { return *(new NextMemory()); }
	static ICoreMemory& cluster(void) { return *(new ClusterMemory()); }
};

