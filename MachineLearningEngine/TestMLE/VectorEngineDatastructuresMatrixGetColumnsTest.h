#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsExceptionOneMinus)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { -1, 1 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsExceptionTwoMinus)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { -1, -2 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 0, 1 };

	*matrix2 = matrix1->getColumns(colVector);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualExceptionToLargeIndexOne)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 3, 1 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 3, 4 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	std::vector<int> colVector = { 0, 1 };

	*matrix2 = matrix1->getColumns(colVector);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsSetNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	std::vector<int> colVector = { 0, 1 };

	matrix2->setMatrix(&matrix1->getColumns(colVector));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsSetNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 0, 1 };

	matrix2->setMatrix(&matrix1->getColumns(colVector));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}