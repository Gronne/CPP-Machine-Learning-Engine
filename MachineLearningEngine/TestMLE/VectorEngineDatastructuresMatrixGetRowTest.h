#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetRow, getRowNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix1->getRow(1));
	EXPECT_EQ(4, matrix1->getRow(1).getEntry(0, 0));
	EXPECT_EQ(5, matrix1->getRow(1).getEntry(0, 1));
	EXPECT_EQ(6, matrix1->getRow(1).getEntry(0, 2));
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_THROW(matrix1->getRow(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowEqualNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	*matrix2 = matrix1->getRow(0);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));

	*matrix2 = matrix1->getRow(1);
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(0, 2));
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowEqualExceptionMinusIndex)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_THROW(matrix1->getRow(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowEqualExceptionToLargeIndex)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_THROW(matrix1->getRow(2), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowEqualNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	*matrix2 = matrix1->getRow(1);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));

	*matrix2 = matrix1->getRow(1);
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(0, 2));
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowSetNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix2->setMatrix(&matrix1->getRow(0));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));

	matrix2->setMatrix(&matrix1->getRow(1));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(0, 2));
}

TEST(VectorEngineDatastructurMatrixGetRow, getRowSetNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	matrix2->setMatrix(&matrix1->getRow(0));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));

	matrix2->setMatrix(&matrix1->getRow(1));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(0, 2));
}