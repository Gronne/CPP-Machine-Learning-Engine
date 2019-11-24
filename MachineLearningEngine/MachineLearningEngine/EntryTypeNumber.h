#pragma once
#include <string>
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"

class EntryTypeNumber
{
public:
	EntryTypeNumber();
	~EntryTypeNumber();
	EntryTypeNumber(const EntryTypeNumber&);
	EntryTypeNumber(double);

	void operator=(const EntryTypeNumber&);
	bool operator==(const EntryTypeNumber&) const;
	bool operator!=(const EntryTypeNumber&) const;

	void setState(double);
	void setState(const EntryTypeNumber&);
	bool isInitialised(void) const;
	double getState(void) const;
	std::string print(void) const;

private:
	std::string minimizeNumberString(std::string) const;

	double _state = 0;
	bool _initialised = false;
};

