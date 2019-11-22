#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesComplexIsInitialised, isInitialisedFalse)
{
	EntryTypeNumber noArgumentObject;


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_FALSE(noArgumentObject.isInitialised());
}


TEST(TensorCoreTensorCoreEntryTypesComplexIsInitialised, isInitialisedTrue)
{
	EntryTypeNumber noArgumentObject(5);


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_TRUE(noArgumentObject.isInitialised());
}


TEST(TensorCoreTensorCoreEntryTypesComplexIsInitialised, isInitialisedFalseTrue)
{
	EntryTypeNumber noArgumentObject;


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_FALSE(noArgumentObject.isInitialised());

	noArgumentObject.setState(5);
	EXPECT_TRUE(noArgumentObject.isInitialised());
}