#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesNumberIsInitialised, isInitialisedFalse)
{
	EntryTypeNumber noArgumentObject;


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_FALSE(noArgumentObject.isInitialised());
}


TEST(TensorCoreTensorCoreEntryTypesNumberIsInitialised, isInitialisedTrue)
{
	EntryTypeNumber noArgumentObject(5);


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_TRUE(noArgumentObject.isInitialised());
}


TEST(TensorCoreTensorCoreEntryTypesNumberIsInitialised, isInitialisedFalseTrue)
{
	EntryTypeNumber noArgumentObject;


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_FALSE(noArgumentObject.isInitialised());

	noArgumentObject.setState(5);
	EXPECT_TRUE(noArgumentObject.isInitialised());
}