#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	EXPECT_THROW(GetMatrix::pivotColumnsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	EXPECT_THROW(GetMatrix::pivotColumnsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber3P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(2, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumberZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0,
				0, 0, 0, 0, 1 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(1, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(3, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(4, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumberSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				0, 0, 6,
				0, 0, 6 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(2, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumberSpecialCase2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(GetMatrix::pivotColumnsNumber(*matrix));
	EXPECT_EQ(3, GetMatrix::pivotColumnsNumber(*matrix).getEntry(0, 0));
}