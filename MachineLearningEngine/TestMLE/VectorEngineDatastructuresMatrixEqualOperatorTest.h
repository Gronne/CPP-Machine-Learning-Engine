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

//-------------------Vector-------------------

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDouble1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };


	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDouble2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 4 };

	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(1, 0), 3);
	EXPECT_EQ(matrix->getEntry(1, 1), 4);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDouble3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6,
				7, 8, 9 };

	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3);
	EXPECT_EQ(matrix->getEntry(1, 0), 4);
	EXPECT_EQ(matrix->getEntry(1, 1), 5);
	EXPECT_EQ(matrix->getEntry(1, 2), 6);
	EXPECT_EQ(matrix->getEntry(2, 0), 7);
	EXPECT_EQ(matrix->getEntry(2, 1), 8);
	EXPECT_EQ(matrix->getEntry(2, 2), 9);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDouble4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1,  2,  3,  4,
				5,  6,  7,  8,
				9,  10, 11, 12,
				13, 14, 15, 16};

	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3);
	EXPECT_EQ(matrix->getEntry(0, 3), 4);
	EXPECT_EQ(matrix->getEntry(1, 0), 5);
	EXPECT_EQ(matrix->getEntry(1, 1), 6);
	EXPECT_EQ(matrix->getEntry(1, 2), 7);
	EXPECT_EQ(matrix->getEntry(1, 3), 8);
	EXPECT_EQ(matrix->getEntry(2, 0), 9);
	EXPECT_EQ(matrix->getEntry(2, 1), 10);
	EXPECT_EQ(matrix->getEntry(2, 2), 11);
	EXPECT_EQ(matrix->getEntry(2, 3), 12);
	EXPECT_EQ(matrix->getEntry(3, 0), 13);
	EXPECT_EQ(matrix->getEntry(3, 1), 14);
	EXPECT_EQ(matrix->getEntry(3, 2), 15);
	EXPECT_EQ(matrix->getEntry(3, 3), 16);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDouble2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6};

	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3);
	EXPECT_EQ(matrix->getEntry(1, 0), 4);
	EXPECT_EQ(matrix->getEntry(1, 1), 5);
	EXPECT_EQ(matrix->getEntry(1, 2), 6);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDouble3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 5,
				7, 8 };

	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(1, 0), 4);
	EXPECT_EQ(matrix->getEntry(1, 1), 5);
	EXPECT_EQ(matrix->getEntry(2, 0), 7);
	EXPECT_EQ(matrix->getEntry(2, 1), 8);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorDoubleTypes)
{
	Matrix *matrix = new Matrix(1, 3);

	*matrix = { 1, 2, 3 };
	EXPECT_EQ(matrix->getEntry(0, 0), 1);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3);

	*matrix = { -1, -2, -3 };
	EXPECT_EQ(matrix->getEntry(0, 0), -1);
	EXPECT_EQ(matrix->getEntry(0, 1), -2);
	EXPECT_EQ(matrix->getEntry(0, 2), -3);

	*matrix = { 1.5, 2.5, 3.5 };
	EXPECT_EQ(matrix->getEntry(0, 0), 1.5);
	EXPECT_EQ(matrix->getEntry(0, 1), 2.5);
	EXPECT_EQ(matrix->getEntry(0, 2), 3.5);

	*matrix = { -1.5, -2.5, -3.5 };
	EXPECT_EQ(matrix->getEntry(0, 0), -1.5);
	EXPECT_EQ(matrix->getEntry(0, 1), -2.5);
	EXPECT_EQ(matrix->getEntry(0, 2), -3.5);

	*matrix = { 1.5, 2, 3.5 };
	EXPECT_EQ(matrix->getEntry(0, 0), 1.5);
	EXPECT_EQ(matrix->getEntry(0, 1), 2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3.5);

	*matrix = { -1.5, -2, 3.5 };
	EXPECT_EQ(matrix->getEntry(0, 0), -1.5);
	EXPECT_EQ(matrix->getEntry(0, 1), -2);
	EXPECT_EQ(matrix->getEntry(0, 2), 3.5);
}