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
	static ICoreMemory& all(std::vector<int> dimentions) { return *(new AllMemory(dimentions)); }

	static ICoreMemory& next(void) { return *(new NextMemory()); }
	static ICoreMemory& next(std::vector<int> dimentions) { return *(new NextMemory(dimentions)); }

	static ICoreMemory& cluster(void) { return *(new ClusterMemory()); }
	static ICoreMemory& cluster(std::vector<int> dimentions) { return *(new ClusterMemory(dimentions)); }
};

