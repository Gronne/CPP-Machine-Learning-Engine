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
	_isPossible = _number.isInitialised();
}

EntryType::EntryType(const EntryTypeComplex &complex)
{
	_complex = complex;
	_isPossible = _complex.isInitialised();
}

EntryType::EntryType(const EntryTypeVariable &variable)
{
	_variable = variable;
	_isPossible = _variable.isInitialised();
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
		if (_number.getState() == 0 || entry._number.getState() == 0)
			newEntry._number = EntryTypeNumber(0);
		else
			newEntry._number = EntryTypeNumber(_number.getState() * entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		if (_number.getState() == 0 || entry._complex.getState() == 0)
			newEntry._complex = EntryTypeComplex(0);
		else
			newEntry._complex = EntryTypeComplex(_number.getState() * entry._complex.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_complex.isInitialised() == true && entry._number.isInitialised() == true)
	{
		if (_complex.getState() == 0 || entry._number.getState() == 0)
			newEntry._complex = EntryTypeComplex(0);
		else
			newEntry._complex = EntryTypeComplex(_complex.getState() * entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		if (_complex.getState() == 0 || entry._complex.getState() == 0)
			newEntry._number = EntryTypeNumber(0);
		else
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
		if (_number.getState() == 0 && entry._number.getState() == 0)
			newEntry._number = EntryTypeNumber(0);
		else if (_number.getState() != 0 && entry._number.getState() == 0)
			newEntry._number = EntryTypeNumber(INFINITY);
		else
			newEntry._number = EntryTypeNumber(_number.getState() / entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		if (_number.getState() == 0 && entry._complex.getState() == 0)
			newEntry._complex = EntryTypeComplex(0);
		else if (_number.getState() != 0 && entry._complex.getState() == 0)
			newEntry._complex = EntryTypeComplex(INFINITY);
		else
			newEntry._complex = EntryTypeComplex(_number.getState() / (entry._complex.getState() * -1));
		newEntry._isPossible = true;
	}

	else if (_number.isInitialised() == true && entry._variable.isInitialised() == true)
		newEntry._isPossible = false;



	else if (_complex.isInitialised() == true && entry._number.isInitialised() == true)
	{
		if (_complex.getState() == 0 && entry._number.getState() == 0)
			newEntry._complex = EntryTypeComplex(0);
		else if (_complex.getState() != 0 && entry._number.getState() == 0)
			newEntry._complex = EntryTypeComplex(INFINITY);
		else
			newEntry._complex = EntryTypeComplex(_complex.getState() / entry._number.getState());
		newEntry._isPossible = true;
	}

	else if (_complex.isInitialised() == true && entry._complex.isInitialised() == true)
	{
		if (_complex.getState() == 0 && entry._complex.getState() == 0)
			newEntry._number = EntryTypeNumber(0);
		else if (_complex.getState() != 0 && entry._complex.getState() == 0)
			newEntry._number = EntryTypeNumber(INFINITY);
		else
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
	return sameAs(entry) == true;
}

bool EntryType::operator!=(const EntryType &entry) const
{
	return sameAs(entry) == false;
}

std::string EntryType::print(void) const
{
	std::string entryTypeString;

	entryTypeString += _number.print();
	entryTypeString += _complex.print();
	entryTypeString += _variable.print();

	return entryTypeString;
}

bool EntryType::isPossible(void) const
{
	return _isPossible;
}

bool EntryType::isEmpty(void) const
{
	return (_number.isInitialised() == false && 
			_complex.isInitialised() == false && 
			_variable.isInitialised() == false);
}

bool EntryType::isVariable(void) const
{
	return _variable.isInitialised();
}

bool EntryType::isComplex(void) const
{
	return _complex.isInitialised();
}

bool EntryType::isNumber(void) const
{
	return _number.isInitialised();
}

bool EntryType::sameAs(const EntryType &entry) const
{
	return (this->_number == entry._number &&
			this->_complex == entry._complex  &&
			this->_variable == entry._variable);
}
