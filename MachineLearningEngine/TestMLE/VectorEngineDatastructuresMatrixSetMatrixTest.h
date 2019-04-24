#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizePositiveHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizePositiveDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.1, 2.2, 3.3,
				4.4, 5.5, 6.6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeNegativeHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeNegativeDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.1, -2.2, -3.3,
				-4.4, -5.5, -6.6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = {  1, -2,  3,
				-4,  5, -6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = {  1.1, -2.2,  3.3,
				-4.4,  5.5, -6.6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.1, 2,   3.3,
				4,   5.5, 6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.1, -2,   -3.3,
				-4,   -5.5, -6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.1, 2,   3.3,
				-4,   5.5, 6 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargePositiveHole)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1,  2,  3,  4, 
				5,  6,  7,  8, 
				9, 10, 11, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargePositiveDecimal)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5,  2.5,  3.5,  4.5,
				5.5,  6.5,  7.5,  8.5,
				9.5, 10.5, 11.5, 12.5 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeNegativeHole)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1,  -2,  -3,  -4,
				-5,  -6,  -7,  -8,
				-9, -10, -11, -12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeNegativeDecimal)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5,  2.5,  3.5,  4.5,
				5.5,  6.5,  7.5,  8.5,
				9.5, 10.5, 11.5, 12.5 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedHole)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1,  2,  -3,  4,
				 5, -6,   7, -8,
				-9, 10, -11, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedDecimal)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2.5,  -3.5,  4.5,
				 5.5, -6.5,   7.5, -8.5,
				-9.5, 10.5, -11.5, 12.5 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5,  2,    3.5,  4,
				5,    6.5,  7,    8.5,
				9.5, 10,   11.5, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  -2,    -3.5,  -4,
				-5,    -6.5,  -7,    -8.5,
				-9.5, -10,   -11.5, -12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,    -3.5,  4,
				-5,    6.5,  -7,    8.5,
				-9.5, 10,   -11.5, 12 };

	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallPositiveHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallPositiveDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallNegativeHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallNegativeDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedPositve)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				4.5, 5,   6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-4.5, -5,   -6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   2.5, 3,
				-4.5, 5,   6.5 };

	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(result->setMatrix(*matrix));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixExceptionSameMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setMatrix(*matrix), std::exception);
}