#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotRowsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GM.pivotRowsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotRowsNumber(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GM.pivotRowsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumber3P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(1, GM.pivotRowsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(2, GM.pivotRowsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumberZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0,
				0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(1, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(2, GM.pivotRowsNumber(*matrix).getEntry(0, 1));
	EXPECT_EQ(3, GM.pivotRowsNumber(*matrix).getEntry(0, 2));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumberSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				0, 0, 6,
				0, 0, 6 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
	EXPECT_EQ(2, GM.pivotRowsNumber(*matrix).getEntry(0, 1));
}

TEST(VectorEngineGetMatrixPivotRowsNumber, pivotRowsNumberSpecialCase2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.pivotRowsNumber(*matrix));
	EXPECT_EQ(0, GM.pivotRowsNumber(*matrix).getEntry(0, 0));
}
