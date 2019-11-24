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

void EntryTypeComplex::operator=(const EntryTypeComplex &entry)
{
	this->_initialised = entry._initialised;
	this->_state = entry._state;
}

bool EntryTypeComplex::operator==(const EntryTypeComplex &entry)
{
	return this->_state == entry._state && this->_initialised == entry._initialised;
}

bool EntryTypeComplex::operator!=(const EntryTypeComplex &entry)
{
	return this->_state != entry._state || this->_initialised != entry._initialised;
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
		return minimizeNumberString(std::to_string(_state)) + "i";
	else
		return "";
}


std::string EntryTypeComplex::minimizeNumberString(std::string numberStr) const
{
	int cursor = 1;
	for (; cursor <= numberStr.size(); ++cursor)
	{
		char currentCharacter = numberStr[numberStr.size() - cursor];
		if (currentCharacter != '0')
		{
			if (currentCharacter == '.')
				++cursor;
			break;
		}
	}

	return numberStr.substr(0, numberStr.size() - cursor + 1);
}


