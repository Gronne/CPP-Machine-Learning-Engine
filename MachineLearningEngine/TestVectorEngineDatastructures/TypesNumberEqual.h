#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesNumberEqual, noInitialisation_noInitialisation)
{
	EntryTypeNumber noArgumentObject;
	EntryTypeNumber noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 0);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqual, noInitialisation_initialisation)
{
	EntryTypeNumber noArgumentObject;
	EntryTypeNumber noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 5);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqual, initialisation_noInitialisation)
{
	EntryTypeNumber noArgumentObject(5);
	EntryTypeNumber noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 0);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqual, initialisation_initialisation)
{
	EntryTypeNumber noArgumentObject(5);
	EntryTypeNumber noArgumentObject_2(10);

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 10);
}


TEST(TensorCoreTensorCoreEntryTypesNumberEqual, change)
{
	EntryTypeNumber noArgumentObject(5);
	EntryTypeNumber noArgumentObject_2(10);

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	noArgumentObject_2.setState(20);

	EXPECT_TRUE(noArgumentObject.getState() == 10);
}