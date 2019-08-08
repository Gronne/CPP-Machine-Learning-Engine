#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOperatorDivisionOperator, divisionPositiveHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionNegativeHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3,
				-3.5, -4,   -4.5 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionMixedHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, -3,
				4, -5, 6,
				-7, 8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, 1,   -1.5,
				2,   -2.5, 3,
				-3.5, 4,   -4.5 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionPositiveDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1.25, 1.75,
				2.25, 2.75, 3.25,
				3.75, 4.25, 4.75 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionNegativeDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1.25, -1.75,
				-2.25, -2.75, -3.25,
				-3.75, -4.25, -4.75 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionMixedDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, -3.5,
				4.5, -5.5, 6.5,
				-7.5, 8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1.25, -1.75,
				2.25, -2.75, 3.25,
				-3.75, 4.25, -4.75 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionPositiveMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1,    1.75,
				2,    2.75, 3,
				3.75, 4,    4.75 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionNegativeMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1,    -1.75,
				-2,    -2.75, -3,
				-3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionMixedMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				-4,   -5.5, 6,
				7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1,    1.75,
				-2,    -2.75, 3,
				3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionPositiveHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3,
				-3.5, -4,   -4.5 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionNegativeHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionMixedHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, -3,
				4, -5, 6,
				-7, 8, -9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, -1,   1.5,
				-2,   2.5, -3,
				3.5, -4,   4.5 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionPositiveDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1.25, -1.75,
				-2.25, -2.75, -3.25,
				-3.75, -4.25, -4.75 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionNegativeDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1.25, 1.75,
				2.25, 2.75, 3.25,
				3.75, 4.25, 4.75 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionMixedDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, -3.5,
				4.5, -5.5, 6.5,
				-7.5, 8.5, -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, -1.25, 1.75,
				-2.25, 2.75, -3.25,
				3.75, -4.25, 4.75 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionPositiveMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1,    -1.75,
				-2,    -2.75, -3,
				-3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionNegativeMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1,    1.75,
				2,    2.75, 3,
				3.75, 4,    4.75 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionMixedMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, -2,  -3.5,
				4,   5.5, -6,
				-7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1,    1.75,
				-2,    -2.75, 3,
				3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionZeroValueException)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_THROW(*matrix / 0, std::exception);
}

TEST(MatrixOperatorDivisionOperator, divisionSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 2);

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(2, 2);
	*result = { 0.5, 1,   
				1.5, 2 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				4, 5, 6, 7,
				7, 8, 9, 10,
				11, 12, 13, 14};

	Matrix *result = new Matrix(4, 4);
	*result = { 0.5, 1,   1.5, 2,
				2,   2.5, 3, 3.5,
				3.5, 4,   4.5, 5,
				5.5, 6, 6.5, 7};

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionSize2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionSize3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 5,
				7, 8 };

	Matrix *result = new Matrix(3, 2);
	*result = { 0.5, 1,
				2,   2.5,
				3.5, 4 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstPositiveHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstNegativeHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3,
				-3.5, -4,   -4.5 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstMixedHoleMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, -3,
				4, -5, 6,
				-7, 8, -9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, 1,   -1.5,
				2,   -2.5, 3,
				-3.5, 4,   -4.5 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstPositiveDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1.25, 1.75,
				2.25, 2.75, 3.25,
				3.75, 4.25, 4.75 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstNegativeDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1.25, -1.75,
				-2.25, -2.75, -3.25,
				-3.75, -4.25, -4.75 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstMixedDecimalMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, -3.5,
				4.5, -5.5, 6.5,
				-7.5, 8.5, -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1.25, -1.75,
				2.25, -2.75, 3.25,
				-3.75, 4.25, -4.75 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstPositiveMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1,    1.75,
				2,    2.75, 3,
				3.75, 4,    4.75 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstNegativeMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1,    -1.75,
				-2,    -2.75, -3,
				-3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstMixedMixedMatrixPositiveValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				-4,   -5.5, 6,
				7.5, -8,   -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1,    1.75,
				-2,    -2.75, 3,
				3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstPositiveHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3,
				-3.5, -4,   -4.5 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstNegativeHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstMixedHoleMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, -3,
				4, -5, 6,
				-7, 8, -9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, -1,   1.5,
				-2,   2.5, -3,
				3.5, -4,   4.5 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstPositiveDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1.25, -1.75,
				-2.25, -2.75, -3.25,
				-3.75, -4.25, -4.75 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstNegativeDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1.25, 1.75,
				2.25, 2.75, 3.25,
				3.75, 4.25, 4.75 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstMixedDecimalMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, -3.5,
				4.5, -5.5, 6.5,
				-7.5, 8.5, -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, -1.25, 1.75,
				-2.25, 2.75, -3.25,
				3.75, -4.25, 4.75 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstPositiveMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, -1,    -1.75,
				-2,    -2.75, -3,
				-3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstNegativeMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.75, 1,    1.75,
				2,    2.75, 3,
				3.75, 4,    4.75 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstMixedMixedMatrixNegativeValue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, -2,  -3.5,
				4,   5.5, -6,
				-7.5, 8,   9.5 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { -0.75, 1,    1.75,
				-2,    -2.75, 3,
				3.75, -4,    -4.75 };

	EXPECT_NO_THROW(*constMatrix / -2);
	EXPECT_TRUE(*result == *constMatrix / -2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstZeroValueException)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	const Matrix *constMatrix = new Matrix(matrix);

	EXPECT_THROW(*constMatrix / 0, std::exception);
}

TEST(MatrixOperatorDivisionOperator, divisionConstSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 2);

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(2, 2);
	*result = { 0.5, 1,
				1.5, 2 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3,
				3.5, 4,   4.5 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				4, 5, 6, 7,
				7, 8, 9, 10,
				11, 12, 13, 14 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(4, 4);
	*result = { 0.5, 1,   1.5, 2,
				2,   2.5, 3, 3.5,
				3.5, 4,   4.5, 5,
				5.5, 6, 6.5, 7 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstSize2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(2, 3);
	*result = { 0.5, 1,   1.5,
				2,   2.5, 3 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionConstSize3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 5,
				7, 8 };

	const Matrix *constMatrix = new Matrix(matrix);

	Matrix *result = new Matrix(3, 2);
	*result = { 0.5, 1,
				2,   2.5,
				3.5, 4 };

	EXPECT_NO_THROW(*constMatrix / 2);
	EXPECT_TRUE(*result == *constMatrix / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionOperatorValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.4, 0.8, 1.2,
				1.6, 2.0, 2.4 };

	EXPECT_NO_THROW(*matrix / 2.5);
	EXPECT_TRUE(TypeMatrix::isEqual(*result, *matrix / 2.5, 0.001));
}

TEST(MatrixOperatorDivisionOperator, divisionOperatorValueDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -0.4, -0.8, -1.2,
				-1.6, -2.0, -2.4 };

	EXPECT_NO_THROW(*matrix / -2.5);
	EXPECT_TRUE(TypeMatrix::isEqual(*result, *matrix / -2.5, 0.001));
}

TEST(MatrixOperatorDivisionOperator, divisionOperatorValueTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.25, 0.5,  0.75,
				1,    1.25, 1.5 };

	EXPECT_NO_THROW(*matrix / 2 / 2);
	EXPECT_TRUE(*result == *matrix / 2 / 2);
}

TEST(MatrixOperatorDivisionOperator, divisionOperatorValueTwoTimes2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.25, 0.5,  0.75,
				1,    1.25, 1.5 };

	EXPECT_NO_THROW((*matrix / 2) / 2);
	EXPECT_TRUE(*result == (*matrix / 2) / 2);
}