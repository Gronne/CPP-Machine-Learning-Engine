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
	CoreEntry operator+(const CoreEntry&) const;
	void operator+=(const CoreEntry&);
	CoreEntry operator-(const CoreEntry&) const;
	void operator-=(const CoreEntry&);
	CoreEntry operator*(const CoreEntry&) const;
	void operator*=(const CoreEntry&);
	CoreEntry operator/(const CoreEntry&) const;
	void operator/=(const CoreEntry&);
	friend std::ostream& operator<<(std::ostream&, const CoreEntry&);

	bool isLeaf(void) const;
	std::string print(void) const;
	void replace(const CoreEntry&, const CoreEntry&);

private:
	void resetTree(void);
	void setLeaf(const EntryType&);
	void addEntries(const CoreEntry&);
	void addLeftEntries(const CoreEntry&);
	void addRightEntries(const CoreEntry&);
	void setCalculationType(const EntryTypeCalculation&);
	CoreEntry* copyTree(const CoreEntry&);

	void collapsTree(void);
	void collapsTwoLeafs(const CoreEntry&, const CoreEntry&);
	void collapsWithOneLeafRight(const CoreEntry&, const CoreEntry&);
	void collapsWithOneLeafLeft(CoreEntry&, const CoreEntry&);
	void collapsWithCalculationRules(const CoreEntry&, const EntryType&, const EntryType&);
	void collapsWithoutLeafs(const CoreEntry&, const CoreEntry&);

	int commonElementsCount(const CoreEntry&, const CoreEntry&);
	bool variableInTree(void);
	CoreEntry getDifferenceAsTree(const CoreEntry&, const CoreEntry&);
	CoreEntry sumSimularityForTrees(const CoreEntry&, const CoreEntry&, int);

	CoreEntry multiplyTwoTrees(const CoreEntry&, const CoreEntry&);
	CoreEntry divideTwoTrees(const CoreEntry&, const CoreEntry&);

	CoreEntry *_rightEntries = NULL;
	CoreEntry *_leftEntries = NULL;
	EntryTypeCalculation _calculation;

	EntryType _leafEntry;
};

