#pragma once
#include "EntryType.h"

class EntryFactory
{
public:
	EntryFactory();
	~EntryFactory();

	static EntryType Number(double state) { return EntryType(EntryTypeNumber(state)); }
	static EntryType Complex(double state) { return EntryType(EntryTypeComplex(state)); }
	static EntryType Variable(std::string state) { return EntryType(EntryTypeVariable(state)); }
};


