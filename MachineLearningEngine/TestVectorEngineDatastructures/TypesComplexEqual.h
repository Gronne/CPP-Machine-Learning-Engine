#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypescomplexEqual, noInitialisation_noInitialisation)
{
	EntryTypeComplex noArgumentObject;
	EntryTypeComplex noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 0);
}


TEST(TensorCoreTensorCoreEntryTypescomplexEqual, noInitialisation_initialisation)
{
	EntryTypeComplex noArgumentObject;
	EntryTypeComplex noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 5);
}


TEST(TensorCoreTensorCoreEntryTypescomplexEqual, initialisation_noInitialisation)
{
	EntryTypeComplex noArgumentObject(5);
	EntryTypeComplex noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 0);
}


TEST(TensorCoreTensorCoreEntryTypescomplexEqual, initialisation_initialisation)
{
	EntryTypeComplex noArgumentObject(5);
	EntryTypeComplex noArgumentObject_2(10);

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject.getState() == 10);
}


TEST(TensorCoreTensorCoreEntryTypescomplexEqual, change)
{
	EntryTypeComplex noArgumentObject(5);
	EntryTypeComplex noArgumentObject_2(10);

	EXPECT_NO_THROW(noArgumentObject = noArgumentObject_2, std::exception);
	noArgumentObject_2.setState(20);

	EXPECT_TRUE(noArgumentObject.getState() == 10);
}