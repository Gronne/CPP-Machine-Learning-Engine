#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHolePositiveFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHolePositiveTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHolePositiveTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHolePositiveTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleNegativeFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleNegativeTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleNegativeTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleNegativeTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleMixedFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleMixedTrue)
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


TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleMixedTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualHoleMixedTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalPositiveFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDeciamlPositiveTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDeciamlPositiveTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDeciamlPositiveTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalNegativeFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalNegativeTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalNegativeTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalNegativeTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalMixedfalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalMixedTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalMixedTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualDecimalMixedTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedPositiveFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedPositiveTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedPositiveTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedPositiveTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedNegativeFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedNegativeTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedNegativeTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedNegativeTrue3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedMixedFalse)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedMixedTrue)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedMixedTrue2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqualMixedMixedTrue3)
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
TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x1False)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 5);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 3);

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x1True)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 3);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 5);

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x1True2)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 3);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 3);

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x2False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x2True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x2True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x2True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x3False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x3True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x3True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x3True3)
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


TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x4False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x4True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x4True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x4True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x3False)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x3True)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x3True2)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 2, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual1x3True3)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 3, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 2, 2, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x3False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x3True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x3True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x3True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x3False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x3True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x3True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x3True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x1False)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_FALSE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x1True)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x1True2)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 2, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x1True3)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 3, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 2, 3 };

	EXPECT_NO_THROW(*matrixA <= *matrixB);
	EXPECT_TRUE(*matrixA <= *matrixB);
}

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x2False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x2True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x2True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x2True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x4False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x4True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x4True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual3x4True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x2False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x2True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x2True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual4x2True3)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x4False)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x4True)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x4True2)
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

TEST(VectorEngineDatastructurMatrixSmallerEqualOperator, SmallerEqual2x4True3)
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

