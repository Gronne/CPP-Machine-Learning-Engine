#include "NextMemory.h"



NextMemory::NextMemory()
{
}

NextMemory::NextMemory(std::vector<int>)
{
}

NextMemory::NextMemory(CoreEntry &)
{
}

NextMemory::NextMemory(ICoreMemory &)
{
}

NextMemory::NextMemory(std::vector<int>, CoreEntry &)
{
}


NextMemory::~NextMemory()
{
}

CoreEntry NextMemory::get(const std::vector<int>) const
{
	return CoreEntry();
}

void NextMemory::set(const std::vector<int>, CoreEntry)
{
}

std::vector<int> NextMemory::size(void)
{
	return std::vector<int>();
}

void NextMemory::operator=(ICoreMemory &)
{
}
