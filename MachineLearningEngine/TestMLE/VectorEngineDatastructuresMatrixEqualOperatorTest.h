#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorSameSize)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorSmallToLarge)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrix2 = new Matrix(1, 2);

	EXPECT_NO_THROW(*matrix2 = *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorLargeToSmall)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrix2 = new Matrix(3, 4);

	EXPECT_NO_THROW(*matrix2 = *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorNotSet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
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

//------Chain------

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorChainSquare)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrix2 = new Matrix();
	Matrix *matrix3 = new Matrix();
	Matrix *matrix4 = new Matrix();
	EXPECT_NO_THROW(*matrix4 = *matrix3 = *matrix2 = *matrix1);

	EXPECT_TRUE(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix3);
	EXPECT_TRUE(*matrix1 == *matrix4);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorChainRows)
{
	Matrix *matrix1 = new Matrix(4, 2);
	*matrix1 = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 8 };

	Matrix *matrix2 = new Matrix();
	Matrix *matrix3 = new Matrix();
	Matrix *matrix4 = new Matrix();
	EXPECT_NO_THROW(*matrix4 = *matrix3 = *matrix2 = *matrix1);

	EXPECT_TRUE(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix3);
	EXPECT_TRUE(*matrix1 == *matrix4);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorChainColumns)
{
	Matrix *matrix1 = new Matrix(2, 4);
	*matrix1 = { 1, 2, 3, 4,
				 4, 5, 6, 8 };

	Matrix *matrix2 = new Matrix();
	Matrix *matrix3 = new Matrix();
	Matrix *matrix4 = new Matrix();
	EXPECT_NO_THROW(*matrix4 = *matrix3 = *matrix2 = *matrix1);

	EXPECT_TRUE(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix3);
	EXPECT_TRUE(*matrix1 == *matrix4);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorVectorChainSquare)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix();
	Matrix *matrix3 = new Matrix();
	Matrix *matrix4 = new Matrix();
	*matrix4 = *matrix3 = *matrix2 = *matrix1 = { 1, 2, 3,
												  4, 5, 6,
												  7, 8, 9 };

	EXPECT_TRUE(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix3);
	EXPECT_TRUE(*matrix1 == *matrix4);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorVectorChainRows)
{
	Matrix *matrix1 = new Matrix(4, 2);
	Matrix *matrix2 = new Matrix();
	Matrix *matrix3 = new Matrix();
	Matrix *matrix4 = new Matrix();
	*matrix4 = *matrix3 = *matrix2 = *matrix1 = { 1, 2,
												  4, 5,
												  7, 8,
												  9, 8 };

	EXPECT_TRUE(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix3);
	EXPECT_TRUE(*matrix1 == *matrix4);
}

TEST(VectorEngineDatastructurMatrixEqualOperator, equalOperatorVectorChainColumns)
{
	Matrix *matrix1 = new Matrix(2, 4);
	Matrix *matrix2 = new Matrix();
	Matrix *matrix3 = new Matrix();
	Matrix *matrix4 = new Matrix();
	*matrix4 = *matrix3 = *matrix2 = *matrix1 = { 1, 2, 3, 4,
												  4, 5, 6, 8 };

	EXPECT_TRUE(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix3);
	EXPECT_TRUE(*matrix1 == *matrix4);
}