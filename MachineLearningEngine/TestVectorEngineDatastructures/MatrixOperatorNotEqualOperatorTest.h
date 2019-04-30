#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOperatorNotEqualOperator, NotEqualHolePositiveEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualHolePositiveNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualHoleNegativeEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualHoleNegativeNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualHoleMixedEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualHoleMixedNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualDecimalPositiveEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualDecimalPositiveNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualDecimalNegativeEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualDecimalNegativeNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualDecimalMixedEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualDecimalMixedNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualMixedPositiveEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualMixedPositiveNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualMixedNegativeEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualMixedNegativeNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualMixedMixedEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualMixedMixedNotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual1x1Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual1x1NotEqual)
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


TEST(MatrixOperatorNotEqualOperator, NotEqual2x2Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual2x2NotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual3x3Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual3x3NotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual4x4Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual4x4NotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual5x5Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual5x5NotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual2x4Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual2x4NotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual4x2Equal)
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

TEST(MatrixOperatorNotEqualOperator, NotEqual4x2NotEqual)
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

TEST(MatrixOperatorNotEqualOperator, NotEqualException1)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(3, 2);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(MatrixOperatorNotEqualOperator, NotEqualException2)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(3, 4);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(MatrixOperatorNotEqualOperator, NotEqualException3)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(MatrixOperatorNotEqualOperator, NotEqualException4)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 3);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}

TEST(MatrixOperatorNotEqualOperator, NotEqualException5)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 4);

	EXPECT_NO_THROW(*matrix != *result);
	EXPECT_TRUE(*matrix != *result);

	EXPECT_NO_THROW(*result != *matrix);
	EXPECT_TRUE(*result != *matrix);
}