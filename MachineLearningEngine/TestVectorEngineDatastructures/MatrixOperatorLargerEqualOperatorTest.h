#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHolePositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5,
				 7, 8, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHolePositiveTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHolePositiveTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 4, 6,
				 7, 9, 9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHolePositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5, 3, 4,
				 3, 6, 5,
				 7, 8, 7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -1, -4,
				 -3, -3, -5,
				 -7, -8, -8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleNegativeTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleNegativeTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -2, -3,
				 -4, -4, -6,
				 -7, -9, -9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5, -3, -4,
				 -3, -6, -5,
				 -7, -8, -7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  1, -4,
				  3, -3,  5,
				 -7,  8, -8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleMixedTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleMixedTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  2, -3,
				  4, -4,  6,
				 -7,  9, -9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualHoleMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5,  3, -4,
				  3, -6,  5,
				 -7,  8, -7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

//------------------------

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalPositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 1.5, 4.5,
				 3.5, 3.5, 5.5,
				 7.5, 8.5, 8.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalPositiveTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalPositiveTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 2.5, 3.5,
				 4.5, 4.5, 6.5,
				 7.5, 9.5, 9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDeciamlPositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5.5, 3.5, 4.5,
				 3.5, 6.5, 5.5,
				 7.5, 8.5, 7.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -1.5, -4.5,
				 -3.5, -3.5, -5.5,
				 -7.5, -8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalNegativeTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalNegativeTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -2.5, -3.5,
				 -4.5, -4.5, -6.5,
				 -7.5, -9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5.5, -3.5, -4.5,
				 -3.5, -6.5, -5.5,
				 -7.5, -8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  1.5, -4.5,
				  3.5, -3.5,  5.5,
				 -7.5,  8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalMixedTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalMixedTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  2.5, -3.5,
				  4.5, -4.5,  6.5,
				 -7.5,  9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualDecimalMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5.5,  3.5, -4.5,
				  3.5, -6.5,  5.5,
				 -7.5,  8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

//------------------------

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedPositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1,   2.5, 3.5,
				 4,   5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1  , 1.5, 4.5,
				 3  , 3  , 5.5,
				 7.5, 8.5, 8.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedPositiveTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1,   2.5, 3.5,
				 4,   5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1,   2.5, 3.5,
				 4,   5, 6.5,
				 7.5, 8.5, 9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedPositiveTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1,   2.5, 3.5,
				 4,   5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1,   2.5, 3.5,
				 4,   4, 6.5,
				 7.5, 9.5, 9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedPositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1  , 2.5, 3.5,
				 4  , 5  , 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5  , 3.5, 4.5,
				 3  , 6  , 5.5,
				 7.5, 8.5, 7.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -1.5, -4.5,
				 -3  , -3  , -5.5,
				 -7.5, -8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedNegativeTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedNegativeTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -2.5, -3.5,
				 -4  , -4  , -6.5,
				 -7.5, -9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5  , -3.5, -4.5,
				 -3  , -6  , -5.5,
				 -7.5, -8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  1.5, -4.5,
				  3  , -3  ,  5.5,
				 -7.5,  8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedMixedTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedMixedTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  2.5, -3.5,
				  4  , -4  ,  6.5,
				 -7.5,  9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqualMixedMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5  ,  3.5, -4.5,
				  3  , -6  ,  5.5,
				 -7.5,  8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

//--------Different sizes-------
TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x1True)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 5);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 3);

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x1True2)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 5);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 5);

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x1False)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 3);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 5);

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x2True)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 3, 3 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x2True2)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 2,
				 4, 5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x2True3)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 4 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 4, 5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x2False)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 3, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x3True)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 1, 3,
				 3, 3, 4,
				 5, 6, 3 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x3True2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x3True3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 4, 6,
				 7, 9, 9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x3False)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5, 4, 3,
				 6, 7, 4,
				 5, 6, 9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}


TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x4True)
{
	Matrix *matrixA = new Matrix(4, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8,
				 4, 3, 2, 5 };

	Matrix *matrixB = new Matrix(4, 4);
	*matrixB = { 1, 2, 1, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 5,
				 4, 3, 2, 4 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x4True2)
{
	Matrix *matrixA = new Matrix(4, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8,
				 4, 3, 2, 5 };

	Matrix *matrixB = new Matrix(4, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8,
				 4, 3, 2, 5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x4True3)
{
	Matrix *matrixA = new Matrix(4, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 8, 8,
				 4, 3, 1, 5 };

	Matrix *matrixB = new Matrix(4, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 4, 6, 7,
				 7, 7, 9, 8,
				 4, 3, 2, 5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x4False)
{
	Matrix *matrixA = new Matrix(4, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8,
				 4, 3, 2, 5 };

	Matrix *matrixB = new Matrix(4, 4);
	*matrixB = { 5, 2, 9, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 5,
				 4, 3, 2, 4 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x3True)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x3True2)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 2, 3 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x3True3)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 1, 4 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual1x3False)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x3True)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x3True2)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x3True3)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 3, 3,
				 4, 4, 6 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x3False)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 2, 1, 4,
				 3, 5, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x3True)
{
	Matrix *matrixA = new Matrix(4, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9,
				 4, 3, 2 };

	Matrix *matrixB = new Matrix(4, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5,
				 7, 8, 8,
				 4, 3, 2 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x3True2)
{
	Matrix *matrixA = new Matrix(4, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9,
				 4, 3, 2 };

	Matrix *matrixB = new Matrix(4, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9,
				 4, 3, 2 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x3True3)
{
	Matrix *matrixA = new Matrix(4, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 9, 9,
				 4, 2, 2 };

	Matrix *matrixB = new Matrix(4, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9,
				 4, 3, 2 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x3False)
{
	Matrix *matrixA = new Matrix(4, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9,
				 4, 3, 2 };

	Matrix *matrixB = new Matrix(4, 3);
	*matrixB = { 6, 1, 4,
				 3, 4, 5,
				 7, 8, 8,
				 4, 3, 9 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x1True)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x1True2)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 2, 3 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x1True3)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 2, 2 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x1False)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x2True)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 1,
				 3, 3,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x2True2)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x2True3)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 8, 7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x2False)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 3,
				 5, 5,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x4True)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 1, 4, 3,
				 3, 3, 5, 4,
				 7, 8, 8, 7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x4True2)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x4True3)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 8, 7,
				 7, 8, 7, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual3x4False)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 8, 7, 4, 3,
				 3, 5, 7, 4,
				 7, 8, 8, 7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x2True)
{
	Matrix *matrixA = new Matrix(4, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 8 };

	Matrix *matrixB = new Matrix(4, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 6 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x2True2)
{
	Matrix *matrixA = new Matrix(4, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 8 };

	Matrix *matrixB = new Matrix(4, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x2True3)
{
	Matrix *matrixA = new Matrix(4, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 8 };

	Matrix *matrixB = new Matrix(4, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 8, 8,
				 9, 7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual4x2False)
{
	Matrix *matrixA = new Matrix(4, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8,
				 9, 8 };

	Matrix *matrixB = new Matrix(4, 2);
	*matrixB = { 3, 2,
				 4, 6,
				 7, 8,
				 9, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x4True)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 6 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x4True2)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x4True3)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 3,
				 4, 5, 6, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_TRUE(*matrixA >= *matrixB);
}

TEST(MatrixOperatorLargerEqualOperator, LargerEqual2x4False)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 6,
				 4, 5, 6, 8 };

	EXPECT_NO_THROW(*matrixA >= *matrixB);
	EXPECT_FALSE(*matrixA >= *matrixB);
}


//----------Exceptions----------

