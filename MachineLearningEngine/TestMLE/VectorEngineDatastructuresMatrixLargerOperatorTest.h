#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixLargerOperator, largerHolePositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5,
				 7, 8, 8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerHolePositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5, 3, 4,
				 3, 6, 5,
				 7, 8, 7 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerHoleNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1, -1, -4,
				 -3, -3, -5,
				 -7, -8, -8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerHoleNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6,
				 -7, -8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5, -3, -4,
				 -3, -6, -5,
				 -7, -8, -7 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerHoleMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1,  1, -4,
				  3, -3,  5,
				 -7,  8, -8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerHoleMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6,
				 -7,  8, -9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5,  3, -4,
				  3, -6,  5,
				 -7,  8, -7 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

//------------------------

TEST(VectorEngineDatastructurMatrixLargerOperator, largerDecimalPositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1.5, 1.5, 4.5,
				 3.5, 3.5, 5.5,
				 7.5, 8.5, 8.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerDeciamlPositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1.5, 2.5, 3.5,
				 4.5, 5.5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5.5, 3.5, 4.5,
				 3.5, 6.5, 5.5,
				 7.5, 8.5, 7.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerDecimalNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5, -1.5, -4.5,
				 -3.5, -3.5, -5.5,
				 -7.5, -8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerDecimalNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5, -2.5, -3.5,
				 -4.5, -5.5, -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5.5, -3.5, -4.5,
				 -3.5, -6.5, -5.5,
				 -7.5, -8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerDecimalMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1.5,  1.5, -4.5,
				  3.5, -3.5,  5.5,
				 -7.5,  8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerDecimalMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1.5,  2.5, -3.5,
				  4.5, -5.5,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5.5,  3.5, -4.5,
				  3.5, -6.5,  5.5,
				 -7.5,  8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

//------------------------

TEST(VectorEngineDatastructurMatrixLargerOperator, largerMixedPositiveTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1,   2.5, 3.5,
				 4,   5, 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1  , 1.5, 4.5,
				 3  , 3  , 5.5,
				 7.5, 8.5, 8.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerMixedPositiveFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1  , 2.5, 3.5,
				 4  , 5  , 6.5,
				 7.5, 8.5, 9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5  , 3.5, 4.5,
				 3  , 6  , 5.5,
				 7.5, 8.5, 7.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerMixedNegativeTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  , -1.5, -4.5,
				 -3  , -3  , -5.5,
				 -7.5, -8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerMixedNegativeFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  , -2.5, -3.5,
				 -4  , -5  , -6.5,
				 -7.5, -8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5  , -3.5, -4.5,
				 -3  , -6  , -5.5,
				 -7.5, -8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerMixedMixedTrue)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -1  ,  1.5, -4.5,
				  3  , -3  ,  5.5,
				 -7.5,  8.5, -8.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, largerMixedMixedFalse)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { -1  ,  2.5, -3.5,
				  4  , -5  ,  6.5,
				 -7.5,  8.5, -9.5 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { -5  ,  3.5, -4.5,
				  3  , -6  ,  5.5,
				 -7.5,  8.5, -7.5 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

//--------Different sizes-------
TEST(VectorEngineDatastructurMatrixLargerOperator, larger1x1True)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 5);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 3);

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger1x1False)
{
	Matrix *matrixA = new Matrix(1, 1);
	matrixA->setEntry(0, 0, 3);

	Matrix *matrixB = new Matrix(1, 1);
	matrixB->setEntry(0, 0, 5);

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger2x2True)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 3, 3 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger2x2False)
{
	Matrix *matrixA = new Matrix(2, 2);
	*matrixA = { 1, 2,
				 4, 5 };

	Matrix *matrixB = new Matrix(2, 2);
	*matrixB = { 1, 1,
				 3, 8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x3True)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 1, 1, 3,
				 3, 3, 4,
				 5, 6, 3};

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x3False)
{
	Matrix *matrixA = new Matrix(3, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	Matrix *matrixB = new Matrix(3, 3);
	*matrixB = { 5, 4, 3,
				 6, 7, 4,
				 5, 6, 9 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}


TEST(VectorEngineDatastructurMatrixLargerOperator, larger4x4True)
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

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger4x4False)
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

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger1x3True)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 1, 1, 3};

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger1x3False)
{
	Matrix *matrixA = new Matrix(1, 3);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(1, 3);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger2x3True)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 1, 4,
				 3, 3, 5};

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger2x3False)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 2, 1, 4,
				 3, 3, 8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger4x3True)
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
				 4, 3, 2};

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger4x3False)
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

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x1True)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 1, 1, 3 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x1False)
{
	Matrix *matrixA = new Matrix(3, 1);
	*matrixA = { 1, 2, 3 };

	Matrix *matrixB = new Matrix(3, 1);
	*matrixB = { 2, 1, 4 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x2True)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 1,
				 3, 3,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x2False)
{
	Matrix *matrixA = new Matrix(3, 2);
	*matrixA = { 1, 2,
				 4, 5,
				 7, 8 };

	Matrix *matrixB = new Matrix(3, 2);
	*matrixB = { 1, 3,
				 5, 3,
				 7, 8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x4True)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 1, 1, 4, 3,
				 3, 3, 5, 4,
				 7, 8, 8, 7 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger3x4False)
{
	Matrix *matrixA = new Matrix(3, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7,
				 7, 8, 9, 8 };

	Matrix *matrixB = new Matrix(3, 4);
	*matrixB = { 8, 7, 4, 3,
				 3, 5, 7, 4,
				 7, 8, 8, 7 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger4x2True)
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

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger4x2False)
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

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger2x4True)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7};

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 4,
				 4, 5, 6, 6 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_TRUE(*matrixA > *matrixB);
}

TEST(VectorEngineDatastructurMatrixLargerOperator, larger2x4False)
{
	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				 4, 5, 6, 7 };

	Matrix *matrixB = new Matrix(2, 4);
	*matrixB = { 1, 2, 3, 6,
				 4, 5, 6, 8 };

	EXPECT_NO_THROW(*matrixA > *matrixB);
	EXPECT_FALSE(*matrixA > *matrixB);
}


//----------Exceptions----------

