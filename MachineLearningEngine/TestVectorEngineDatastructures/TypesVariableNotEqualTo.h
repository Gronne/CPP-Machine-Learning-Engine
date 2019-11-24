#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, noInitialisation_noInitialisation)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, noInitialisation_initialisation_one)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("a");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}

TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, noInitialisation_initialisation_many)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, noInitialisation_initialisation_zero)
{
	EntryTypeVariable noArgumentObject;
	EntryTypeVariable noArgumentObject_2("");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_noInitialisation_one)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_noInitialisation_many)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_noInitialisation_zero)
{
	EntryTypeVariable noArgumentObject("");
	EntryTypeVariable noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_initialisation_FALSE_one)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2("a");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_initialisation_FALSE_many)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_initialisation_TRUE)
{
	EntryTypeVariable noArgumentObject("a");
	EntryTypeVariable noArgumentObject_2("b");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_initialisation_TRUE2)
{
	EntryTypeVariable noArgumentObject("ab");
	EntryTypeVariable noArgumentObject_2("abc");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesVariableNotEqualTo, initialisation_initialisation_TRUE3)
{
	EntryTypeVariable noArgumentObject("abc");
	EntryTypeVariable noArgumentObject_2("ab");

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}