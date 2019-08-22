#pragma once

#include "EntryFactory.h"
#include "CoreEntry.h"

class CoreEntryFactory
{
public:
	CoreEntryFactory();
	~CoreEntryFactory();

	static CoreEntry Number(double state) { return CoreEntry(EntryType(EntryTypeNumber(state))); }
	static CoreEntry Complex(double state) { return CoreEntry(EntryType(EntryTypeComplex(state))); }
	static CoreEntry Variable(std::string state) { return CoreEntry(EntryType(EntryTypeVariable(state))); }
};

