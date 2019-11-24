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

void EntryTypeVariable::operator=(const EntryTypeVariable &entry)
{
	this->_initialised = entry._initialised;
	this->_state = entry._state;
}

bool EntryTypeVariable::operator==(const EntryTypeVariable &entry) const
{
	return this->_state == entry._state && this->_initialised == entry._initialised;
}

bool EntryTypeVariable::operator!=(const EntryTypeVariable &entry) const
{
	return this->_state != entry._state || this->_initialised != entry._initialised;
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

