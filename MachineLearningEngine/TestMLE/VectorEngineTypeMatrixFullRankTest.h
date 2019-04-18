#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixFullRank,  fullRankFullDependent)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				1, 2, 3, 4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankFullDependentDistributed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				2, 4, 6, 8, 
				4, 8, 12, 16 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankZeroes)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 0, 
				0, 0, 0, 0, 
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 4, 1, 
				3, 1, 4, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf2_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				3, 1, 4, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf3)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 3, 1, 
				5, 1, 2, 6 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf3x5Matrix)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 0, 0, 0, 0, 
				0, 1, 0, 0, 0, 
				0, 0, 0, 1, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankOf1x1Matrix)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_TRUE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankOf2x2Matrix)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_TRUE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankOf3x3Matrix)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 3, 
				5, 1, 2 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_TRUE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankOf4x4Matrix)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 3, 1, 
				4, 3, 2, 1, 
				5, 3, 1, 8 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_TRUE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}