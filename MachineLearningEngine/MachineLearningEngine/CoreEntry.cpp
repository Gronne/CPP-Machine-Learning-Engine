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

	if (entry.isPossible())
		setLeaf(entry);
	else
		setLeaf(EntryFactory::Number(0));
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
	if (this == NULL && &entry == NULL)
		return true;
	else if (this != NULL && &entry == NULL)
		return false;
	else if (this == NULL && &entry != NULL)
		return false;

	bool leafComparison = this->_leafEntry == entry._leafEntry;

	bool calculationComparison = this->_calculation.getState() == entry._calculation.getState();
	bool leftNodeComparison = *this->_leftEntries == *entry._leftEntries;
	bool rightNodeComparison = *this->_rightEntries == *entry._rightEntries;

	if (this->isLeaf() == true && entry.isLeaf() == true)
		return leafComparison;
	else if (this->isLeaf() != entry.isLeaf())
		return false;
	else
		return calculationComparison && leftNodeComparison && rightNodeComparison;
}

bool CoreEntry::operator!=(const CoreEntry &entry)
{
	return (*this == entry) == false;
}

CoreEntry CoreEntry::operator+(const CoreEntry &entry) const
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

CoreEntry CoreEntry::operator-(const CoreEntry &entry) const
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

	if (_rightEntries->isLeaf() && _rightEntries->_leafEntry.isVariable() == false)
	{
		_rightEntries->_leafEntry = _rightEntries->_leafEntry * EntryTypeNumber(-1);
		setCalculationType(EntryTypeCalculation('+'));
	}

	collapsTree();
}

CoreEntry CoreEntry::operator*(const CoreEntry &entry) const
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

CoreEntry CoreEntry::operator/(const CoreEntry &entry) const
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

