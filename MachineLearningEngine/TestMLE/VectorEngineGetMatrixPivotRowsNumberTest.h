#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	EXPECT_THROW(GetMatrix::pivotRowsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	EXPECT_THROW(GetMatrix::pivotRowsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber3P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(2, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumberZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0,
				0, 0, 0, 0, 1 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(1, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(2, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(3, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumberSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				0, 0, 6,
				0, 0, 6 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(2, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumberSpecialCase2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(GetMatrix::pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotRowsNumber(*matrix).getEntry(0, 0));
}
