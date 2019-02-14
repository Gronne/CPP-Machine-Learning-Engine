#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorSameSize)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorSmallToLarge)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(1, 2);
	*matrix2 = *matrix1;

	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorLargeToSmall)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(3, 4);
	*matrix2 = *matrix1;

	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorNotSet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;

	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(0, 2), matrix2->getEntry(0, 2));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
	EXPECT_EQ(matrix1->getEntry(1, 2), matrix2->getEntry(1, 2));
}