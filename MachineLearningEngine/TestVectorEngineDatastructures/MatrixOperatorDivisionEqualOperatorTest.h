#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOperatorDivisionEqualOperator, divisionPositiveHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionNegativeHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3,
				-3.5, -4,   -4.5 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionMixedHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, -3,
				4, -5, 6,
				-7, 8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, 1,   -1.5,
				2,   -2.5, 3,
				-3.5, 4,   -4.5 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionPositiveDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1.25, 1.75,
				2.25, 2.75, 3.25,
				3.75, 4.25, 4.75 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionNegativeDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1.25, -1.75,
				-2.25, -2.75, -3.25,
				-3.75, -4.25, -4.75 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionMixedDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, -3.5,
				4.5, -5.5, 6.5,
				-7.5, 8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1.25, -1.75,
				2.25, -2.75, 3.25,
				-3.75, 4.25, -4.75 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionPositiveMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1,    1.75,
				2,    2.75, 3,
				3.75, 4,    4.75 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionNegativeMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1,    -1.75,
				-2,    -2.75, -3,
				-3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionMixedMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				-4,   -5.5, 6,
				7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1,    1.75,
				-2,    -2.75, 3,
				3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionPositiveHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3,
				-3.5, -4,   -4.5 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionNegativeHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionMixedHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, -3,
				4, -5, 6,
				-7, 8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, -1,   1.5,
				-2,   2.5, -3,
				3.5, -4,   4.5 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionPositiveDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1.25, -1.75,
				-2.25, -2.75, -3.25,
				-3.75, -4.25, -4.75 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionNegativeDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1.25, 1.75,
				2.25, 2.75, 3.25,
				3.75, 4.25, 4.75 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionMixedDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, -3.5,
				4.5, -5.5, 6.5,
				-7.5, 8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, -1.25, 1.75,
				-2.25, 2.75, -3.25,
				3.75, -4.25, 4.75 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionPositiveMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1,    -1.75,
				-2,    -2.75, -3,
				-3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionNegativeMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1,    1.75,
				2,    2.75, 3,
				3.75, 4,    4.75 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionMixedMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, -2,  -3.5,
				4,   5.5, -6,
				-7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1,    1.75,
				-2,    -2.75, 3,
				3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix /= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionZeroValueException)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_THROW(*matrix /= 0, std::exception);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 2);

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(2, 2);
	*result = { 0.5, 1,
				1.5, 2 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				4, 5, 6, 7,
				7, 8, 9, 10,
				11, 12, 13, 14 };

	Matrix *result = new Matrix(4, 4);
	*result = { 0.5, 1,   1.5, 2,
				2,   2.5, 3, 3.5,
				3.5, 4,   4.5, 5,
				5.5, 6, 6.5, 7 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionSize2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOperatorDivisionEqualOperator, divisionSize3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 5,
				7, 8 };

	Matrix *result = new Matrix(3, 2);
	*result = { 0.5, 1,
				2,   2.5,
				3.5, 4 };

	EXPECT_NO_THROW(*matrix /= 2);
	EXPECT_TRUE(*result == *matrix);
}

