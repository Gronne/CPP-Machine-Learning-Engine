#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6, 
				8, 10, 12 };

	EXPECT_NO_THROW(*matrix += *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6, 
				-8, -10, -12 };

	EXPECT_NO_THROW(*matrix += *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,   4, -6, 
				 8, -10, 12 };

	EXPECT_NO_THROW(*matrix += *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix += *matrix * -1);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3,  5,  7,
				9, 11, 13 };

	EXPECT_NO_THROW(*matrix += *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -3,  -5,  -7, 
				-9, -11, -13 };

	EXPECT_NO_THROW(*matrix += *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -3,   5, -7, 
				 9, -11, 13 };

	EXPECT_NO_THROW(*matrix += *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix += *matrix * -1);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 4);

	EXPECT_THROW(*matrix += *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 2);

	EXPECT_THROW(*matrix += *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRow1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 3);

	EXPECT_THROW(*matrix += *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRow2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 3);

	EXPECT_THROW(*matrix += *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRowCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 4);

	EXPECT_THROW(*matrix += *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRowCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 2);

	EXPECT_THROW(*matrix += *result, std::exception);
}

//-----------------------------------------------------

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3, 4, 5, 
				6, 7, 8 };

	EXPECT_NO_THROW(*matrix += 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, 0, 1,
				2, 3, 4 };

	EXPECT_NO_THROW(*matrix += -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix += 0);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3.5, 4.5, 5.5,
				6.5, 7.5, 8.5 };

	EXPECT_NO_THROW(*matrix += 2.5);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -0.5, 0.5,
				 1.5,  2.5, 3.5 };

	EXPECT_NO_THROW(*matrix += -2.5);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix += 0.0);
	EXPECT_TRUE(*result == *matrix);
}