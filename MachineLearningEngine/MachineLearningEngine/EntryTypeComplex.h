#pragma once
#include <string>

class EntryTypeComplex
{
public:
	EntryTypeComplex();
	~EntryTypeComplex();
	EntryTypeComplex(const EntryTypeComplex&);
	EntryTypeComplex(double);

	void operator=(const EntryTypeComplex&);
	bool operator==(const EntryTypeComplex&);
	bool operator!=(const EntryTypeComplex&);

	void setState(double);
	void setState(const EntryTypeComplex&);
	bool isInitialised(void) const;
	double getState(void) const;
	std::string print(void) const;

private:
	std::string minimizeNumberString(std::string) const;
	double _state = 0.0;
	bool _initialised = false;
};