void CoreEntry::replace(const CoreEntry &originalEntry, const CoreEntry &newEntry)
{
	if (isLeaf() == true)
	{
		if (_leafEntry.sameAs(originalEntry._leafEntry) == true)
			_leafEntry = newEntry._leafEntry;
		return;
	}

	_leftEntries->replace(originalEntry, newEntry);
	_rightEntries->replace(originalEntry, newEntry);

	collapsTree();
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

void CoreEntry::setCalculationType(const EntryTypeCalculation &calculation)
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
		collapsWithOneLeafRight(*_leftEntries, *_rightEntries);

	else if (_leftEntries->isLeaf() == true && _rightEntries->isLeaf() == false)
		collapsWithOneLeafLeft(*_rightEntries, *_leftEntries);

	else if (_leftEntries->isLeaf() == false && _rightEntries->isLeaf() == false)
		collapsWithoutLeafs(*_leftEntries, *_rightEntries);

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

void CoreEntry::collapsWithOneLeafRight(const CoreEntry &tree, const CoreEntry &leaf)
{
	if (tree._leftEntries->isLeaf() == false || tree._rightEntries->isLeaf() == false)
		return;

	EntryType entryLeft = _calculation.calculate(tree._leftEntries->_leafEntry, leaf._leafEntry);
	EntryType entryRight = _calculation.calculate(tree._rightEntries->_leafEntry, leaf._leafEntry);

	collapsWithCalculationRules(tree, entryLeft, entryRight);
		
}


void CoreEntry::collapsWithOneLeafLeft(CoreEntry &tree, const CoreEntry &leaf)
{
	if (tree._leftEntries->isLeaf() == false || tree._rightEntries->isLeaf() == false)
		return;

	EntryType entryLeft;
	EntryType entryRight;

	if (_calculation.getState() == "/")
	{
		EntryType leftEntry = tree._leftEntries->_leafEntry;
		EntryType rightEntry = tree._rightEntries->_leafEntry;

		EntryType sharedEntry = leftEntry * leftEntry + rightEntry * rightEntry;
		sharedEntry = sharedEntry / leaf._leafEntry;

		entryLeft = _calculation.calculate(leftEntry, sharedEntry);
		entryRight = _calculation.calculate(rightEntry, sharedEntry);

		tree._calculation = tree._calculation.invertCalculation();
	}
	else 
	{
		entryLeft = _calculation.calculate(tree._leftEntries->_leafEntry, leaf._leafEntry);
		entryRight = _calculation.calculate(tree._rightEntries->_leafEntry, leaf._leafEntry);
	}

	collapsWithCalculationRules(tree, entryLeft, entryRight);

}

void CoreEntry::collapsWithCalculationRules(const CoreEntry& tree, const EntryType &entryLeft, const EntryType &entryRight)
{
	if (_calculation.getState() == "+" || _calculation.getState() == "-")
	{
		if (entryLeft.isPossible() == true && entryRight.isPossible() == false)
		{
			tree._leftEntries->setLeaf(entryLeft);
			_leftEntries = copyTree(*tree._leftEntries);
			_rightEntries = copyTree(*tree._rightEntries);
			_calculation = tree._calculation;
			_leafEntry = tree._leafEntry;
		}
		else if (entryLeft.isPossible() == false && entryRight.isPossible() == true)
		{
			tree._rightEntries->setLeaf(entryRight);
			_leftEntries = copyTree(*tree._leftEntries);
			_rightEntries = copyTree(*tree._rightEntries);
			_calculation = tree._calculation;
			_leafEntry = tree._leafEntry;
		}
			
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

void CoreEntry::collapsWithoutLeafs(const CoreEntry &leftTree, const CoreEntry &rightTree)
{
	if(leftTree._leftEntries->isLeaf() == true && leftTree._rightEntries->isLeaf() == true)
		if (rightTree._leftEntries->isLeaf() == true && rightTree._rightEntries->isLeaf() == true)
		{
			if (_calculation.getState() == "+" || _calculation.getState() == "-")
			{
				int count = commonElementsCount(leftTree, rightTree);
				std::string calcStateLeft = leftTree._calculation.getState();
				std::string calcStateRight = rightTree._calculation.getState();

				if (count > 0 && calcStateLeft != "*" && calcStateLeft != "/" && calcStateRight != "*" && calcStateRight != "/")
				{
					CoreEntry newTreeLeft;
					CoreEntry newTreeRight;

					if (count == 1) //tree + leaf
					{
						newTreeLeft = sumSimularityForTrees(leftTree, rightTree, 0);
						newTreeRight = getDifferenceAsTree(leftTree, rightTree);
					}
					else if (count == 2) //leaf + leaf
					{
						newTreeLeft = sumSimularityForTrees(leftTree, rightTree, 0);
						newTreeRight = sumSimularityForTrees(leftTree, rightTree, 1);
					}

					_leftEntries = copyTree(newTreeLeft);
					_rightEntries = copyTree(newTreeRight);
					_calculation = EntryTypeCalculation('+');
				}
				
			}

			if (_calculation.getState() == "*" || _calculation.getState() == "/")
			{
				if (variableInTree() == true || commonElementsCount(leftTree, rightTree) < 2)
					return;

				CoreEntry newTree;
				if (_calculation.getState() == "*")
					newTree = multiplyTwoTrees(leftTree, rightTree);
				else if (_calculation.getState() == "/")
					newTree = divideTwoTrees(leftTree, rightTree);

				if (newTree.isLeaf())
				{
					_leftEntries = NULL;
					_rightEntries = NULL;
					_leafEntry = newTree._leafEntry;
				}
				else
				{
					_leftEntries = copyTree(*newTree._leftEntries);
					_rightEntries = copyTree(*newTree._rightEntries);
					_calculation = EntryTypeCalculation('+');
				}
				
			}
		}
}

int CoreEntry::commonElementsCount(const CoreEntry &leftEntries, const CoreEntry &rightEntries)
{
	int count = 0;
	if (leftEntries._leftEntries->_leafEntry == rightEntries._leftEntries->_leafEntry)
		++count;

	if (leftEntries._leftEntries->_leafEntry == rightEntries._rightEntries->_leafEntry)
		++count;

	if (leftEntries._rightEntries->_leafEntry == rightEntries._leftEntries->_leafEntry)
		++count;

	if (leftEntries._rightEntries->_leafEntry == rightEntries._rightEntries->_leafEntry)
		++count;

	return count;
}

bool CoreEntry::variableInTree()
{
	if (isLeaf() == true)
		return _leafEntry.isVariable();
	else
		return (_leftEntries->variableInTree() || _rightEntries->variableInTree());
}


CoreEntry CoreEntry::getDifferenceAsTree(const CoreEntry &leftTree, const CoreEntry &rightTree)
{
	CoreEntry firstEntry;
	CoreEntry secondEntry;

	if (leftTree._leftEntries->_leafEntry == rightTree._leftEntries->_leafEntry)
	{
		firstEntry = leftTree._rightEntries->_leafEntry;
		secondEntry = rightTree._rightEntries->_leafEntry;
	}
	if (leftTree._leftEntries->_leafEntry == rightTree._rightEntries->_leafEntry)
	{
		firstEntry = leftTree._rightEntries->_leafEntry;
		secondEntry = rightTree._leftEntries->_leafEntry;
	}
	if (leftTree._rightEntries->_leafEntry == rightTree._leftEntries->_leafEntry)
	{
		firstEntry = leftTree._leftEntries->_leafEntry;
		secondEntry = rightTree._rightEntries->_leafEntry;
	}
	if (leftTree._rightEntries->_leafEntry == rightTree._rightEntries->_leafEntry)
	{
		firstEntry = leftTree._leftEntries->_leafEntry;
		secondEntry = rightTree._leftEntries->_leafEntry;
	}

	if (_calculation.getState() == "-")
		secondEntry = secondEntry * EntryFactory::Number(-1);

	CoreEntry newTree = firstEntry + secondEntry;

	return newTree;
}

CoreEntry CoreEntry::sumSimularityForTrees(const CoreEntry &leftTree, const CoreEntry &rightTree, int simularityNumber)
{
	CoreEntry firstEntry;
	CoreEntry secondEntry;

	int count = 0;

	if (leftTree._leftEntries->_leafEntry == rightTree._leftEntries->_leafEntry && count <= simularityNumber)
	{
		firstEntry = leftTree._leftEntries->_leafEntry;
		secondEntry = rightTree._leftEntries->_leafEntry;
		++count;
	}
	if (leftTree._leftEntries->_leafEntry == rightTree._rightEntries->_leafEntry && count <= simularityNumber)
	{
		firstEntry = leftTree._leftEntries->_leafEntry;
		secondEntry = rightTree._rightEntries->_leafEntry;
		++count;
	}
	if (leftTree._rightEntries->_leafEntry == rightTree._leftEntries->_leafEntry && count <= simularityNumber)
	{
		firstEntry = leftTree._rightEntries->_leafEntry;
		secondEntry = rightTree._leftEntries->_leafEntry;
		++count;
	}
	if (leftTree._rightEntries->_leafEntry == rightTree._rightEntries->_leafEntry && count <= simularityNumber)
	{
		firstEntry = leftTree._rightEntries->_leafEntry;
		secondEntry = rightTree._rightEntries->_leafEntry;
		++count;
	}

	if (_calculation.getState() == "-")
		secondEntry = secondEntry * EntryFactory::Number(-1);

	return firstEntry + secondEntry;
}

CoreEntry CoreEntry::divideTwoTrees(const CoreEntry &leftTree, const CoreEntry &rightTree)
{
	CoreEntry newTreeLeft = rightTree._leftEntries->_leafEntry;
	CoreEntry newTreeRight = rightTree._rightEntries->_leafEntry;
	CoreEntry newTree;

	if (newTreeLeft._leafEntry.isComplex())
		newTree = newTreeRight - newTreeLeft;
	else if (newTreeRight._leafEntry.isComplex())
		newTree = newTreeLeft - newTreeRight;

	return (leftTree * newTree) / (rightTree * newTree);
}

CoreEntry CoreEntry::multiplyTwoTrees(const CoreEntry &leftTree, const CoreEntry &rightTree)
{
	CoreEntry leftNodeLeft = leftTree._leftEntries->_leafEntry * rightTree._leftEntries->_leafEntry;
	CoreEntry leftNodeRight = leftTree._leftEntries->_leafEntry * rightTree._rightEntries->_leafEntry;

	CoreEntry rightNodeLeft = leftTree._rightEntries->_leafEntry * rightTree._leftEntries->_leafEntry;
	CoreEntry rightNodeRight = leftTree._rightEntries->_leafEntry * rightTree._rightEntries->_leafEntry;

	return (leftNodeLeft + leftNodeRight) + (rightNodeLeft + rightNodeRight);
}


std::ostream & operator<<(std::ostream &out, const CoreEntry &entry)
{
	out << entry.print();
	return out;
}