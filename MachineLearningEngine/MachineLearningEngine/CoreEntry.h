#pragma once
#include <string>
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"

class CoreEntry
{
public:
	CoreEntry();
	~CoreEntry();

	CoreEntry getEntry(void);
	void setEntry(const CoreEntry&);
	std::string printEntry(void);

	
private:
	EntryTypeNumber _number;
	EntryTypeComplex _complex;
	EntryTypeVariable _variable;
};

