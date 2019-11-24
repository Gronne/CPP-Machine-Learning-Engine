#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_true_one)
{
	EntryTypeVariable VariableObject("a");
	EntryType object(VariableObject);

	EXPECT_TRUE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_many)
{
	EntryTypeVariable VariableObject("a");
	EntryType object(VariableObject);

	EXPECT_TRUE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_false0)
{
	EntryType object;

	EXPECT_FALSE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_false1)
{
	EntryTypeVariable variableObject;
	EntryType object(variableObject);

	EXPECT_FALSE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_false2)
{
	EntryTypeNumber numberObject;
	EntryType object(numberObject);

	EXPECT_FALSE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_false3)
{
	EntryTypeNumber numberObject(5);
	EntryType object(numberObject);

	EXPECT_FALSE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_false4)
{
	EntryTypeComplex complexObject;
	EntryType object(complexObject);

	EXPECT_FALSE(object.isVariable());
}

TEST(TensorCoreTensorCoreEntryTypeIsVariable, IsVariable_false5)
{
	EntryTypeComplex complexObject(5);
	EntryType object(complexObject);

	EXPECT_FALSE(object.isVariable());
}