#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSetsSetMatrix, setMatrixSameSizePositiveHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizePositiveDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.1, 2.2, 3.3,
				4.4, 5.5, 6.6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeNegativeHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeNegativeDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.1, -2.2, -3.3,
				-4.4, -5.5, -6.6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeMixedHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = {  1, -2,  3,
				-4,  5, -6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeMixedDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = {  1.1, -2.2,  3.3,
				-4.4,  5.5, -6.6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeMixedPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.1, 2,   3.3,
				4,   5.5, 6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.1, -2,   -3.3,
				-4,   -5.5, -6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSameSizeMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.1, 2,   3.3,
				-4,   5.5, 6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargePositiveHole)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1,  2,  3,  4, 
				5,  6,  7,  8, 
				9, 10, 11, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargePositiveDecimal)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5,  2.5,  3.5,  4.5,
				5.5,  6.5,  7.5,  8.5,
				9.5, 10.5, 11.5, 12.5 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeNegativeHole)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1,  -2,  -3,  -4,
				-5,  -6,  -7,  -8,
				-9, -10, -11, -12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeNegativeDecimal)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5,  2.5,  3.5,  4.5,
				5.5,  6.5,  7.5,  8.5,
				9.5, 10.5, 11.5, 12.5 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeMixedHole)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1,  2,  -3,  4,
				 5, -6,   7, -8,
				-9, 10, -11, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeMixedDecimal)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2.5,  -3.5,  4.5,
				 5.5, -6.5,   7.5, -8.5,
				-9.5, 10.5, -11.5, 12.5 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5,  2,    3.5,  4,
				5,    6.5,  7,    8.5,
				9.5, 10,   11.5, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  -2,    -3.5,  -4,
				-5,    -6.5,  -7,    -8.5,
				-9.5, -10,   -11.5, -12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixSmallToLargeMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,    -3.5,  4,
				-5,    6.5,  -7,    8.5,
				-9.5, 10,   -11.5, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallPositiveHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallPositiveDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallNegativeHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallNegativeDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallMixedHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallMixedDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallMixedPositve)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				4.5, 5,   6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-4.5, -5,   -6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixLargeToSmallMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   2.5, 3,
				-4.5, 5,   6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetMatrix, setMatrixExceptionSameMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setMatrix(*matrix), std::exception);
}