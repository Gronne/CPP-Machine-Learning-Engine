#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHolePositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5,
				 7, 8, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHolePositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5, 3, 4,
				 3, 6, 5,
				 7, 8, 7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHolePositiveTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHolePositiveTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 4, 6,
				 7, 9, 9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -1, -4,
				 -3, -3, -5,
				 -7, -8, -8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5, -3, -4,
				 -3, -6, -5,
				 -7, -8, -7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleNegativeTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleNegativeTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -2, -3,
				 -4, -4, -6,
				 -7, -9, -9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  1, -4,
				  3, -3,  5,
				 -7,  8, -8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5,  3, -4,
				  3, -6,  5,
				 -7,  8, -7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}


TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleMixedTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualHoleMixedTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  2, -3,
				  4, -4,  6,
				 -7,  9, -9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

//------------------------

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalPositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 1.5, 4.5,
				 3.5, 3.5, 5.5,
				 7.5, 8.5, 8.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDeciamlPositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5.5, 3.5, 4.5,
				 3.5, 6.5, 5.5,
				 7.5, 8.5, 7.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDeciamlPositiveTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDeciamlPositiveTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 2.5, 3.5,
				 4.5, 4.5, 6.5,
				 7.5, 9.5, 9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -1.5, -4.5,
				 -3.5, -3.5, -5.5,
				 -7.5, -8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5.5, -3.5, -4.5,
				 -3.5, -6.5, -5.5,
				 -7.5, -8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalNegativeTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalNegativeTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -2.5, -3.5,
				 -4.5, -4.5, -6.5,
				 -7.5, -9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalMixedfalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  1.5, -4.5,
				  3.5, -3.5,  5.5,
				 -7.5,  8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5.5,  3.5, -4.5,
				  3.5, -6.5,  5.5,
				 -7.5,  8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalMixedTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualDecimalMixedTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  2.5, -3.5,
				  4.5, -4.5,  6.5,
				 -7.5,  9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

//------------------------

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedPositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1,   2.5, 3.5,
				 4,   5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1  , 1.5, 4.5,
				 3  , 3  , 5.5,
				 7.5, 8.5, 8.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedPositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1  , 2.5, 3.5,
				 4  , 5  , 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5  , 3.5, 4.5,
				 3  , 6  , 5.5,
				 7.5, 8.5, 7.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedPositiveTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1  , 2.5, 3.5,
				 4  , 5  , 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1  , 2.5, 3.5,
				 4  , 5  , 6.5,
				 7.5, 8.5, 9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedPositiveTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1  , 2.5, 3.5,
				 4  , 5  , 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1  , 2.5, 3.5,
				 4  , 4  , 6.5,
				 7.5, 9.5, 9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -1.5, -4.5,
				 -3  , -3  , -5.5,
				 -7.5, -8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5  , -3.5, -4.5,
				 -3  , -6  , -5.5,
				 -7.5, -8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedNegativeTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedNegativeTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -2.5, -3.5,
				 -4  , -4  , -6.5,
				 -7.5, -9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  1.5, -4.5,
				  3  , -3  ,  5.5,
				 -7.5,  8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5  ,  3.5, -4.5,
				  3  , -6  ,  5.5,
				 -7.5,  8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedMixedTrue2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqualMixedMixedTrue3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  2.5, -3.5,
				  4  , -4  ,  6.5,
				 -7.5,  9.5, -9.5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

//--------Different sizes-------
TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x1False)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 5);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 3);

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x1True)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 3);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 5);

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x1True2)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 3);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 3);

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x2False)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 3, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x2True)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 3, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x2True2)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 2,
				 4, 5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x2True3)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 2, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 2,
				 4, 6 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x3False)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 1, 3,
				 3, 3, 4,
				 5, 6, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x3True)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5, 4, 3,
				 3, 7, 4,
				 5, 6, 9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x3True2)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x3True3)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 2, 3,
				 4, 4, 6,
				 7, 9, 9 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}


TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x4False)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x4True)
{
	Matrix *matrixA = new Matrix(4, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8,
				 4, 3, 2, 5 };

	Matrix *matrixB = new Matrix(4, 4);
	*matrixB = { 5, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 5,
				 8, 4, 2, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x4True2)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x4True3)
{
	Matrix *matrixA = new Matrix(4, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8,
				 4, 3, 2, 5 };

	Matrix *matrixB = new Matrix(4, 4);
	*matrixB = { 1, 3, 3, 4,
				 4, 4, 6, 7,
				 7, 7, 9, 8,
				 4, 4, 2, 5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x3False)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x3True)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x3True2)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 2, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual1x3True3)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 3, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 2, 2, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x3False)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x3True)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 5, 1, 4,
				 3, 3, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x3True2)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x3True3)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 3, 3,
				 4, 4, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x3False)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x3True)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x3True2)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x3True3)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x1False)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x1True)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x1True2)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 2, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x1True3)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 3, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 2, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x2False)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 1,
				 3, 3,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x2True)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 5, 3,
				 5, 3,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x2True2)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x2True3)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 6,
				 7, 7 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 2,
				 4, 5,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x4False)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 1, 4, 3,
				 3, 3, 5, 4,
				 7, 8, 8, 7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x4True)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 8, 7, 4, 3,
				 3, 5, 7, 4,
				 7, 8, 8, 7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x4True2)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual3x4True3)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 7, 7,
				 7, 8, 8, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 3, 3, 4,
				 4, 4, 6, 7,
				 7, 8, 9, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x2False)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x2True)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x2True2)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual4x2True3)
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

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x4False)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 6 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x4True)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 6,
				 4, 5, 6, 8 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x4True2)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(MatrixOperatorSmallerEqualOperator, SmallerEqual2x4True3)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 2, 4,
				 4, 5, 7, 7 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}


//----------Exceptions----------

