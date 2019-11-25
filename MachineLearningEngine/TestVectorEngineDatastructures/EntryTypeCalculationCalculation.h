#pragma once
#include "VectorEngineHeaders.h"


TEST(TensorCoreTensorCoreEntryTypeCalculationCalculate, Calculate_noInit)
{
	EntryTypeCalculation calculation;

	EntryType number(EntryTypeNumber(5));
	EntryType complex(EntryTypeComplex(5));
	EntryType variable(EntryTypeVariable("a"));

	EXPECT_THROW(calculation.calculate(number, number), std::exception);
}


TEST(TensorCoreTensorCoreEntryTypeCalculationCalculate, Calculate_addition)
{
	EntryTypeCalculation calculation('+');

	EntryType number(EntryTypeNumber(5));
	EntryType complex(EntryTypeComplex(5));
	EntryType variable(EntryTypeVariable("a"));

	EXPECT_NO_THROW(calculation.calculate(number, number), std::exception);
	EXPECT_TRUE(calculation.calculate(number, number) == EntryType(EntryTypeNumber(10)));

	EXPECT_NO_THROW(calculation.calculate(number, complex), std::exception);
	EXPECT_FALSE(calculation.calculate(number, complex).isPossible());

	EXPECT_NO_THROW(calculation.calculate(number, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(number, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(complex, complex), std::exception);
	EXPECT_TRUE(calculation.calculate(complex, complex) == EntryType(EntryTypeComplex(10)));

	EXPECT_NO_THROW(calculation.calculate(complex, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(complex, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(variable, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(variable, variable).isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeCalculationCalculate, Calculate_substraction)
{
	EntryTypeCalculation calculation('-');

	EntryType number(EntryTypeNumber(5));
	EntryType complex(EntryTypeComplex(5));
	EntryType variable(EntryTypeVariable("a"));

	EXPECT_NO_THROW(calculation.calculate(number, number), std::exception);
	EXPECT_TRUE(calculation.calculate(number, number) == EntryType(EntryTypeNumber(0)));

	EXPECT_NO_THROW(calculation.calculate(number, complex), std::exception);
	EXPECT_FALSE(calculation.calculate(number, complex).isPossible());

	EXPECT_NO_THROW(calculation.calculate(number, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(number, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(complex, complex), std::exception);
	EXPECT_TRUE(calculation.calculate(complex, complex) == EntryType(EntryTypeComplex(0)));

	EXPECT_NO_THROW(calculation.calculate(complex, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(complex, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(variable, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(variable, variable).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeCalculationCalculate, Calculate_multiplication)
{
	EntryTypeCalculation calculation('*');

	EntryType number(EntryTypeNumber(5));
	EntryType complex(EntryTypeComplex(5));
	EntryType variable(EntryTypeVariable("a"));

	EXPECT_NO_THROW(calculation.calculate(number, number), std::exception);
	EXPECT_TRUE(calculation.calculate(number, number) == EntryType(EntryTypeNumber(25)));

	EXPECT_NO_THROW(calculation.calculate(number, complex), std::exception);
	EXPECT_TRUE(calculation.calculate(number, complex) == EntryType(EntryTypeComplex(25)));

	EXPECT_NO_THROW(calculation.calculate(number, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(number, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(complex, complex), std::exception);
	EXPECT_TRUE(calculation.calculate(complex, complex) == EntryType(EntryTypeNumber(-25)));

	EXPECT_NO_THROW(calculation.calculate(complex, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(complex, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(variable, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(variable, variable).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeCalculationCalculate, Calculate_division)
{
	EntryTypeCalculation calculation('/');

	EntryType number(EntryTypeNumber(5));
	EntryType complex(EntryTypeComplex(5));
	EntryType variable(EntryTypeVariable("a"));

	EXPECT_NO_THROW(calculation.calculate(number, number), std::exception);
	EXPECT_TRUE(calculation.calculate(number, number) == EntryType(EntryTypeNumber(1)));

	EXPECT_NO_THROW(calculation.calculate(number, complex), std::exception);
	EXPECT_TRUE(calculation.calculate(number, complex) == EntryType(EntryTypeComplex(-1)));

	EXPECT_NO_THROW(calculation.calculate(number, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(number, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(complex, complex), std::exception);
	EXPECT_TRUE(calculation.calculate(complex, complex) == EntryType(EntryTypeNumber(1)));

	EXPECT_NO_THROW(calculation.calculate(complex, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(complex, variable).isPossible());

	EXPECT_NO_THROW(calculation.calculate(variable, variable), std::exception);
	EXPECT_FALSE(calculation.calculate(variable, variable).isPossible());
}


