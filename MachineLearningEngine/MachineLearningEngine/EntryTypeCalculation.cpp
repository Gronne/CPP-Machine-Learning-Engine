#include "EntryTypeCalculation.h"



EntryTypeCalculation::EntryTypeCalculation()
{
	_state = '~';
}


EntryTypeCalculation::EntryTypeCalculation(char state)
{
	if (_validStates.find(state) != std::string::npos) //npos = No match
		_state = state;
	else 
		throw std::exception("Not possible to make this type of calculation");
	
}

EntryTypeCalculation::~EntryTypeCalculation()
{

}

EntryType EntryTypeCalculation::calculate(const EntryType &entryA, const EntryType &entryB)
{
	EntryType buffer;
	switch (_state)
	{
	case '+': buffer = addition(entryA, entryB);
		break;
	case '-': buffer = substraction(entryA, entryB);
		break;
	case '*': buffer = multiplication(entryA, entryB);
		break;
	case '/': buffer = division(entryA, entryB);
		break;

	default:
		throw std::exception("Not possible to make this type of calculation");
	}
	return buffer;
}

std::string EntryTypeCalculation::getState(void) const
{
	return std::string() + _state;
}

EntryType EntryTypeCalculation::addition(const EntryType &entryA, const EntryType &entryB)
{
	return EntryType(entryA + entryB);
}

EntryType EntryTypeCalculation::substraction(const EntryType &entryA, const EntryType &entryB)
{
	return EntryType(entryA - entryB);
}

EntryType EntryTypeCalculation::multiplication(const EntryType &entryA, const EntryType &entryB)
{
	return EntryType(entryA * entryB);
}

EntryType EntryTypeCalculation::division(const EntryType &entryA, const EntryType &entryB)
{
	return EntryType(entryA / entryB);
}

