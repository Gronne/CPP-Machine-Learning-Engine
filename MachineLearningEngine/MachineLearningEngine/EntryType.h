#pragma once
#include <string>
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"

class EntryType
{
public:
	EntryType();
	EntryType(const EntryType&);
	EntryType(const EntryTypeNumber&);
	EntryType(const EntryTypeComplex&);
	EntryType(const EntryTypeVariable&);
	EntryType(const EntryTypeNumber&, const EntryTypeComplex&);
	EntryType(const EntryTypeNumber&, const EntryTypeVariable&);
	EntryType(const EntryTypeComplex&, const EntryTypeVariable&);
	EntryType(const EntryTypeNumber&, const EntryTypeComplex&, const EntryTypeVariable&);
	~EntryType();

	EntryType getEntry(void);
	void setEntry(const EntryType&);
	std::string printEntry(void);


private:
	EntryTypeNumber _number;
	EntryTypeComplex _complex;
	EntryTypeVariable _variable;
};

