#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOthersScale, scalePositiveHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6, 
				8, 10, 12 };

	EXPECT_NO_THROW(matrix->scale(2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOthersScale, scalePositiveDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2.5,  5,    7.5,
				10,   12.5, 15 };

	EXPECT_NO_THROW(matrix->scale(2.5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOthersScale, scaleNegativeHole)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6,
				-8, -10, -12 };

	EXPECT_NO_THROW(matrix->scale(-2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOthersScale, scaleNegativeDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2.5,  -5,    -7.5,
				-10,   -12.5, -15 };

	EXPECT_NO_THROW(matrix->scale(-2.5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixOthersScale, scaleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(matrix->scale(0));
	EXPECT_TRUE(*result == *matrix);
}