#pragma once
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"

class EntryTypeVariable
{
public:
	EntryTypeVariable();
	~EntryTypeVariable();
	EntryTypeVariable(const EntryTypeVariable&);
	EntryTypeVariable(std::string);

	std::string getState(void) const { return _state; }

	EntryType operator()(const std::string, const EntryTypeNumber&);
	EntryType operator()(const std::string, const EntryTypeComplex&);
	EntryType operator()(const std::string, const EntryTypeVariable&);

	EntryType operator=(const EntryTypeNumber&);
	bool operator==(const EntryTypeNumber&);
	EntryType operator+(const EntryTypeNumber&);
	void operator+=(const EntryTypeNumber&);
	EntryType operator-(const EntryTypeNumber&);
	void operator-=(const EntryTypeNumber&);
	EntryType operator*(const EntryTypeNumber&);
	void operator*=(const EntryTypeNumber&);
	EntryType operator/(const EntryTypeNumber&);
	void operator/=(const EntryTypeNumber&);

	EntryType operator=(const EntryTypeVariable&);
	bool operator==(const EntryTypeVariable&);
	EntryType operator+(const EntryTypeVariable&);
	void operator+=(const EntryTypeVariable&);
	EntryType operator-(const EntryTypeVariable&);
	void operator-=(const EntryTypeVariable&);
	EntryType operator*(const EntryTypeVariable&);
	void operator*=(const EntryTypeVariable&);
	EntryType operator/(const EntryTypeVariable&);
	void operator/=(const EntryTypeVariable&);

	EntryType operator=(const EntryTypeComplex&);
	bool operator==(const EntryTypeComplex&);
	EntryType operator+(const EntryTypeComplex&);
	void operator+=(const EntryTypeComplex&);
	EntryType operator-(const EntryTypeComplex&);
	void operator-=(const EntryTypeComplex&);
	EntryType operator*(const EntryTypeComplex&);
	void operator*=(const EntryTypeComplex&);
	EntryType operator/(const EntryTypeComplex&);
	void operator/=(const EntryTypeComplex&);

private:
	std::string _state = "";
};

