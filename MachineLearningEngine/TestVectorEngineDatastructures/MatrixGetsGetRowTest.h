#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixGetsGetRow, getRowNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(1, 3);
	*result = { 4, 5, 6 };


	EXPECT_NO_THROW(matrix->getRow(1));
	EXPECT_TRUE(*result == matrix->getRow(1));
}

TEST(MatrixGetsGetRow, getRowException)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_THROW(matrix->getRow(-1), std::exception);
}

TEST(MatrixGetsGetRow, getRowEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(1, 3);

	*result = { 1, 2, 3 };
	EXPECT_NO_THROW(matrix->getRow(0));
	EXPECT_TRUE(*result == matrix->getRow(0));

	*result = { 4, 5, 6 };
	EXPECT_NO_THROW(matrix->getRow(1));
	EXPECT_TRUE(*result == matrix->getRow(1));
}

TEST(MatrixGetsGetRow, getRowEqualExceptionMinusIndex)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_THROW(matrix->getRow(-1), std::exception);
}

TEST(MatrixGetsGetRow, getRowEqualExceptionToLargeIndex)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_THROW(matrix->getRow(2), std::exception);
}

TEST(MatrixGetsGetRow, getRowEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = matrix->getRow(1));
	EXPECT_TRUE(*result == matrix->getRow(1));

	EXPECT_NO_THROW(*result = matrix->getRow(1));
	EXPECT_TRUE(*result == matrix->getRow(1));
}

TEST(MatrixGetsGetRow, getRowSetNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(0)));
	EXPECT_TRUE(*result == matrix->getRow(0));

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(1)));
	EXPECT_TRUE(*result == matrix->getRow(1));
}

TEST(MatrixGetsGetRow, getRowSetNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(0)));
	EXPECT_TRUE(*result == matrix->getRow(0));

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(1)));
	EXPECT_TRUE(*result == matrix->getRow(1));
}