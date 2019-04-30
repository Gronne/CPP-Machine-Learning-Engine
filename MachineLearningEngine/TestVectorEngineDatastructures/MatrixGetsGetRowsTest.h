#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixGetsGetRows, getRowsExceptionOneMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	std::vector<int> rowVector = { -1, 1 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(MatrixGetsGetRows, getRowsExceptionTwoMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<int> rowVector = { -1, -2 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(MatrixGetsGetRows, getRowsEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				4, 5, 6 };

	std::vector<int> rowVector = { 0, 1 };
	EXPECT_NO_THROW(matrix->getRow(rowVector));
	EXPECT_TRUE(*result == matrix->getRow(rowVector));
}

TEST(MatrixGetsGetRows, getRowsEqualExceptionToLargeIndexOne)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<int> rowVector = { 2, 1 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(MatrixGetsGetRows, getRowsEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<int> rowVector = { 2, 3 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(MatrixGetsGetRows, getRowsEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	std::vector<int> rowVector = { 0, 1 };
	EXPECT_NO_THROW(*result = matrix->getRow(rowVector));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixGetsGetRows, getRowsSetNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	std::vector<int> rowVector = { 0, 1 };

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(rowVector)));
	EXPECT_TRUE(*result == matrix->getRow(rowVector));
}

TEST(MatrixGetsGetRows, getRowsSetNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2,
				4, 5 };

	std::vector<int> rowVector = { 0, 1 };

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(rowVector)));
	EXPECT_TRUE(*result == matrix->getRow(rowVector));
}

//---------------Matrix----------------


TEST(MatrixGetsGetRows, getRowsMatrixExceptionOneMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, -1);
	vec->setEntry(0, 1,  1);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, -1);
	vec->setEntry(1, 0, 1);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);
}

TEST(MatrixGetsGetRows, getRowsMatrixExceptionTwoMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, -1);
	vec->setEntry(0, 1, -2);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, -1);
	vec->setEntry(1, 0, -2);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);
}

TEST(MatrixGetsGetRows, getRowsMatrixEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(*vec = matrix->getRow(*vec));
	EXPECT_TRUE(TM.isEqual(*vec, *matrix, 0.0001));

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);
	EXPECT_NO_THROW(*vec = matrix->getRow(*vec));
	EXPECT_TRUE(TM.isEqual(*vec, *matrix, 0.0001));
}

TEST(MatrixGetsGetRows, getRowsMatrixEqualExceptionToLargeIndexOne)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 2);
	vec->setEntry(0, 1, 1);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 2);
	vec->setEntry(1, 0, 1);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);
}

TEST(MatrixGetsGetRows, getRowsMatrixEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 2);
	vec->setEntry(0, 1, 3);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 2);
	vec->setEntry(1, 0, 3);
	EXPECT_THROW(matrix->getRow(*vec), std::exception);
}

TEST(MatrixGetsGetRows, getRowsMatrixEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(*result = matrix->getRow(*vec));
	EXPECT_TRUE(TM.isEqual(*result, *matrix, 0.0001));


	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);

	EXPECT_NO_THROW(*result = matrix->getRow(*vec));
	EXPECT_TRUE(TM.isEqual(*result, *matrix, 0.0001));
}

TEST(MatrixGetsGetRows, getRowsMatrix5x5M3P)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1, 2, 3, 4, 5,
				5, 1, 5, 1, 5,
				2, 4, 6, 7, 2,
				6, 5, 4, 1, 6,
				4, 4, 4, 1, 7 };

	Matrix *vec = new Matrix(1, 3);
	*vec = { 0, 2, 4 };

	Matrix *buf = new Matrix(3, 5);
	*buf = { 1, 2, 3, 4, 5,
			 2, 4, 6, 7, 2,
			 4, 4, 4, 1, 7 };

	TypeMatrix TM;
	EXPECT_NO_THROW(matrix->getRow(*vec));
	EXPECT_TRUE(TM.isEqual(*buf, matrix->getRow(*vec), 0.0001));


	vec->setMatrixSize(3, 1);
	*vec = { 0, 2, 4 };
	EXPECT_NO_THROW(matrix->getRow(*vec));
	EXPECT_TRUE(*buf == matrix->getRow(*vec));
}
