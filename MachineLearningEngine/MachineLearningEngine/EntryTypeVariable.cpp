#include "EntryTypeVariable.h"



EntryTypeVariable::EntryTypeVariable()
{
}


EntryTypeVariable::~EntryTypeVariable()
{
}

EntryTypeVariable::EntryTypeVariable(const EntryTypeVariable &entryType)
{
	_state = entryType.getState();
}

EntryTypeVariable::EntryTypeVariable(std::string state)
{
	_state = state;
}

EntryType EntryTypeVariable::operator()(const std::string state, const EntryTypeNumber &entryType)
{
	std::string stateBuffer = getState();

	return EntryType();
}

EntryType EntryTypeVariable::operator()(const std::string state, const EntryTypeComplex &entryType)
{
	return EntryType();
}

EntryType EntryTypeVariable::operator()(const std::string state, const EntryTypeVariable &entryType)
{
	return EntryType();
}

EntryType EntryTypeVariable::operator=(const EntryTypeNumber &entryType)
{
	return EntryType();
}

bool EntryTypeVariable::operator==(const EntryTypeNumber &entryType)
{
	return false;
}

EntryType EntryTypeVariable::operator+(const EntryTypeNumber &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator+=(const EntryTypeNumber &entryType)
{
}

EntryType EntryTypeVariable::operator-(const EntryTypeNumber &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator-=(const EntryTypeNumber &entryType)
{
}

EntryType EntryTypeVariable::operator*(const EntryTypeNumber &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator*=(const EntryTypeNumber &entryType)
{
}

EntryType EntryTypeVariable::operator/(const EntryTypeNumber &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator/=(const EntryTypeNumber &entryType)
{
}

EntryType EntryTypeVariable::operator=(const EntryTypeVariable &entryType)
{
	return EntryType();
}

bool EntryTypeVariable::operator==(const EntryTypeVariable &entryType)
{
	return false;
}

EntryType EntryTypeVariable::operator+(const EntryTypeVariable &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator+=(const EntryTypeVariable &entryType)
{
}

EntryType EntryTypeVariable::operator-(const EntryTypeVariable &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator-=(const EntryTypeVariable &entryType)
{
}

EntryType EntryTypeVariable::operator*(const EntryTypeVariable &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator*=(const EntryTypeVariable &entryType)
{
}

EntryType EntryTypeVariable::operator/(const EntryTypeVariable &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator/=(const EntryTypeVariable &entryType)
{
}

EntryType EntryTypeVariable::operator=(const EntryTypeComplex &entryType)
{
	return EntryType();
}

bool EntryTypeVariable::operator==(const EntryTypeComplex &entryType)
{
	return false;
}

EntryType EntryTypeVariable::operator+(const EntryTypeComplex &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator+=(const EntryTypeComplex &entryType)
{
}

EntryType EntryTypeVariable::operator-(const EntryTypeComplex &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator-=(const EntryTypeComplex &entryType)
{
}

EntryType EntryTypeVariable::operator*(const EntryTypeComplex &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator*=(const EntryTypeComplex &entryType)
{
}

EntryType EntryTypeVariable::operator/(const EntryTypeComplex &entryType)
{
	return EntryType();
}

void EntryTypeVariable::operator/=(const EntryTypeComplex &entryType)
{
}
