#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_true)
{
	EntryTypeNumber NumberObject(5);
	EntryType object(NumberObject);

	EXPECT_TRUE(object.isNumber());
}

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_false0)
{
	EntryType object;

	EXPECT_FALSE(object.isNumber());
}

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_false1)
{
	EntryTypeNumber NumberObject;
	EntryType object(NumberObject);

	EXPECT_FALSE(object.isNumber());
}

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_false2)
{
	EntryTypeComplex complexObject;
	EntryType object(complexObject);

	EXPECT_FALSE(object.isNumber());
}

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_false3)
{
	EntryTypeComplex complexObject(5);
	EntryType object(complexObject);

	EXPECT_FALSE(object.isNumber());
}

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_false4)
{
	EntryTypeVariable variableObject;
	EntryType object(variableObject);

	EXPECT_FALSE(object.isNumber());
}

TEST(TensorCoreTensorCoreEntryTypeIsNumber, IsNumber_false5)
{
	EntryTypeVariable variableObject("a");
	EntryType object(variableObject);

	EXPECT_FALSE(object.isNumber());
}