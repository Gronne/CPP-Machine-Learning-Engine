#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariableIsInitialised, isInitialisedFalse)
{
	EntryTypeVariable noArgumentObject;


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_FALSE(noArgumentObject.isInitialised());
}


TEST(TensorCoreTensorCoreEntryTypesVariableIsInitialised, isInitialisedTrue)
{
	EntryTypeVariable noArgumentObject("");


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_TRUE(noArgumentObject.isInitialised());
}


TEST(TensorCoreTensorCoreEntryTypesVariableIsInitialised, isInitialisedFalseTrue)
{
	EntryTypeVariable noArgumentObject;


	EXPECT_NO_THROW(noArgumentObject.isInitialised(), std::exception);
	EXPECT_FALSE(noArgumentObject.isInitialised());

	noArgumentObject.setState("");
	EXPECT_TRUE(noArgumentObject.isInitialised());
}