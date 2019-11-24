#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariableEqual, noInitialisation_noInitialisation)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "");
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqual, noInitialisation_initialisation_one)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("a");

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "a");
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqual, noInitialisation_initialisation_many)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "abc");
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqual, initialisation_noInitialisation_one)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "");
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqual, initialisation_noInitialisation_many)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "");
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqual, initialisation_initialisation_one)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2("b");

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "b");
}


TEST(TensorCoreTensorCoreEntryTypesVariableEqual, initialisation_initialisation_many)
{
	EntryTypeVariable noArgumentObject("ab");
	EntryTypeVariable noArgumentObject_2("cba");

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == "cba");
}