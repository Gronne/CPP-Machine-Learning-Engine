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

void EntryTypeNumber::operator=(const EntryTypeNumber &entry)
{
	this->_initialised = entry._initialised;
	this->_state = entry._state;
}

bool EntryTypeNumber::operator==(const EntryTypeNumber &entry)
{
	return this->_state == entry._state && this->_initialised == entry._initialised;
}

bool EntryTypeNumber::operator!=(const EntryTypeNumber &entry)
{
	return this->_state != entry._state || this->_initialised != entry._initialised;
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
		return minimizeNumberString(std::to_string(_state));
	else
		return "";
}

std::string EntryTypeNumber::minimizeNumberString(std::string numberStr) const
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
