#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(-8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

//-------------

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8.5, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(-8.5, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8.5, SimpleMatrixOperations::findMaxValue(*matrix));
}

//----------------

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(-8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMVMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				4,   -5.5, 6,
				7.5, 8,   -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

//-------different sizes------

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 8);

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(5, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				4, 5, 6, 7,
				7, 8, 2, 9,
				4, 2, 7, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(9, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV3x1)
{
	Matrix *matrix = new Matrix(3, 1);
	*matrix = { 1,
				6,
				7 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(7, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(3, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 6,
				7, 8 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::findMaxValue(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsFindMaxValue, FMV2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::findMaxValue(*matrix));
	EXPECT_EQ(6, SimpleMatrixOperations::findMaxValue(*matrix));
}