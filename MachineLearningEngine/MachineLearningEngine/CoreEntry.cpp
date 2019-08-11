#include "CoreEntry.h"



CoreEntry::CoreEntry()
{
}

CoreEntry::CoreEntry(const ICoreEntryType &)
{
}

CoreEntry::CoreEntry(const ICoreEntryType &, const ICoreEntryType &)
{
}

CoreEntry::CoreEntry(const ICoreEntryType &, const ICoreEntryType &, const ICoreEntryType &)
{
}


CoreEntry::~CoreEntry()
{
}

CoreEntry CoreEntry::getEntry(void)
{
	return CoreEntry();
}

void CoreEntry::setEntry(const CoreEntry &)
{
}

std::string CoreEntry::printEntry(void)
{
	return std::string();
}

ICoreEntryType CoreEntry::operator+(const ICoreEntryType &)
{
	return ICoreEntryType();
}

void CoreEntry::operator+=(const ICoreEntryType &)
{
}

ICoreEntryType CoreEntry::operator-(const ICoreEntryType &)
{
	return ICoreEntryType();
}

void CoreEntry::operator-=(const ICoreEntryType &)
{
}

ICoreEntryType CoreEntry::operator*(const ICoreEntryType &)
{
	return ICoreEntryType();
}

void CoreEntry::operator*=(const ICoreEntryType &)
{
}

ICoreEntryType CoreEntry::operator/(const ICoreEntryType &)
{
	return ICoreEntryType();
}

void CoreEntry::operator/=(const ICoreEntryType &)
{
}

ICoreEntryType CoreEntry::operator=(const ICoreEntryType &)
{
	return ICoreEntryType();
}

void CoreEntry::operator==(const ICoreEntryType &)
{
}
