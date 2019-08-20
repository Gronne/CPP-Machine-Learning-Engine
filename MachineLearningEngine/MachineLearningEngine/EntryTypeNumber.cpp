#include "EntryTypeNumber.h"



EntryTypeNumber::EntryTypeNumber()
{
	_state = 0;
}

EntryTypeNumber::~EntryTypeNumber()
{

}

EntryTypeNumber::EntryTypeNumber(const EntryTypeNumber &entryType)
{
	setState(entryType.getState());
}

EntryTypeNumber::EntryTypeNumber(double value)
{
	setState(value);
}

void EntryTypeNumber::setState(double state)
{
	_state = state;
	_initialised = true;
}

void EntryTypeNumber::setState(const EntryTypeNumber &entry)
{
	setState(entry.getState());
}

bool EntryTypeNumber::isInitialised(void) const
{
	return _initialised;
}


double EntryTypeNumber::getState(void) const
{
	return _state;
}

std::string EntryTypeNumber::print(void) const
{
	if (isInitialised() == true)
		return std::to_string(_state);
	else
		return "";
}
