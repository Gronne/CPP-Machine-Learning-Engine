#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotColumnsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GM.pivotColumnsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotColumnsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GM.pivotColumnsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumber3P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GM.pivotColumnsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(2, GM.pivotColumnsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumberZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0,
				0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(1, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(3, GM.pivotColumnsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(4, GM.pivotColumnsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotColumnsNumber, pivotColumnsNumberSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				0, 0, 6,
				0, 0, 6 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotColumnsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotColumnsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(2, GM.pivotColumnsNumber(*matrix).getEntry(0, 1));
}