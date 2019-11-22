#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesComplexGetState, getStateNoConstruction)
{
	EntryTypeComplex noArgumentObject;

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesComplexGetState, getStateValueconstruction)
{
	EntryTypeComplex noArgumentObject(5);

	double stateBuffer;
	double expectedState = 5;

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesComplexGetState, getStateSetState)
{
	EntryTypeComplex noArgumentObject;

	double stateBuffer;
	double expectedState = 5;

	noArgumentObject.setState(expectedState);

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}