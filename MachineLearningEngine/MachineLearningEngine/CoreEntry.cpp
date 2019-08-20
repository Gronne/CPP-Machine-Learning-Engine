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
	
	if (isLeaf() == true)
		return;
	
	_leftEntries->collapsTree();
	_rightEntries->collapsTree();

	if (_leftEntries->isLeaf() == true && _rightEntries->isLeaf() == true)
		collapsTwoLeafs(*_leftEntries, *_rightEntries);

	else if (_leftEntries->isLeaf() == false && _rightEntries->isLeaf() == true)
		collapsWithOneLeaf(*_leftEntries, *_rightEntries);

	else if (_leftEntries->isLeaf() == true && _rightEntries->isLeaf() == false)
		collapsWithOneLeaf(*_leftEntries, *_rightEntries);

	if (isLeaf() == false)
		if (_leftEntries->isLeaf() == true && _rightEntries->isLeaf() == true)
			if (_leftEntries->_leafEntry.isEmpty() && _rightEntries->_leafEntry.isEmpty())
			{
				setLeaf(_leftEntries->_leafEntry);
				resetTree();
			}
			else if (_leftEntries->_leafEntry.isEmpty() == false && _rightEntries->_leafEntry.isEmpty())
			{
				setLeaf(_leftEntries->_leafEntry);
				resetTree();
			}
			else if (_leftEntries->_leafEntry.isEmpty() && _rightEntries->_leafEntry.isEmpty() == false)
			{
				setLeaf(_rightEntries->_leafEntry);
				resetTree();
			}
	
}

void CoreEntry::collapsTwoLeafs(const CoreEntry &leafA, const CoreEntry &leafB)
{
	EntryType newEntry = _calculation.calculate(leafA._leafEntry, leafB._leafEntry);
	if (newEntry.isPossible() == true)
	{
		resetTree();
		setLeaf(newEntry);
	}
}

void CoreEntry::collapsWithOneLeaf(const CoreEntry &tree, const CoreEntry &leaf)
{
	if (tree._leftEntries->isLeaf() == true && tree._rightEntries->isLeaf() == true)
	{
		EntryType entryLeft = _calculation.calculate(leaf._leafEntry, tree._leftEntries->_leafEntry);
		EntryType entryRight = _calculation.calculate(leaf._leafEntry, tree._rightEntries->_leafEntry);
		
		if (_calculation.getState() == "+" || _calculation.getState() == "-")
		{
			if (entryLeft.isPossible() == true && entryRight.isPossible() == false)
				tree._leftEntries->setLeaf(entryLeft);
			else if (entryLeft.isPossible() == false && entryRight.isPossible() == true)
				tree._rightEntries->setLeaf(entryRight);

			_leftEntries = copyTree(*tree._leftEntries);
			_rightEntries = copyTree(*tree._rightEntries);
			_calculation = tree._calculation;
			_leafEntry = tree._leafEntry;
		}
		
		if (_calculation.getState() == "*" || _calculation.getState() == "/")
			if (entryLeft.isPossible() == true && entryRight.isPossible() == true)
			{
				tree._leftEntries->setLeaf(entryLeft);
				tree._rightEntries->setLeaf(entryRight);
				
				_leftEntries = copyTree(*tree._leftEntries);
				_rightEntries = copyTree(*tree._rightEntries);
				_calculation = tree._calculation;
				_leafEntry = tree._leafEntry;
			}
	}
		
}


