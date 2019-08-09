#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeTrue_1x1)
{
	Matrix *matrixA = new Matrix(1, 1);
	Matrix *matrixB = new Matrix(1, 1);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeTrue_2x2)
{
	Matrix *matrixA = new Matrix(2, 2);
	Matrix *matrixB = new Matrix(2, 2);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeTrue_3x3)
{
	Matrix *matrixA = new Matrix(3, 3);
	Matrix *matrixB = new Matrix(3, 3);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeTrue_4x4)
{
	Matrix *matrixA = new Matrix(4, 4);
	Matrix *matrixB = new Matrix(4, 4);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeTrue_2x3)
{
	Matrix *matrixA = new Matrix(2, 3);
	Matrix *matrixB = new Matrix(2, 3);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeTrue_3x2)
{
	Matrix *matrixA = new Matrix(3, 2);
	Matrix *matrixB = new Matrix(3, 2);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeFalse_2x3_3x2)
{
	Matrix *matrixA = new Matrix(2, 3);
	Matrix *matrixB = new Matrix(3, 2);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeFalse_2x2_3x3)
{
	Matrix *matrixA = new Matrix(2, 2);
	Matrix *matrixB = new Matrix(3, 3);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsSameSize, sameSizeFalse_3x3_2x2)
{
	Matrix *matrixA = new Matrix(3, 3);
	Matrix *matrixB = new Matrix(2, 2);

	EXPECT_NO_THROW(TypeMatrix::isSameSize(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isSameSize(*matrixA, *matrixB));
}

