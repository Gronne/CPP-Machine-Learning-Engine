#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_true)
{
	EntryTypeComplex complexObject(5);
	EntryType object(complexObject);

	EXPECT_TRUE(object.isComplex());
}

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_false0)
{
	EntryType object;

	EXPECT_FALSE(object.isComplex());
}

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_false1)
{
	EntryTypeComplex complexObject;
	EntryType object(complexObject);

	EXPECT_FALSE(object.isComplex());
}

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_false2)
{
	EntryTypeNumber numberObject;
	EntryType object(numberObject);

	EXPECT_FALSE(object.isComplex());
}

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_false3)
{
	EntryTypeNumber numberObject(5);
	EntryType object(numberObject);

	EXPECT_FALSE(object.isComplex());
}

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_false4)
{
	EntryTypeVariable variableObject;
	EntryType object(variableObject);

	EXPECT_FALSE(object.isComplex());
}

TEST(TensorCoreTensorCoreEntryTypeIsComplex, IsComplex_false5)
{
	EntryTypeVariable variableObject("a");
	EntryType object(variableObject);

	EXPECT_FALSE(object.isComplex());
}