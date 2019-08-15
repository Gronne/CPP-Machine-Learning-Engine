#pragma once
#include <string>
#include "EntryType.h"
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"
#include <list>

class CoreEntry
{
public:
	CoreEntry();
	CoreEntry(const EntryType&);
	CoreEntry(const CoreEntry&);
	~CoreEntry();

	EntryType operator=(const EntryType&);
	bool operator==(const EntryType&);
	EntryType operator+(const EntryType&);
	void operator+=(const EntryType&);
	EntryType operator-(const EntryType&);
	void operator-=(const EntryType&);
	EntryType operator*(const EntryType&);
	void operator*=(const EntryType&);
	EntryType operator/(const EntryType&);
	void operator/=(const EntryType&);

	
private:
	std::list<EntryType> _prefixList;
};

