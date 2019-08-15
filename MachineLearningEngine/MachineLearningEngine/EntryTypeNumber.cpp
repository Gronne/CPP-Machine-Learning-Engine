#include "EntryTypeNumber.h"



EntryTypeNumber::EntryTypeNumber()
{

}

EntryTypeNumber::~EntryTypeNumber()
{

}

EntryTypeNumber::EntryTypeNumber(const EntryTypeNumber &entryType)
{
	_state = entryType.getState();
}

EntryTypeNumber::EntryTypeNumber(double value)
{
	_state = value;
}


EntryType EntryTypeNumber::operator()(const std::string variable, double value)
{
	return EntryType(*this);
}

EntryType EntryTypeNumber::operator=(const EntryTypeNumber &entryType)
{
	_state = entryType.getState();
	return EntryType(*this);
}

bool EntryTypeNumber::operator==(const EntryTypeNumber &entryType)
{
	return _state == entryType.getState();
}

EntryType EntryTypeNumber::operator+(const EntryTypeNumber &entryType)
{
	return EntryTypeNumber(_state + entryType.getState());
}

void EntryTypeNumber::operator+=(const EntryTypeNumber &entryType)
{
	_state += entryType.getState();
}

EntryType EntryTypeNumber::operator-(const EntryTypeNumber &entryType)
{
	return EntryTypeNumber(_state - entryType.getState());
}

void EntryTypeNumber::operator-=(const EntryTypeNumber &entryType)
{
	_state -= entryType.getState();
}

EntryType EntryTypeNumber::operator*(const EntryTypeNumber &entryType)
{
	return EntryTypeNumber(_state * entryType.getState());
}

void EntryTypeNumber::operator*=(const EntryTypeNumber &entryType)
{
	_state *= entryType.getState();
}

EntryType EntryTypeNumber::operator/(const EntryTypeNumber &entryType)
{
	return EntryTypeNumber(_state / entryType.getState());
}

void EntryTypeNumber::operator/=(const EntryTypeNumber &entryType)
{
	_state /= entryType.getState();
}

EntryType EntryTypeNumber::operator=(const EntryTypeVariable &entryType)
{
	_state = 0;
	return EntryType(*this);
}

bool EntryTypeNumber::operator==(const EntryTypeVariable &entryType)
{
	return false;
}

EntryType EntryTypeNumber::operator+(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeNumber::operator+=(const EntryTypeVariable &entryType)
{
	_state += 0;
}

EntryType EntryTypeNumber::operator-(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeNumber::operator-=(const EntryTypeVariable &entryType)
{
	_state -= 0;
}

EntryType EntryTypeNumber::operator*(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeNumber::operator*=(const EntryTypeVariable &entryType)
{
	_state *= 1;
}

EntryType EntryTypeNumber::operator/(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeNumber::operator/=(const EntryTypeVariable &entryType)
{
	_state = _state;
}

EntryType EntryTypeNumber::operator=(const EntryTypeComplex &entryType)
{
	_state = 0;
	return EntryType(*this);
}

bool EntryTypeNumber::operator==(const EntryTypeComplex &entryType)
{
	return false;
}

EntryType EntryTypeNumber::operator+(const EntryTypeComplex &entryType)
{
	return EntryType(*this);
}

void EntryTypeNumber::operator+=(const EntryTypeComplex &entryType)
{
	_state += 0;
}

EntryType EntryTypeNumber::operator-(const EntryTypeComplex &entryType)
{
	return EntryType(*this);
}

void EntryTypeNumber::operator-=(const EntryTypeComplex &entryType)
{
	_state -= 0;
}

EntryType EntryTypeNumber::operator*(const EntryTypeComplex &entryType)
{
	return EntryTypeNumber(0);
}

void EntryTypeNumber::operator*=(const EntryTypeComplex &entryType)
{
	_state = 0;
}

EntryType EntryTypeNumber::operator/(const EntryTypeComplex &entryType)
{
	return EntryTypeNumber(0);
}

void EntryTypeNumber::operator/=(const EntryTypeComplex &entryType)
{
	_state = 0;
}
