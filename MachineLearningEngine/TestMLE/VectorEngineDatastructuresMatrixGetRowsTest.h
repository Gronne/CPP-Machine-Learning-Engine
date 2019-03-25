#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetRows, getRowsExceptionOneMinus)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> rowVector = { -1, 1 };

	EXPECT_THROW(matrix1->getRows(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsExceptionTwoMinus)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> rowVector = { -1, -2 };

	EXPECT_THROW(matrix1->getRows(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> rowVector = { 0, 1 };

	*matrix2 = matrix1->getRows(rowVector);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualExceptionToLargeIndexOne)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> rowVector = { 2, 1 };

	EXPECT_THROW(matrix1->getRows(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> rowVector = { 2, 3 };

	EXPECT_THROW(matrix1->getRows(rowVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsEqualNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	std::vector<int> rowVector = { 0, 1 };

	*matrix2 = matrix1->getRows(rowVector);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsSetNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	std::vector<int> rowVector = { 0, 1 };

	matrix2->setMatrix(&matrix1->getRows(rowVector));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsSetNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> rowVector = { 0, 1 };

	matrix2->setMatrix(&matrix1->getRows(rowVector));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
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
	EXPECT_THROW(matrix->getRows(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, -1);
	vec->setEntry(1, 0, 1);
	EXPECT_THROW(matrix->getRows(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixExceptionTwoMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, -1);
	vec->setEntry(0, 1, -2);
	EXPECT_THROW(matrix->getRows(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, -1);
	vec->setEntry(1, 0, -2);
	EXPECT_THROW(matrix->getRows(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);
	EXPECT_NO_THROW(*vec = matrix->getRows(*vec));
	EXPECT_TRUE(*vec == *matrix);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);
	EXPECT_NO_THROW(*vec = matrix->getRows(*vec));
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
	EXPECT_THROW(matrix->getRows(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 2);
	vec->setEntry(1, 0, 1);
	EXPECT_THROW(matrix->getRows(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 2);
	vec->setEntry(0, 1, 3);
	EXPECT_THROW(matrix->getRows(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 2);
	vec->setEntry(1, 0, 3);
	EXPECT_THROW(matrix->getRows(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRows, getRowsMatrixEqualNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);

	*matrix2 = matrix1->getRows(*vec);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));


	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);

	*matrix2 = matrix1->getRows(*vec);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
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

	EXPECT_NO_THROW(matrix->getRows(*vec));
	EXPECT_TRUE(*buf == matrix->getRows(*vec));


	vec->setMatrixSize(3, 1);
	*vec = { 0, 2, 4 };
	EXPECT_NO_THROW(matrix->getRows(*vec));
	EXPECT_TRUE(*buf == matrix->getRows(*vec));
}


