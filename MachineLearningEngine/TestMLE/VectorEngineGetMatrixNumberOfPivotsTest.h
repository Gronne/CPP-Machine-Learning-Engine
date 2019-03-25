#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixNumberOfPivots, NOP0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(0, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOP1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(1, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOP2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(2, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOP0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(0, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOP1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(1, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOP2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(2, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOP3P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(3, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOPZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0, 
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0, 
				0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(3, GM.numberOfPivots(*matrix));
}

TEST(VectorEngineGetMatrixNumberOfPivots, NOPSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				0, 0, 6, 
				0, 0, 6 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.numberOfPivots(*matrix));
	EXPECT_EQ(2, GM.numberOfPivots(*matrix));
}