#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, noInitialisation_noInitialisation)
{
	EntryTypeNumber noArgumentObject;
	EntryTypeNumber noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, noInInitialisation_initialisation)
{
	EntryTypeNumber noArgumentObject;
	EntryTypeNumber noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, noInInitialisation_initialisation_zero)
{
	EntryTypeNumber noArgumentObject;
	EntryTypeNumber noArgumentObject_2(0);

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, initialisation_noInitialisation)
{
	EntryTypeNumber noArgumentObject(5);
	EntryTypeNumber noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, initialisation_noInitialisation_zero)
{
	EntryTypeNumber noArgumentObject(0);
	EntryTypeNumber noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, initialisation_initialisation_true)
{
	EntryTypeNumber noArgumentObject(5);
	EntryTypeNumber noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, initialisation_initialisation_false)
{
	EntryTypeNumber noArgumentObject(10);
	EntryTypeNumber noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqualTo, initialisation_initialisation_false2)
{
	EntryTypeNumber noArgumentObject(5);
	EntryTypeNumber noArgumentObject_2(10);

	EXPECT_NO_THROW(noArgumentObject == noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject == noArgumentObject_2);
}