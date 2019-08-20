#pragma once
#include <string>

class EntryTypeVariable
{
public:
	EntryTypeVariable();
	~EntryTypeVariable();
	EntryTypeVariable(const EntryTypeVariable&);
	EntryTypeVariable(std::string);

	void setState(std::string);
	void setState(const EntryTypeVariable&);
	bool isInitialised(void) const;
	std::string getState(void) const;
	std::string print(void) const;

private:
	std::string _state = "";
	bool _initialised = false;
};

