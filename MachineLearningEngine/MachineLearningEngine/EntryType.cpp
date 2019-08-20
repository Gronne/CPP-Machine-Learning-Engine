#include "EntryType.h"

EntryType::EntryType()
{
}

EntryType::EntryType(const EntryType &newEntry)
{
	_number = newEntry._number;
	_complex = newEntry._complex;
	_variable = newEntry._variable;
}

EntryType::EntryType(const EntryTypeNumber &number)
{
	_number = number;
}

EntryType::EntryType(const EntryTypeComplex &complex)
{
	_complex = complex;
}

EntryType::EntryType(const EntryTypeVariable &variable)
{
	_variable = variable;
}

EntryType::~EntryType()
{
}

EntryType EntryType::operator+(const EntryType &entry) const
{
	return EntryType();
}

EntryType EntryType::operator-(const EntryType &entry) const
{
	return EntryType();
}

EntryType EntryType::operator*(const EntryType &entry) const
{
	return EntryType();
}

EntryType EntryType::operator/(const EntryType &entry) const
{
	return EntryType();
}

std::string EntryType::print(void) const
{
	std::string entryString;

	entryString += _number.print();
	entryString += _complex.print();
	entryString += _variable.print();

	return entryString;
}
