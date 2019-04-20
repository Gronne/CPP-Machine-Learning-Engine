#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualHolePositiveEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3, 
				 4, 5, 6 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualHolePositiveNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 6, 5, 4, 
				 3, 2, 1 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualHoleNegativeEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -1, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualHoleNegativeNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -6, -5, -4,
				 -3, -2, -1 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualHoleMixedEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -1,  2, -3,
				  4, -5,  6 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualHoleMixedNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -6,  5, -4,
				  3, -2,  1 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualDecimalPositiveEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualDecimalPositiveNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 6.5, 5.5, 4.5,
				 3.5, 2.5, 1.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualDecimalNegativeEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualDecimalNegativeNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -2.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualDecimalMixedEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualDecimalMixedNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -2.5,  2.5, -3.5,
				  4.5, -5.5,  6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualMixedPositiveEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1,   2.5, 3,
				 4.5, 5,   6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1,   2.5, 3,
				 4.5, 5,   6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualMixedPositiveNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1,   2.5, 3,
				 4.5, 5,   6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 2,   2.5, 3,
				 4.5, 5,   6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualMixedNegativeEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1,   -2.5, -3,
				 -4.5, -5,   -6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -1,   -2.5, -3,
				 -4.5, -5,   -6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualMixedNegativeNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1,   -2.5, -3,
				 -4.5, -5,   -6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -2,   -2.5, -3,
				 -4.5, -5,   -6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualMixedMixedEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1,    2.5, -3,
				  4.5, -5,    6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -1,    2.5, -3,
				  4.5, -5,    6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualMixedMixedNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { -1,    2.5, -3,
				  4.5, -5,    6.5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { -2,    2.5, -3,
				  4.5, -5,    6.5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

//------Different sizes-------

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual1x1Equal)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual1x1NotEqual)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}


TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual2x2Equal)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2, 
				 4, 5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 1, 2,
				 4, 5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual2x2NotEqual)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 4, 5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2,
				 4, 5 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual3x3Equal)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1, 2, 3, 
				 4, 5, 6, 
				 7, 8, 9 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual3x3NotEqual)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 2, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual4x4Equal)
{
	Matrix *matrix1 = new Matrix(4, 4);
	*matrix1 = {  1,  2,  3,  4, 
				  5,  6,  7,  8, 
				  9, 10, 11, 12, 
				 13, 14, 15, 16 };

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = {  1,  2,  3,  4,
				  5,  6,  7,  8,
				  9, 10, 11, 12,
				 13, 14, 15, 16 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual4x4NotEqual)
{
	Matrix *matrix1 = new Matrix(4, 4);
	*matrix1 = { 1,  2,  3,  4,
				  5,  6,  7,  8,
				  9, 10, 11, 12,
				 13, 14, 15, 16 };

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = {  2,  2,  3,  4,
				  5,  6,  7,  8,
				  9, 10, 11, 12,
				 13, 14, 15, 16 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual5x5Equal)
{
	Matrix *matrix1 = new Matrix(5, 5);
	*matrix1 = {  1,  2,  3,  4,  5, 
				  6,  7,  8,  9, 10, 
				 11, 12, 13, 14, 15, 
				 16, 17, 18, 19, 20, 
				 21, 22, 23, 24, 25 };

	Matrix *matrix2 = new Matrix(5, 5);
	*matrix2 = {  1,  2,  3,  4,  5,
				  6,  7,  8,  9, 10,
				 11, 12, 13, 14, 15,
				 16, 17, 18, 19, 20,
				 21, 22, 23, 24, 25 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual5x5NotEqual)
{
	Matrix *matrix1 = new Matrix(5, 5);
	*matrix1 = { 1,  2,  3,  4,  5,
				  6,  7,  8,  9, 10,
				 11, 12, 13, 14, 15,
				 16, 17, 18, 19, 20,
				 21, 22, 23, 24, 25 };

	Matrix *matrix2 = new Matrix(5, 5);
	*matrix2 = { 2,  2,  3,  4,  5,
				  6,  7,  8,  9, 10,
				 11, 12, 13, 14, 15,
				 16, 17, 18, 19, 20,
				 21, 22, 23, 24, 25 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual2x4Equal)
{
	Matrix *matrix1 = new Matrix(2, 4);
	*matrix1 = { 1, 2, 3, 4, 
				 5, 6, 7, 8 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 1, 2, 3, 4,
				 5, 6, 7, 8 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual2x4NotEqual)
{
	Matrix *matrix1 = new Matrix(2, 4);
	*matrix1 = { 1, 2, 3, 4,
				 5, 6, 7, 8 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 2, 2, 3, 4,
				 5, 6, 7, 8 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual4x2Equal)
{
	Matrix *matrix1 = new Matrix(2, 4);
	*matrix1 = { 1, 2, 
				 3, 4,
				 5, 6, 
				 7, 8 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 1, 2, 
				 3, 4,
				 5, 6, 
				 7, 8 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_TRUE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_TRUE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqual4x2NotEqual)
{
	Matrix *matrix1 = new Matrix(2, 4);
	*matrix1 = { 1, 2,
				 3, 4,
				 5, 6,
				 7, 8 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 2, 2,
				 3, 4,
				 5, 6,
				 7, 8 };

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

//------exceptions------

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualException1)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(3, 2);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualException2)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualException3)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualException4)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(4, 3);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}

TEST(VectorEngineDatastructurMatrixEqualEqualOperator, equalEqualException5)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(4, 4);

	EXPECT_NO_THROW(*matrix1 == *matrix2);
	EXPECT_FALSE(*matrix1 == *matrix2);

	EXPECT_NO_THROW(*matrix2 == *matrix1);
	EXPECT_FALSE(*matrix2 == *matrix1);
}