#pragma once
#include "ICoreMemory.h"
#include "AllMemory.h"
#include "NextMemory.h"
#include "ClusterMemory.h"
#include "CoreEntry.h"

class CoreMemoryFactory
{
public:
	CoreMemoryFactory();
	~CoreMemoryFactory();

	static ICoreMemory& all(void) { return *(new AllMemory()); }
	static ICoreMemory& all(std::vector<int> dimentions) { return *(new AllMemory(dimentions)); }
	static ICoreMemory& all(CoreEntry& defaultValue) { return *(new AllMemory(defaultValue)); }
	static ICoreMemory& all(std::vector<int> dimentions, CoreEntry& defaultValue) { return *(new AllMemory(dimentions, defaultValue)); }

	static ICoreMemory& next(void) { return *(new NextMemory()); }
	static ICoreMemory& next(std::vector<int> dimentions) { return *(new NextMemory(dimentions)); }
	static ICoreMemory& next(CoreEntry& defaultValue) { return *(new AllMemory(defaultValue)); }
	static ICoreMemory& next(std::vector<int> dimentions, CoreEntry& defaultValue) { return *(new AllMemory(dimentions, defaultValue)); }

	static ICoreMemory& cluster(void) { return *(new ClusterMemory()); }
	static ICoreMemory& cluster(std::vector<int> dimentions) { return *(new ClusterMemory(dimentions)); }
	static ICoreMemory& cluster(CoreEntry& defaultValue) { return *(new AllMemory(defaultValue)); }
	static ICoreMemory& cluster(std::vector<int> dimentions, CoreEntry& defaultValue) { return *(new AllMemory(dimentions, defaultValue)); }
};

