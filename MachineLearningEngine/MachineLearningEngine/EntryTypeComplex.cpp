#include "EntryTypeComplex.h"



EntryTypeComplex::EntryTypeComplex()
{
	_state = 0;
}


EntryTypeComplex::~EntryTypeComplex()
{
}

EntryTypeComplex::EntryTypeComplex(const EntryTypeComplex &entryType)
{
	setState(entryType.getState());
}

EntryTypeComplex::EntryTypeComplex(double value)
{
	setState(value);
}

void EntryTypeComplex::setState(double state)
{
	_state = state;
	_initialised = true;
}

void EntryTypeComplex::setState(const EntryTypeComplex &entry)
{
	setState(entry.getState());
}

double EntryTypeComplex::getState(void) const
{
	return _state;
}

bool EntryTypeComplex::isInitialised(void) const
{
	return _initialised;
}


std::string EntryTypeComplex::print(void) const
{
	if (isInitialised() == true)
		return std::to_string(_state) + "i";
	else
		return "";
}


