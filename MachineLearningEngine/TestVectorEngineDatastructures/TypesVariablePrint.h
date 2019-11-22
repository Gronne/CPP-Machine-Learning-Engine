#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesVariablePrint, printNoConstructorArgument)
{
	EntryTypeVariable noArgumentObject;

	std::string expectedString = "";

	EXPECT_NO_THROW(noArgumentObject.print(), std::exception);
	EXPECT_TRUE(noArgumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesVariablePrint, printConstructorArgumentOneCharacter)
{
	EntryTypeVariable argumentObject("a");

	std::string expectedString = "a";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesVariablePrint, printConstructorArgumentManyCharacter)
{
	EntryTypeVariable argumentObject("Many Characters");

	std::string expectedString = "Many Characters";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesVariablePrint, printSetCharacter)
{
	EntryTypeVariable argumentObject("");

	std::string expectedString = "change";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == "");

	EXPECT_NO_THROW(argumentObject.setState(expectedString), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}