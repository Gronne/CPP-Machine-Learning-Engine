#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizePositiveHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizePositiveDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.1);
	matrix1->setEntry(0, 1, 2.2);
	matrix1->setEntry(0, 2, 3.3);
	matrix1->setEntry(1, 0, 4.4);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeNegativeHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeNegativeDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, -2.2);
	matrix1->setEntry(0, 2, -3.3);
	matrix1->setEntry(1, 0, -4.4);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6.6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, 2.2);
	matrix1->setEntry(0, 2, -3.3);
	matrix1->setEntry(1, 0, 4.4);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3.3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3.3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSameSizeMixedMixed)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3.3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargePositiveHole)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

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

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6, matrix2->getEntry(1, 1));
	EXPECT_EQ(7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 3));
	EXPECT_EQ(9, matrix2->getEntry(2, 0));
	EXPECT_EQ(10, matrix2->getEntry(2, 1));
	EXPECT_EQ(11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargePositiveDecimal)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(0, 3, 4.5);
	matrix1->setEntry(1, 0, 5.5);
	matrix1->setEntry(1, 1, 6.5);
	matrix1->setEntry(1, 2, 7.5);
	matrix1->setEntry(1, 3, 8.5);
	matrix1->setEntry(2, 0, 9.5);
	matrix1->setEntry(2, 1, 10.5);
	matrix1->setEntry(2, 2, 11.5);
	matrix1->setEntry(2, 3, 12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(7.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11.5, matrix2->getEntry(2, 2));
	EXPECT_EQ(12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeNegativeHole)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(0, 3, -4);
	matrix1->setEntry(1, 0, -5);
	matrix1->setEntry(1, 1, -6);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, -8);
	matrix1->setEntry(2, 0, -9);
	matrix1->setEntry(2, 1, -10);
	matrix1->setEntry(2, 2, -11);
	matrix1->setEntry(2, 3, -12);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeNegativeDecimal)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, -5.5);
	matrix1->setEntry(1, 1, -6.5);
	matrix1->setEntry(1, 2, -7.5);
	matrix1->setEntry(1, 3, -8.5);
	matrix1->setEntry(2, 0, -9.5);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, -11.5);
	matrix1->setEntry(2, 3, -12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11.5, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedHole)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, -5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, -9);
	matrix1->setEntry(2, 1, 10);
	matrix1->setEntry(2, 2, -11);
	matrix1->setEntry(2, 3, 12);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9, matrix2->getEntry(2, 0));
	EXPECT_EQ(10, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedDecimal)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, 5.5);
	matrix1->setEntry(1, 1, -6.5);
	matrix1->setEntry(1, 2, 7.5);
	matrix1->setEntry(1, 3, -8.5);
	matrix1->setEntry(2, 0, 9.5);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, 11.5);
	matrix1->setEntry(2, 3, -12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(7.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11.5, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedPositive)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4.5);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6.5);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8.5);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 10.5);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9, matrix2->getEntry(2, 0));
	EXPECT_EQ(10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedNegative)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, -5);
	matrix1->setEntry(1, 1, -6.5);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, -8.5);
	matrix1->setEntry(2, 0, -9);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, -11);
	matrix1->setEntry(2, 3, -12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixSmallToLargeMixedMixed)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6.5);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, 8.5);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallPositiveHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallPositiveDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallNegativeHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallNegativeDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedPositve)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixLargeToSmallMixedMixed)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetMatrix, setMatrixExceptionSameMatrix)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);
	EXPECT_THROW(matrix1->setMatrix(matrix1), std::exception);
}