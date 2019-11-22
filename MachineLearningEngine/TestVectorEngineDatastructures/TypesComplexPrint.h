#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printNoConstructor)
{
	EntryTypeComplex noArgumentObject;

	std::string expectedString = "";

	EXPECT_NO_THROW(noArgumentObject.print(), std::exception);
	EXPECT_TRUE(noArgumentObject.print() == expectedString);
}

TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printConstructorPositiveWhole)
{
	EntryTypeComplex argumentObject(5);

	std::string expectedString = "5i";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}

TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printConstructorPositiveDecimal)
{
	EntryTypeComplex argumentObject(5.5);

	std::string expectedString = "5.5i";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printConstructorNegativeWhole)
{
	EntryTypeComplex argumentObject(-5);

	std::string expectedString = "-5i";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}

TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printConstructorNegativeDecimal)
{
	EntryTypeComplex argumentObject(-5.5);

	std::string expectedString = "-5.5i";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printChangeState)
{
	EntryTypeComplex argumentObject;

	std::string expectedString = "0i";

	EXPECT_NO_THROW(argumentObject.print(), std::exception);
	EXPECT_TRUE(argumentObject.print() == "");

	EXPECT_NO_THROW(argumentObject.setState(0), std::exception);
	EXPECT_TRUE(argumentObject.print() == expectedString);
}


TEST(TensorCoreTensorCoreEntryTypesComplexPrint, printZero)
{
	EntryTypeComplex zeroObject(0);

	std::string expectedString = "0i";

	EXPECT_NO_THROW(zeroObject.print(), std::exception);
	EXPECT_TRUE(zeroObject.print() == expectedString);
}