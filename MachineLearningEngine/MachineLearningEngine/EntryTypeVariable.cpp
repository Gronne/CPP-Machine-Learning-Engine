#include "EntryTypeVariable.h"



EntryTypeVariable::EntryTypeVariable()
{
	_state = "";
}


EntryTypeVariable::~EntryTypeVariable()
{
}

EntryTypeVariable::EntryTypeVariable(const EntryTypeVariable &entryType)
{
	setState(entryType.getState());
}

EntryTypeVariable::EntryTypeVariable(std::string state)
{
	setState(state);
}

void EntryTypeVariable::setState(std::string state)
{
	_state = state;
	_initialised = true;
}

void EntryTypeVariable::setState(const EntryTypeVariable &entry)
{
	setState(entry.getState());
}

bool EntryTypeVariable::isInitialised(void) const
{
	return _initialised;
}

std::string EntryTypeVariable::getState(void) const
{
	return _state;
}
 
std::string EntryTypeVariable::print(void) const
{
	return getState();
}

