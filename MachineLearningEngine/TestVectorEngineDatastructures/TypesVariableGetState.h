#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariableGetState, getStateNoConstruction)
{
	EntryTypeVariable noArgumentObject;

	std::string stateBuffer;
	std::string expectedState = "";

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableGetState, getStateValueconstruction)
{
	EntryTypeVariable noArgumentObject("a");

	std::string stateBuffer;
	std::string expectedState = "a";

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableGetState, getStateSetState)
{
	EntryTypeVariable noArgumentObject;

	std::string stateBuffer;
	std::string expectedState = "a";

	noArgumentObject.setState(expectedState);

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}