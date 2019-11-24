#pragma once
#include <string>
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"


class EntryType
{
public:
	EntryType();
	EntryType(const EntryType&);
	EntryType(const EntryTypeNumber&);
	EntryType(const EntryTypeComplex&);
	EntryType(const EntryTypeVariable&);
	~EntryType();

	EntryType operator+(const EntryType&) const;
	EntryType operator-(const EntryType&) const;
	EntryType operator*(const EntryType&) const;
	EntryType operator/(const EntryType&) const;
	bool operator==(const EntryType&) const;
	bool operator!=(const EntryType&) const;

	std::string print(void) const;
	bool isPossible(void) const;
	bool isEmpty(void) const;
	bool isNumber(void) const;
	bool isVariable(void) const;
	bool isComplex(void) const;
	bool sameAs(const EntryType&) const;

private:
	EntryTypeNumber _number;
	EntryTypeComplex _complex;
	EntryTypeVariable _variable;

	bool _isPossible;
};

