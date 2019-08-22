#include "EntryType.h"

EntryType::EntryType()
{
}

EntryType::EntryType(const EntryType &newEntry)
{
	_number = newEntry._number;
	_complex = newEntry._complex;
	_variable = newEntry._variable;
	_isPossible = newEntry.isPossible();
}

EntryType::EntryType(const EntryTypeNumber &number)
{
	_number = number;
	_isPossible = true;
}

EntryType::EntryType(const EntryTypeComplex &complex)
{
	_complex = complex;
	_isPossible = true;
}

EntryType::EntryType(const EntryTypeVariable &variable)
{
	_variable = variable;
	_isPossible = true;
}

EntryType::~EntryType()
{
}

EntryType EntryType::operator+(const EntryType &entry) const
{
	EntryType newEntry;

	if (_number.isInitialised() == true && entry._number.isInitialised() == true)
	{
		newEntry._number = EntryTypeNumber(_number.getState() + entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._complex.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_number.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_complex.isInitialised() == true && entry._number.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_complex.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		newEntry._complex = EntryTypeComplex(_complex.getState() + entry._complex.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_variable.isInitialised() == true && entry._number.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._complex.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;


	return newEntry;
}

EntryType EntryType::operator-(const EntryType &entry) const
{
	EntryType newEntry;

	if (_number.isInitialised() == true && entry._number.isInitialised() == true)
	{
		newEntry._number = EntryTypeNumber(_number.getState() - entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._complex.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_number.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_complex.isInitialised() == true && entry._number.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_complex.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		newEntry._complex = EntryTypeComplex(_complex.getState() - entry._complex.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_variable.isInitialised() == true && entry._number.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._complex.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;


	return newEntry;
}

EntryType EntryType::operator*(const EntryType &entry) const
{
	EntryType newEntry;

	if (_number.isInitialised() == true && entry._number.isInitialised() == true)
	{
		newEntry._number = EntryTypeNumber(_number.getState() * entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		newEntry._complex = EntryTypeComplex(_number.getState() * entry._complex.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_complex.isInitialised() == true && entry._number.isInitialised() == true)
	{
		newEntry._complex = EntryTypeComplex(_complex.getState() * entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		newEntry._number = EntryTypeNumber(_complex.getState() * entry._complex.getState() * -1);
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_variable.isInitialised() == true && entry._number.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._complex.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;


	return newEntry;
}

EntryType EntryType::operator/(const EntryType &entry) const
{
	EntryType newEntry;

	if (_number.isInitialised() == true && entry._number.isInitialised() == true)
	{
		newEntry._number = EntryTypeNumber(_number.getState() / entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		newEntry._complex = EntryTypeComplex(_number.getState() / (entry._complex.getState() * -1));
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_complex.isInitialised() == true && entry._number.isInitialised() == true)
	{
		newEntry._complex = EntryTypeComplex(_complex.getState() / entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		newEntry._number = EntryTypeNumber(_complex.getState() / entry._complex.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_variable.isInitialised() == true && entry._number.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._complex.isInitialised() == true)
		newEntry._isPossible = false;

	else if (_variable.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;


	return newEntry;
}

bool EntryType::operator==(const EntryType &entry) const
{
	if (_number.getState() != 0 && entry._number.getState() != 0)
		return true;
	if (_complex.getState() != 0 && entry._complex.getState() != 0)
		return true;
	else
		return false;
}

bool EntryType::operator!=(const EntryType &entry) const
{
	return ((*this == entry) == false);
}

std::string EntryType::print(void) const
{
	std::string entryString;

	entryString += _number.print();
	entryString += _complex.print();
	entryString += _variable.print();

	return entryString;
}

bool EntryType::isPossible(void) const
{
	return _isPossible;
}

bool EntryType::isEmpty(void) const
{
	return (_number.getState() == 0 && _complex.getState() == 0 && _variable.getState() == "");
}

bool EntryType::isVariable(void) const
{
	return (_variable.getState() != "");
}

bool EntryType::isComplex(void) const
{
	return (_complex.getState() != 0);
}

bool EntryType::sameAs(const EntryType &entry) const
{
	return (_number.getState() == entry._number.getState() &&
			_complex.getState() == entry._complex.getState() &&
			_variable.getState() == entry._variable.getState());
}
