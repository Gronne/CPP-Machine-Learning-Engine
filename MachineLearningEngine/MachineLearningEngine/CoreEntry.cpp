#include "CoreEntry.h"
#include "EntryFactory.h"
#include <iterator>


CoreEntry::CoreEntry()
{
	resetTree();
	setLeaf(EntryFactory::Number(0));
}

CoreEntry::CoreEntry(const EntryType &entry)
{
	resetTree();
	setLeaf(entry);
}

CoreEntry::CoreEntry(const CoreEntry &newCoreEntry)	
{
	resetTree();
	setLeaf(newCoreEntry._leafEntry);
	addEntries(newCoreEntry);
	setCalculationType(newCoreEntry._calculation);
}

CoreEntry::~CoreEntry()
{
	resetTree();
}

CoreEntry CoreEntry::operator=(const EntryType &entry)
{
	resetTree();
	setLeaf(entry);
	return CoreEntry(*this);
}

CoreEntry CoreEntry::operator=(const CoreEntry &newCoreEntry)
{

	resetTree();
	setLeaf(newCoreEntry._leafEntry);
	addEntries(newCoreEntry);
	setCalculationType(newCoreEntry._calculation);
	return CoreEntry(*this);
}

bool CoreEntry::operator==(const CoreEntry &entry)
{
	throw std::exception("Not Implemented yet, don't know how to determine equality");
	return false;
}

CoreEntry CoreEntry::operator+(const CoreEntry &entry)
{
	CoreEntry entryBuffer(*this);
	entryBuffer += entry;
	return entryBuffer;
}

void CoreEntry::operator+=(const CoreEntry &entry)
{
	CoreEntry coreBuffer(*this);
	addRightEntries(entry);
	addLeftEntries(coreBuffer);
	setCalculationType(EntryTypeCalculation('+'));
	collapsTree();
}

CoreEntry CoreEntry::operator-(const CoreEntry &entry)
{
	CoreEntry entryBuffer(*this);
	entryBuffer -= entry;
	return entryBuffer;
}

void CoreEntry::operator-=(const CoreEntry &entry)
{
	CoreEntry coreBuffer(*this);
	addRightEntries(entry);
	addLeftEntries(coreBuffer);
	setCalculationType(EntryTypeCalculation('-'));
	collapsTree();
}

CoreEntry CoreEntry::operator*(const CoreEntry &entry)
{
	CoreEntry entryBuffer(*this);
	entryBuffer *= entry;
	return entryBuffer;
}

void CoreEntry::operator*=(const CoreEntry &entry)
{
	CoreEntry coreBuffer(*this);
	addRightEntries(entry);
	addLeftEntries(coreBuffer);
	setCalculationType(EntryTypeCalculation('*'));
	collapsTree();
}

CoreEntry CoreEntry::operator/(const CoreEntry &entry)
{
	CoreEntry entryBuffer(*this);
	entryBuffer /= entry;
	return entryBuffer;
}

void CoreEntry::operator/=(const CoreEntry &entry)
{
	CoreEntry coreBuffer(*this);
	addRightEntries(entry);
	addLeftEntries(coreBuffer);
	setCalculationType(EntryTypeCalculation('/'));
	collapsTree();
}

std::string CoreEntry::print(void) const
{
	if (isLeaf() == true)
		return _leafEntry.print();

	std::string leftString = _leftEntries->print();
	std::string rightString = _rightEntries->print();


	return "(" + leftString + ") " + _calculation.getState() + " (" + rightString + ")";
}

void CoreEntry::resetTree(void)
{
	if(_rightEntries != NULL)
		delete _rightEntries;

	if(_leftEntries != NULL)
		delete _leftEntries;

	_rightEntries = NULL;
	_leftEntries = NULL;
}

void CoreEntry::setLeaf(const EntryType &entry)
{
	_leafEntry = entry;
}

void CoreEntry::addEntries(const CoreEntry &coreEntry)
{
	addLeftEntries(*coreEntry._leftEntries);
	addRightEntries(*coreEntry._rightEntries);
}

void CoreEntry::addLeftEntries(const CoreEntry &leftEntry)
{
	_leftEntries = copyTree(leftEntry);
}

void CoreEntry::addRightEntries(const CoreEntry &rightEntry)
{
	_rightEntries = copyTree(rightEntry);
}

void CoreEntry::setCalculationType(EntryTypeCalculation calculation)
{
	_calculation = calculation;
}

CoreEntry* CoreEntry::copyTree(const CoreEntry &tree)
{
	if (&tree == NULL)
		return NULL;

	CoreEntry *newTree = new CoreEntry();

	newTree->_leftEntries = copyTree(*tree._leftEntries);
	newTree->_rightEntries = copyTree(*tree._rightEntries);

	newTree->setCalculationType(tree._calculation);
	newTree->setLeaf(tree._leafEntry);

	return newTree;
}

bool CoreEntry::isLeaf(void) const
{
	return (_leftEntries == NULL && _rightEntries == NULL);
}

void CoreEntry::collapsTree(void)
{

}

