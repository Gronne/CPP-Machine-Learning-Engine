#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetColumn, getColEqualNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	*matrix2 = matrix1->getColumn(0);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));

	*matrix2 = matrix1->getColumn(1);
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 0));
}

TEST(VectorEngineDatastructurMatrixGetColumn, getColEqualExceptionMinusIndex)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_THROW(matrix1->getColumn(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumn, getColEqualExceptionToLargeIndex)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_THROW(matrix1->getColumn(3), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumn, getColEqualNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	*matrix2 = matrix1->getColumn(0);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));

	*matrix2 = matrix1->getColumn(1);
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 0));
}

TEST(VectorEngineDatastructurMatrixGetColumn, getColSetNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix2->setMatrix(&matrix1->getColumn(0));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));

	matrix2->setMatrix(&matrix1->getColumn(1));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 0));
}

TEST(VectorEngineDatastructurMatrixGetColumn, getColSetNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	matrix2->setMatrix(&matrix1->getColumn(0));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));

	matrix2->setMatrix(&matrix1->getColumn(1));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 0));
}