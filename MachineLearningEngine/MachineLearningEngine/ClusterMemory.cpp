#include "ClusterMemory.h"



ClusterMemory::ClusterMemory()
{
}

ClusterMemory::ClusterMemory(std::vector<int>)
{
}

ClusterMemory::ClusterMemory(CoreEntry &)
{
}

ClusterMemory::ClusterMemory(std::vector<int>, CoreEntry &)
{
}


ClusterMemory::~ClusterMemory()
{
}

CoreEntry ClusterMemory::get(const std::vector<int>) const
{
	return CoreEntry();
}

void ClusterMemory::set(const std::vector<int>, CoreEntry)
{
}

std::vector<int> ClusterMemory::size(void)
{
	return std::vector<int>();
}
