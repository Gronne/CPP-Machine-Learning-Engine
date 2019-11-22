#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printNoConstructor)
{
	EntryTypeNumber noArgumentObject;

	std::string expectedString = "";

	EXPECT_NO_THROW(noArgumentObject.print(), std::exception);
	EXPECT_TRUE(noArgumentObject.print() == expectedString);
}

TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printConstructorPositiveWhole)
{
	EntryTypeNumber argumentObject(5);

	std::string expectedString = "5";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}

TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printConstructorPositiveDecimal)
{
	EntryTypeNumber argumentObject(5.5);

	std::string expectedString = "5.5";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printConstructorNegativeWhole)
{
	EntryTypeNumber argumentObject(-5);

	std::string expectedString = "-5";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}

TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printConstructorNegativeDecimal)
{
	EntryTypeNumber argumentObject(-5.5);

	std::string expectedString = "-5.5";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printChangeState)
{
	EntryTypeNumber argumentObject;

	std::string expectedString = "0";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == "");

	EXPECT_NO_THROW(argumentObject.setState(0), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}



TEST(TensorCoreTensorCoreEntryTypesNumberPrint, printZero)
{
	EntryTypeNumber zeroObject(0);

	std::string expectedString = "0";

	EXPECT_NO_THROW(zeroObject.print(), std::exception);
	EXPECT_TRUE(zeroObject.print() == expectedString);
}