#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetRows, getRowsExceptionOneMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	std::vector<int> rowVector = { -1, 1 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsExceptionTwoMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<int> rowVector = { -1, -2 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualNoException)
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

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualExceptionToLargeIndexOne)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<int> rowVector = { 2, 1 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<int> rowVector = { 2, 3 };
	EXPECT_THROW(matrix->getRow(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	std::vector<int> rowVector = { 0, 1 };
	EXPECT_NO_THROW(*result = matrix->getRow(rowVector));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsSetNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	std::vector<int> rowVector = { 0, 1 };

	EXPECT_NO_THROW(result->setMatrix(matrix->getRow(rowVector)));
	EXPECT_TRUE(*result == matrix->getRow(rowVector));
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsSetNoException)
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


TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixExceptionOneMinus)
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

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixExceptionTwoMinus)
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

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);
	EXPECT_NO_THROW(*vec = matrix->getRow(*vec));
	EXPECT_TRUE(*vec == *matrix);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);
	EXPECT_NO_THROW(*vec = matrix->getRow(*vec));
	EXPECT_TRUE(*vec == *matrix);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualExceptionToLargeIndexOne)
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

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualExceptionToLargeIndexTwo)
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

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);

	EXPECT_NO_THROW(*result = matrix->getRow(*vec));
	EXPECT_TRUE(*result == *matrix);


	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);

	EXPECT_NO_THROW(*result = matrix->getRow(*vec));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrix5x5M3P)
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

	EXPECT_NO_THROW(matrix->getRow(*vec));
	EXPECT_TRUE(*buf == matrix->getRow(*vec));


	vec->setMatrixSize(3, 1);
	*vec = { 0, 2, 4 };
	EXPECT_NO_THROW(matrix->getRow(*vec));
	EXPECT_TRUE(*buf == matrix->getRow(*vec));
}
