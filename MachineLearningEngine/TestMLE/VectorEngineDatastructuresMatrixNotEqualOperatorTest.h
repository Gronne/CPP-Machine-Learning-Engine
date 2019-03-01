#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHolePositiveEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(1, 0, 4);
	matrix2->setEntry(1, 1, 5);
	matrix2->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHolePositiveNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 6);
	matrix2->setEntry(0, 1, 5);
	matrix2->setEntry(0, 2, 4);
	matrix2->setEntry(1, 0, 3);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 1);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleNegativeEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -1);
	matrix2->setEntry(0, 1, -2);
	matrix2->setEntry(0, 2, -3);
	matrix2->setEntry(1, 0, -4);
	matrix2->setEntry(1, 1, -5);
	matrix2->setEntry(1, 2, -6);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleNegativeNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -6);
	matrix2->setEntry(0, 1, -5);
	matrix2->setEntry(0, 2, -4);
	matrix2->setEntry(1, 0, -3);
	matrix2->setEntry(1, 1, -2);
	matrix2->setEntry(1, 2, -1);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleMixedEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, -3);
	matrix2->setEntry(1, 0, 4);
	matrix2->setEntry(1, 1, -5);
	matrix2->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualHoleMixedNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, -2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(1, 0, -4);
	matrix2->setEntry(1, 1, 5);
	matrix2->setEntry(1, 2, -6);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalPositiveEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 1.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, 3.5);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, 5.5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalPositiveNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, 3.5);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, 5.5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalNegativeEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -1.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(0, 2, -3.5);
	matrix2->setEntry(1, 0, -4.5);
	matrix2->setEntry(1, 1, -5.5);
	matrix2->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalNegativeNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(0, 2, -3.5);
	matrix2->setEntry(1, 0, -4.5);
	matrix2->setEntry(1, 1, -5.5);
	matrix2->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalMixedEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -1.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, -3.5);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, -5.5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualDecimalMixedNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -2.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, -3.5);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, -5.5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedPositiveEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, 5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedPositiveNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, 5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedNegativeEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -1);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(0, 2, -3);
	matrix2->setEntry(1, 0, -4.5);
	matrix2->setEntry(1, 1, -5);
	matrix2->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedNegativeNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -2);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(0, 2, -3);
	matrix2->setEntry(1, 0, -4.5);
	matrix2->setEntry(1, 1, -5);
	matrix2->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedMixedEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -1);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, -3);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, -5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualMixedMixedNotEqual)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, -2);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(0, 2, -3);
	matrix2->setEntry(1, 0, 4.5);
	matrix2->setEntry(1, 1, -5);
	matrix2->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

//------Different sizes-------

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual1x1Equal)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual1x1NotEqual)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}


TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x2Equal)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 4);
	matrix2->setEntry(1, 1, 5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x2NotEqual)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 4);
	matrix2->setEntry(1, 1, 5);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual3x3Equal)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 9);

	Matrix *matrix2 = new Matrix(3, 3);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(1, 0, 4);
	matrix2->setEntry(1, 1, 5);
	matrix2->setEntry(1, 2, 6);
	matrix2->setEntry(2, 0, 7);
	matrix2->setEntry(2, 1, 8);
	matrix2->setEntry(2, 2, 9);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual3x3NotEqual)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 9);

	Matrix *matrix2 = new Matrix(3, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(1, 0, 4);
	matrix2->setEntry(1, 1, 5);
	matrix2->setEntry(1, 2, 6);
	matrix2->setEntry(2, 0, 7);
	matrix2->setEntry(2, 1, 8);
	matrix2->setEntry(2, 2, 9);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x4Equal)
{
	Matrix *matrix1 = new Matrix(4, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 10);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12);
	matrix1->setEntry(3, 0, 13);
	matrix1->setEntry(3, 1, 14);
	matrix1->setEntry(3, 2, 15);
	matrix1->setEntry(3, 3, 16);

	Matrix *matrix2 = new Matrix(4, 4);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(0, 3, 4);
	matrix2->setEntry(1, 0, 5);
	matrix2->setEntry(1, 1, 6);
	matrix2->setEntry(1, 2, 7);
	matrix2->setEntry(1, 3, 8);
	matrix2->setEntry(2, 0, 9);
	matrix2->setEntry(2, 1, 10);
	matrix2->setEntry(2, 2, 11);
	matrix2->setEntry(2, 3, 12);
	matrix2->setEntry(3, 0, 13);
	matrix2->setEntry(3, 1, 14);
	matrix2->setEntry(3, 2, 15);
	matrix2->setEntry(3, 3, 16);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x4NotEqual)
{
	Matrix *matrix1 = new Matrix(4, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 10);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12);
	matrix1->setEntry(3, 0, 13);
	matrix1->setEntry(3, 1, 14);
	matrix1->setEntry(3, 2, 15);
	matrix1->setEntry(3, 3, 16);

	Matrix *matrix2 = new Matrix(4, 4);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(0, 3, 4);
	matrix2->setEntry(1, 0, 5);
	matrix2->setEntry(1, 1, 6);
	matrix2->setEntry(1, 2, 7);
	matrix2->setEntry(1, 3, 8);
	matrix2->setEntry(2, 0, 9);
	matrix2->setEntry(2, 1, 10);
	matrix2->setEntry(2, 2, 11);
	matrix2->setEntry(2, 3, 12);
	matrix2->setEntry(3, 0, 13);
	matrix2->setEntry(3, 1, 14);
	matrix2->setEntry(3, 2, 15);
	matrix2->setEntry(3, 3, 16);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual5x5Equal)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(0, 4, 5);
	matrix1->setEntry(1, 0, 6);
	matrix1->setEntry(1, 1, 7);
	matrix1->setEntry(1, 2, 8);
	matrix1->setEntry(1, 3, 9);
	matrix1->setEntry(1, 4, 10);
	matrix1->setEntry(2, 0, 11);
	matrix1->setEntry(2, 1, 12);
	matrix1->setEntry(2, 2, 13);
	matrix1->setEntry(2, 3, 14);
	matrix1->setEntry(2, 4, 15);
	matrix1->setEntry(3, 0, 16);
	matrix1->setEntry(3, 1, 17);
	matrix1->setEntry(3, 2, 18);
	matrix1->setEntry(3, 3, 19);
	matrix1->setEntry(3, 4, 20);
	matrix1->setEntry(4, 0, 21);
	matrix1->setEntry(4, 1, 22);
	matrix1->setEntry(4, 2, 23);
	matrix1->setEntry(4, 3, 24);
	matrix1->setEntry(4, 4, 25);

	Matrix *matrix2 = new Matrix(5, 5);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(0, 3, 4);
	matrix2->setEntry(0, 4, 5);
	matrix2->setEntry(1, 0, 6);
	matrix2->setEntry(1, 1, 7);
	matrix2->setEntry(1, 2, 8);
	matrix2->setEntry(1, 3, 9);
	matrix2->setEntry(1, 4, 10);
	matrix2->setEntry(2, 0, 11);
	matrix2->setEntry(2, 1, 12);
	matrix2->setEntry(2, 2, 13);
	matrix2->setEntry(2, 3, 14);
	matrix2->setEntry(2, 4, 15);
	matrix2->setEntry(3, 0, 16);
	matrix2->setEntry(3, 1, 17);
	matrix2->setEntry(3, 2, 18);
	matrix2->setEntry(3, 3, 19);
	matrix2->setEntry(3, 4, 20);
	matrix2->setEntry(4, 0, 21);
	matrix2->setEntry(4, 1, 22);
	matrix2->setEntry(4, 2, 23);
	matrix2->setEntry(4, 3, 24);
	matrix2->setEntry(4, 4, 25);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual5x5NotEqual)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(0, 4, 5);
	matrix1->setEntry(1, 0, 6);
	matrix1->setEntry(1, 1, 7);
	matrix1->setEntry(1, 2, 8);
	matrix1->setEntry(1, 3, 9);
	matrix1->setEntry(1, 4, 10);
	matrix1->setEntry(2, 0, 11);
	matrix1->setEntry(2, 1, 12);
	matrix1->setEntry(2, 2, 13);
	matrix1->setEntry(2, 3, 14);
	matrix1->setEntry(2, 4, 15);
	matrix1->setEntry(3, 0, 16);
	matrix1->setEntry(3, 1, 17);
	matrix1->setEntry(3, 2, 18);
	matrix1->setEntry(3, 3, 19);
	matrix1->setEntry(3, 4, 20);
	matrix1->setEntry(4, 0, 21);
	matrix1->setEntry(4, 1, 22);
	matrix1->setEntry(4, 2, 23);
	matrix1->setEntry(4, 3, 24);
	matrix1->setEntry(4, 4, 25);

	Matrix *matrix2 = new Matrix(5, 5);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(0, 3, 4);
	matrix2->setEntry(0, 4, 5);
	matrix2->setEntry(1, 0, 6);
	matrix2->setEntry(1, 1, 7);
	matrix2->setEntry(1, 2, 8);
	matrix2->setEntry(1, 3, 9);
	matrix2->setEntry(1, 4, 10);
	matrix2->setEntry(2, 0, 11);
	matrix2->setEntry(2, 1, 12);
	matrix2->setEntry(2, 2, 13);
	matrix2->setEntry(2, 3, 14);
	matrix2->setEntry(2, 4, 15);
	matrix2->setEntry(3, 0, 16);
	matrix2->setEntry(3, 1, 17);
	matrix2->setEntry(3, 2, 18);
	matrix2->setEntry(3, 3, 19);
	matrix2->setEntry(3, 4, 20);
	matrix2->setEntry(4, 0, 21);
	matrix2->setEntry(4, 1, 22);
	matrix2->setEntry(4, 2, 23);
	matrix2->setEntry(4, 3, 24);
	matrix2->setEntry(4, 4, 25);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x4Equal)
{
	Matrix *matrix1 = new Matrix(2, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);

	Matrix *matrix2 = new Matrix(2, 4);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(0, 3, 4);
	matrix2->setEntry(1, 0, 5);
	matrix2->setEntry(1, 1, 6);
	matrix2->setEntry(1, 2, 7);
	matrix2->setEntry(1, 3, 8);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual2x4NotEqual)
{
	Matrix *matrix1 = new Matrix(2, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);

	Matrix *matrix2 = new Matrix(2, 4);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 3);
	matrix2->setEntry(0, 3, 4);
	matrix2->setEntry(1, 0, 5);
	matrix2->setEntry(1, 1, 6);
	matrix2->setEntry(1, 2, 7);
	matrix2->setEntry(1, 3, 8);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x2Equal)
{
	Matrix *matrix1 = new Matrix(4, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 3);
	matrix1->setEntry(1, 1, 4);
	matrix1->setEntry(2, 0, 5);
	matrix1->setEntry(2, 1, 6);
	matrix1->setEntry(3, 0, 7);
	matrix1->setEntry(3, 1, 8);

	Matrix *matrix2 = new Matrix(4, 2);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 3);
	matrix2->setEntry(1, 1, 4);
	matrix2->setEntry(2, 0, 5);
	matrix2->setEntry(2, 1, 6);
	matrix2->setEntry(3, 0, 7);
	matrix2->setEntry(3, 1, 8);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_FALSE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_FALSE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqual4x2NotEqual)
{
	Matrix *matrix1 = new Matrix(4, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 3);
	matrix1->setEntry(1, 1, 4);
	matrix1->setEntry(2, 0, 5);
	matrix1->setEntry(2, 1, 6);
	matrix1->setEntry(3, 0, 7);
	matrix1->setEntry(3, 1, 8);

	Matrix *matrix2 = new Matrix(4, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 3);
	matrix2->setEntry(1, 1, 4);
	matrix2->setEntry(2, 0, 5);
	matrix2->setEntry(2, 1, 6);
	matrix2->setEntry(3, 0, 7);
	matrix2->setEntry(3, 1, 8);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

//------exceptions------

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException1)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(3, 2);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException2)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException3)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException4)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(4, 3);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}

TEST(VectorEngineDatastructurMatrixNotEqualOperator, NotEqualException5)
{
	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(4, 4);

	EXPECT_NO_THROW(*matrix1 != *matrix2);
	EXPECT_TRUE(*matrix1 != *matrix2);

	EXPECT_NO_THROW(*matrix2 != *matrix1);
	EXPECT_TRUE(*matrix2 != *matrix1);
}