#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructNoArgument)
{
	EntryTypeVariable noArgumentObject;

	std::string stateBuffer;
	std::string expectedState = "";

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructEmptyString)
{
	EntryTypeVariable emptyString("");

	std::string stateBuffer;
	std::string expectedState = "";

	EXPECT_NO_THROW(stateBuffer = emptyString.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructSingleCharacter)
{
	EntryTypeVariable variableObject("a");

	std::string stateBuffer;
	std::string expectedState = "a";

	EXPECT_NO_THROW(stateBuffer = variableObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructMultipleCharacters)
{
	EntryTypeVariable variableObject("multipleCharacters");

	std::string stateBuffer;
	std::string expectedState = "multipleCharacters";

	EXPECT_NO_THROW(stateBuffer = variableObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructCopyEmptyString)
{
	EntryTypeVariable emptyString("");

	std::string stateBuffer;
	std::string expectedState = "";

	EntryTypeVariable newVariableObject(emptyString);

	EXPECT_NO_THROW(stateBuffer = newVariableObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructCopySingleCharacter)
{
	EntryTypeVariable variableObject("a");

	std::string stateBuffer;
	std::string expectedState = "a";

	EntryTypeVariable newVariableObject(variableObject);

	EXPECT_NO_THROW(stateBuffer = newVariableObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesVariableConstruct, constructCopyMultipleCharacters)
{
	EntryTypeVariable variableObject("multipleCharacters");

	std::string stateBuffer;
	std::string expectedState = "multipleCharacters";

	EntryTypeVariable newVariableObject(variableObject);

	EXPECT_NO_THROW(stateBuffer = newVariableObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}