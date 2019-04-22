#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHolePositiveEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHolePositiveNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleNegativeEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, -2, -3,
				-4, -5, -6 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleNegativeNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2, -2, -3,
				-4, -5, -6 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleMixedEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1,  2, -3,
				 4, -5,  6 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleMixedNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  2, -3,
				 4, -5,  6 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalPositiveEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalPositiveNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalNegativeEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalNegativeNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalMixedEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalMixedNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedPositiveEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				4.5, 5,   6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,   2.5, 3,
				4.5, 5,   6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedPositiveNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				4.5, 5,   6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,   2.5, 3,
				4.5, 5,   6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedNegativeEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-4.5, -5,   -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1,   -2.5, -3,
				-4.5, -5,   -6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedNegativeNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-4.5, -5,   -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,   -2.5, -3,
				-4.5, -5,   -6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedMixedEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,    2.5, -3,
				 4.5, -5,    6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1,    2.5, -3,
				 4.5, -5,    6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedMixedNotEqual)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,    2.5, -3,
				 4.5, -5,    6.5 };

	Matrix *result = new Matrix(2, 3);
	*matrix = { -2,    2.5, -3,
				 4.5, -5,    6.5 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

//------Different sizes-------

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual1x1Equal)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual1x1NotEqual)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 2);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}


TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x2Equal)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 4 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2,
				3, 4 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x2NotEqual)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(2, 2);
	*result = { 2, 2,
				3, 4 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual3x3Equal)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual3x3NotEqual)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = { 2, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x4Equal)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = {  1,  2,  3,  4, 
				 5,  6,  7,  8, 
				 9, 10, 11, 12, 
				13, 14, 15, 16 };

	Matrix *result = new Matrix(4, 4);
	*result = { 1,  2,  3,  4,
				 5,  6,  7,  8,
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x4NotEqual)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1,  2,  3,  4,
				 5,  6,  7,  8,
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	Matrix *result = new Matrix(4, 4);
	*result = { 2,  2,  3,  4,
				 5,  6,  7,  8,
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual5x5Equal)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = {  1,  2,  3,  4,  5, 
				 6,  7,  8,  9, 10, 
				11, 12, 13, 14, 15, 
				16, 17, 18, 19, 20, 
				21, 22, 23, 24, 25 };


	Matrix *result = new Matrix(5, 5);
	*result = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual5x5NotEqual)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	Matrix *result = new Matrix(5, 5);
	*result = { 2,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x4Equal)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x4NotEqual)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	Matrix *result = new Matrix(2, 4);
	*result = { 2, 2, 3, 4,
				5, 6, 7, 8 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x2Equal)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2, 
				3, 4,
				5, 6, 
				7, 8 };

	Matrix *result = new Matrix(4, 2);
	*result = { 1, 2,
				3, 4,
				5, 6,
				7, 8 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_FALSE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_FALSE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x2NotEqual)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6,
				7, 8 };

	Matrix *result = new Matrix(4, 2);
	*result = { 2, 2,
				3, 4,
				5, 6,
				7, 8 };

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

//------exceptions------

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException1)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(3, 2);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException2)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException3)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException4)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 3);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException5)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 4);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}