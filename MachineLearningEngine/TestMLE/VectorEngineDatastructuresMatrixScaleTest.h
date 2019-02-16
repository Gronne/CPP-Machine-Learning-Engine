#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixScale, scalePositiveHole)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->scale(2));
	EXPECT_EQ(2, matrix->getEntry(0, 0));
	EXPECT_EQ(4, matrix->getEntry(0, 1));
	EXPECT_EQ(6, matrix->getEntry(0, 2));
	EXPECT_EQ(8, matrix->getEntry(1, 0));
	EXPECT_EQ(10, matrix->getEntry(1, 1));
	EXPECT_EQ(12, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixScale, scalePositiveDecimal)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->scale(2.5));
	EXPECT_EQ(2.5, matrix->getEntry(0, 0));
	EXPECT_EQ(5, matrix->getEntry(0, 1));
	EXPECT_EQ(7.5, matrix->getEntry(0, 2));
	EXPECT_EQ(10, matrix->getEntry(1, 0));
	EXPECT_EQ(12.5, matrix->getEntry(1, 1));
	EXPECT_EQ(15, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixScale, scaleNegativeHole)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->scale(-2));
	EXPECT_EQ(-2, matrix->getEntry(0, 0));
	EXPECT_EQ(-4, matrix->getEntry(0, 1));
	EXPECT_EQ(-6, matrix->getEntry(0, 2));
	EXPECT_EQ(-8, matrix->getEntry(1, 0));
	EXPECT_EQ(-10, matrix->getEntry(1, 1));
	EXPECT_EQ(-12, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixScale, scaleNegativeDecimal)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->scale(-2.5));
	EXPECT_EQ(-2.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-5, matrix->getEntry(0, 1));
	EXPECT_EQ(-7.5, matrix->getEntry(0, 2));
	EXPECT_EQ(-10, matrix->getEntry(1, 0));
	EXPECT_EQ(-12.5, matrix->getEntry(1, 1));
	EXPECT_EQ(-15, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixScale, scaleZero)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->scale(0));
	EXPECT_EQ(0, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(0, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
}