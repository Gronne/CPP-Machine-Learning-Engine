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