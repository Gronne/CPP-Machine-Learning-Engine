#pragma once
#include "VectorEngineHeaders.h"


TEST(TensorCoreTensorCoreEntryTypeCalculationInvertCalculate, InvCalc_noInit)
{
	EntryTypeCalculation calculation;

	EXPECT_THROW(calculation.invertCalculation(), std::exception);
}

TEST(TensorCoreTensorCoreEntryTypeCalculationInvertCalculate, InvCalc_plus)
{
	EntryTypeCalculation calculation_minus('+');

	EXPECT_NO_THROW(calculation_minus.invertCalculation(), std::exception);
	EXPECT_TRUE(calculation_minus.invertCalculation().getState() == "-");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationInvertCalculate, InvCalc_minus)
{
	EntryTypeCalculation calculation_minus('-');

	EXPECT_NO_THROW(calculation_minus.invertCalculation(), std::exception);
	EXPECT_TRUE(calculation_minus.invertCalculation().getState() == "+");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationInvertCalculate, InvCalc_multiplication)
{
	EntryTypeCalculation calculation_minus('*');

	EXPECT_NO_THROW(calculation_minus.invertCalculation(), std::exception);
	EXPECT_TRUE(calculation_minus.invertCalculation().getState() == "/");
}

TEST(TensorCoreTensorCoreEntryTypeCalculationInvertCalculate, InvCalc_divide)
{
	EntryTypeCalculation calculation_minus('/');

	EXPECT_NO_THROW(calculation_minus.invertCalculation(), std::exception);
	EXPECT_TRUE(calculation_minus.invertCalculation().getState() == "*");
}