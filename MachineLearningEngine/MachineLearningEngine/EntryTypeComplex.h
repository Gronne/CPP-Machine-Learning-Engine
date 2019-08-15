#pragma once
#include "EntryTypeNumber.h"
#include "EntryTypeVariable.h"

class EntryTypeComplex
{
public:
	EntryTypeComplex();
	~EntryTypeComplex();
	EntryTypeComplex(const EntryTypeComplex&);
	EntryTypeComplex(double);

	double getState(void) const { return _state; }

	EntryType operator()(const std::string, double);

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
	double _state = 0.0;
};

