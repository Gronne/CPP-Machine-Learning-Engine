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

	void setState(double);
	void setState(const EntryTypeNumber&);
	bool isInitialised(void) const;
	double getState(void) const;
	std::string print(void) const;

private:
	double _state = 0;
	bool _initialised = false;
};

