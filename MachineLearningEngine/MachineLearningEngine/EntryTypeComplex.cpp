#include "EntryTypeComplex.h"



EntryTypeComplex::EntryTypeComplex()
{
}


EntryTypeComplex::~EntryTypeComplex()
{
}

EntryTypeComplex::EntryTypeComplex(const EntryTypeComplex &entryType)
{
	_state = entryType.getState();
}

EntryTypeComplex::EntryTypeComplex(double value)
{
	_state = value;
}


EntryType EntryTypeComplex::operator()(const std::string, double)
{
	return EntryType(*this);
}

EntryType EntryTypeComplex::operator=(const EntryTypeNumber &entryType)
{
	_state = 0;
	return EntryType(*this);
}

bool EntryTypeComplex::operator==(const EntryTypeNumber &entryType)
{
	return false;
}

EntryType EntryTypeComplex::operator+(const EntryTypeNumber &entryType)
{
	return EntryType(*this);
}

void EntryTypeComplex::operator+=(const EntryTypeNumber &entryType)
{
	_state += 0;
}

EntryType EntryTypeComplex::operator-(const EntryTypeNumber &entryType)
{
	return EntryType(*this);
}

void EntryTypeComplex::operator-=(const EntryTypeNumber &entryType)
{
	_state -= 0;
}

EntryType EntryTypeComplex::operator*(const EntryTypeNumber &entryType)
{
	return EntryTypeComplex(_state * entryType.getState());
}

void EntryTypeComplex::operator*=(const EntryTypeNumber &entryType)
{
	_state *= entryType.getState();
}

EntryType EntryTypeComplex::operator/(const EntryTypeNumber &entryType)
{
	return EntryTypeComplex(_state / entryType.getState());
}

void EntryTypeComplex::operator/=(const EntryTypeNumber &entryType)
{
	_state /= entryType.getState();
}

EntryType EntryTypeComplex::operator=(const EntryTypeVariable &entryType)
{
	_state = 0;
	return EntryType(*this);
}

bool EntryTypeComplex::operator==(const EntryTypeVariable &entryType)
{
	return false;
}

EntryType EntryTypeComplex::operator+(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeComplex::operator+=(const EntryTypeVariable &entryType)
{
	_state += 0;
}

EntryType EntryTypeComplex::operator-(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeComplex::operator-=(const EntryTypeVariable &entryType)
{
	_state -= 0;
}

EntryType EntryTypeComplex::operator*(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeComplex::operator*=(const EntryTypeVariable &entryType)
{
	_state *= 1;
}

EntryType EntryTypeComplex::operator/(const EntryTypeVariable &entryType)
{
	return EntryType(*this);
}

void EntryTypeComplex::operator/=(const EntryTypeVariable &entryType)
{
	_state = _state;
}

EntryType EntryTypeComplex::operator=(const EntryTypeComplex &entryType)
{
	_state = entryType.getState();
	return EntryType(*this);
}

bool EntryTypeComplex::operator==(const EntryTypeComplex &entryType)
{
	return _state == entryType.getState();
}

EntryType EntryTypeComplex::operator+(const EntryTypeComplex &entryType)
{
	return EntryTypeComplex(_state + entryType.getState());
}

void EntryTypeComplex::operator+=(const EntryTypeComplex &entryType)
{
	_state += entryType.getState();
}

EntryType EntryTypeComplex::operator-(const EntryTypeComplex &entryType)
{
	return EntryTypeComplex(_state - entryType.getState());
}

void EntryTypeComplex::operator-=(const EntryTypeComplex &entryType)
{
	_state -= entryType.getState();
}

EntryType EntryTypeComplex::operator*(const EntryTypeComplex &entryType)
{
	return EntryTypeComplex(_state * entryType.getState());
}

void EntryTypeComplex::operator*=(const EntryTypeComplex &entryType)
{
	_state *= entryType.getState();
}

EntryType EntryTypeComplex::operator/(const EntryTypeComplex &entryType)
{
	return EntryTypeComplex(_state / entryType.getState());
}

void EntryTypeComplex::operator/=(const EntryTypeComplex &entryType)
{
	_state = entryType.getState();
}

