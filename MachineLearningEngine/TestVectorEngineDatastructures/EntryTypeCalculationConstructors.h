#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeCalculationConstructor, Constructor_noInit)
{
	EntryTypeCalculation calculation;

	EXPECT_TRUE(calculation.getState() == "~");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationConstructor, Constructor_Init_addition)
{
	EntryTypeCalculation calculation('+');

	EXPECT_TRUE(calculation.getState() == "+");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationConstructor, Constructor_Init_substraction)
{
	EntryTypeCalculation calculation('-');

	EXPECT_TRUE(calculation.getState() == "-");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationConstructor, Constructor_Init_multiplication)
{
	EntryTypeCalculation calculation('*');

	EXPECT_TRUE(calculation.getState() == "*");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationConstructor, Constructor_Init_division)
{
	EntryTypeCalculation calculation('/');

	EXPECT_TRUE(calculation.getState() == "/");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationConstructor, Constructor_Init_notPossible)
{
	EXPECT_THROW(EntryTypeCalculation('a'), std::exception);
	EXPECT_THROW(EntryTypeCalculation('1'), std::exception);
}