#pragma once
#include <string>
#include "EntryType.h"
#include "EntryTypeCalculation.h"
#include <list>

class CoreEntry
{
public:
	CoreEntry();
	CoreEntry(const EntryType&);
	CoreEntry(const CoreEntry&);
	~CoreEntry();

	CoreEntry operator=(const EntryType&);
	CoreEntry operator=(const CoreEntry&);
	bool operator==(const CoreEntry&);
	CoreEntry operator+(const CoreEntry&);
	void operator+=(const CoreEntry&);
	CoreEntry operator-(const CoreEntry&);
	void operator-=(const CoreEntry&);
	CoreEntry operator*(const CoreEntry&);
	void operator*=(const CoreEntry&);
	CoreEntry operator/(const CoreEntry&);
	void operator/=(const CoreEntry&);

	bool isLeaf(void) const;
	std::string print(void) const;

	
private:
	void resetTree(void);
	void setLeaf(const EntryType&);
	void addEntries(const CoreEntry&);
	void addLeftEntries(const CoreEntry&);
	void addRightEntries(const CoreEntry&);
	void setCalculationType(EntryTypeCalculation);
	CoreEntry* copyTree(const CoreEntry&);

	void collapsTree(void);

	CoreEntry *_rightEntries = NULL;
	CoreEntry *_leftEntries = NULL;
	EntryTypeCalculation _calculation;

	EntryType _leafEntry;
};

