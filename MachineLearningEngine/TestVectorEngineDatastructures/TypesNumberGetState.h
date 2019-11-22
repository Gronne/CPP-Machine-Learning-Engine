#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesNumberGetState, getStateNoConstruction)
{
	EntryTypeNumber noArgumentObject;

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberGetState, getStateValueconstruction)
{
	EntryTypeNumber noArgumentObject(5);

	double stateBuffer;
	double expectedState = 5;

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberGetState, getStateSetState)
{
	EntryTypeNumber noArgumentObject;

	double stateBuffer;
	double expectedState = 5;

	noArgumentObject.setState(expectedState);

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}