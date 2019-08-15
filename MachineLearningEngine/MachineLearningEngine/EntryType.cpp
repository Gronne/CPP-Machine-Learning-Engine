#include "EntryType.h"



EntryType::EntryType()
{
	//Nothing will happen but the default constructors for the Entry types will be set
}

EntryType::EntryType(const EntryType &EntryType)
{
}

EntryType::EntryType(const EntryTypeNumber &numberType)
{
}

EntryType::EntryType(const EntryTypeComplex &complexType)
{
}

EntryType::EntryType(const EntryTypeVariable &variableType)
{
}

EntryType::EntryType(const EntryTypeNumber &numberType, const EntryTypeComplex &ComplexType)
{
}

EntryType::EntryType(const EntryTypeNumber &numberType, const EntryTypeVariable &variableType)
{
}

EntryType::EntryType(const EntryTypeComplex &complexType, const EntryTypeVariable &variableType)
{
}

EntryType::EntryType(const EntryTypeNumber &numberType, const EntryTypeComplex &complexType, const EntryTypeVariable &variableType)
{
}

EntryType::~EntryType()
{
}

EntryType EntryType::getEntry(void)
{
	return EntryType();
}

void EntryType::setEntry(const EntryType &)
{
}

std::string EntryType::printEntry(void)
{
	return std::string();
}
