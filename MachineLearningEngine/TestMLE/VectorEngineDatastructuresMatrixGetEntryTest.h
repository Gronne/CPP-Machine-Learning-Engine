#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(1, 1, 5);
	EXPECT_NO_THROW(matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryPositiveValueHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 5);
	EXPECT_EQ(5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, 5);
	EXPECT_EQ(5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, 5);
	EXPECT_EQ(5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, 5);
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, 5);
	EXPECT_EQ(5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryPositiveValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryPositiveValueDiffHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, -5);
	EXPECT_EQ(-5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, -5);
	EXPECT_EQ(-5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, -5);
	EXPECT_EQ(-5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, -5);
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, -5);
	EXPECT_EQ(-5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryPositiveValueDiffDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(1, 2));
}


TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryChangeValueDiffToSameValueHole)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryChangeValueDiffToSameValueDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryChangeValueDiffFromDecimalToHole)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2));
	EXPECT_EQ(2, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2));
	EXPECT_EQ(-2, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryChangeValueDiffFromDecimalToDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2.5));
	EXPECT_EQ(2.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 9.5));
	EXPECT_EQ(9.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2.5));
	EXPECT_EQ(-2.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -9.5));
	EXPECT_EQ(-9.5, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryChangeValueDiffFromHoleToHole)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2));
	EXPECT_EQ(2, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 9));
	EXPECT_EQ(9, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2));
	EXPECT_EQ(-2, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -9));
	EXPECT_EQ(-9, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetEntry, setGetEntryChangeValueDiffFromHoleToDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2.5));
	EXPECT_EQ(2.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2.5));
	EXPECT_EQ(-2.5, matrix->getEntry(1, 1));
}
