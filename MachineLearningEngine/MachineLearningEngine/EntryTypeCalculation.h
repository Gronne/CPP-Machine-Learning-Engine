#pragma once
#include <string>
#include "EntryType.h"

class EntryTypeCalculation
{
public:
	EntryTypeCalculation();
	EntryTypeCalculation(char);
	~EntryTypeCalculation();

	EntryType calculate(const EntryType&, const EntryType&);
	std::string getState(void) const;

private:
	EntryType addition(const EntryType&, const EntryType&);
	EntryType substraction(const EntryType&, const EntryType&);
	EntryType multiplication(const EntryType&, const EntryType&);
	EntryType division(const EntryType&, const EntryType&);

	char _state;
	std::string _validStates = "+-/*~";
};

