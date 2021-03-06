#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixGetsGetColumn, getColEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix();

	*result = matrix->getColumn(0);
	EXPECT_EQ(matrix->getEntry(0, 0), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 0), result->getEntry(1, 0));

	*result = matrix->getColumn(1);
	EXPECT_EQ(matrix->getEntry(0, 1), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 1), result->getEntry(1, 0));
}

TEST(MatrixGetsGetColumn, getColEqualExceptionMinusIndex)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_THROW(matrix->getColumn(-1), std::exception);
}

TEST(MatrixGetsGetColumn, getColEqualExceptionToLargeIndex)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_THROW(matrix->getColumn(3), std::exception);
}

TEST(MatrixGetsGetColumn, getColEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = matrix->getColumn(0));
	EXPECT_EQ(matrix->getEntry(0, 0), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 0), result->getEntry(1, 0));

	EXPECT_NO_THROW(*result = matrix->getColumn(1));
	EXPECT_EQ(matrix->getEntry(0, 1), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 1), result->getEntry(1, 0));
}

TEST(MatrixGetsGetColumn, getColSetNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(result->setMatrix(matrix->getColumn(0)));
	EXPECT_EQ(matrix->getEntry(0, 0), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 0), result->getEntry(1, 0));

	EXPECT_NO_THROW(result->setMatrix(matrix->getColumn(0)));
	EXPECT_EQ(matrix->getEntry(0, 1), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 1), result->getEntry(1, 0));
}

TEST(MatrixGetsGetColumn, getColSetNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix();

	result->setMatrix(matrix->getColumn(0));
	EXPECT_EQ(matrix->getEntry(0, 0), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 0), result->getEntry(1, 0));

	result->setMatrix(matrix->getColumn(1));
	EXPECT_EQ(matrix->getEntry(0, 1), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(1, 1), result->getEntry(1, 0));
}