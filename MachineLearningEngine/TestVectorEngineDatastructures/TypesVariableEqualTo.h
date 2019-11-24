#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, noInitialisation_noInitialisation)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, noInitialisation_initialisation_one)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("a");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}

TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, noInitialisation_initialisation_many)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, noInitialisation_initialisation_zero)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_noInitialisation_one)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_noInitialisation_many)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_noInitialisation_zero)
{
	EntryTypeVariable noArgumentObject("");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_initialisation_true_one)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2("a");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_initialisation_true_many)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_initialisation_false)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2("b");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_initialisation_false2)
{
	EntryTypeVariable noArgumentObject("ab");
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqualTo, initialisation_initialisation_false3)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2("ab");

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}