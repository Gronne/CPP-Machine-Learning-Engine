#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeCalculationGetState, GetState_noInit)
{
	EntryTypeCalculation calculation;

	EXPECT_TRUE(calculation.getState() == "~");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationGetState, GetState_Init_addition)
{
	EntryTypeCalculation calculation('+');

	EXPECT_TRUE(calculation.getState() == "+");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationGetState, GetState_Init_substraction)
{
	EntryTypeCalculation calculation('-');

	EXPECT_TRUE(calculation.getState() == "-");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationGetState, GetState_Init_multiplication)
{
	EntryTypeCalculation calculation('*');

	EXPECT_TRUE(calculation.getState() == "*");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationGetState, GetState_Init_division)
{
	EntryTypeCalculation calculation('/');

	EXPECT_TRUE(calculation.getState() == "/");
}
