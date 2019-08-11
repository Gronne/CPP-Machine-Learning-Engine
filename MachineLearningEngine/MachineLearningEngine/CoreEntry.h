#pragma once
#include <string>
#include "ICoreEntryType.h"
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"

class CoreEntry
{
public:
	CoreEntry();
	CoreEntry(const ICoreEntryType&);
	CoreEntry(const ICoreEntryType&, const ICoreEntryType&);
	CoreEntry(const ICoreEntryType&, const ICoreEntryType&, const ICoreEntryType&);
	~CoreEntry();

	CoreEntry getEntry(void);
	void setEntry(const CoreEntry&);
	std::string printEntry(void);

	ICoreEntryType operator+(const ICoreEntryType&);
	void operator+=(const ICoreEntryType&);

	ICoreEntryType operator-(const ICoreEntryType&);
	void operator-=(const ICoreEntryType&);

	ICoreEntryType operator*(const ICoreEntryType&);
	void operator*=(const ICoreEntryType&);

	ICoreEntryType operator/(const ICoreEntryType&);
	void operator/=(const ICoreEntryType&);

	ICoreEntryType operator=(const ICoreEntryType&);
	void operator==(const ICoreEntryType&);

	
private:

	EntryTypeNumber _number;
	EntryTypeComplex _complex;
	EntryTypeVariable _variable;
};

