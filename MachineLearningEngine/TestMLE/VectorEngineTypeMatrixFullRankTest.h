#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixFullRank,  fullRankFullDependent)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(1, 3, 4);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);
	matrix->setEntry(2, 3, 4);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankFullDependentDistributed)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 4);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(1, 3, 8);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 12);
	matrix->setEntry(2, 3, 16);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankZeroes)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 0);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 0);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(1, 3, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 0);
	matrix->setEntry(2, 3, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf2)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 4);
	matrix->setEntry(1, 3, 1);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 4);
	matrix->setEntry(2, 3, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf2_2)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(1, 3, 4);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 4);
	matrix->setEntry(2, 3, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf3)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(1, 3, 1);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 2);
	matrix->setEntry(2, 3, 6);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_FALSE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank,  fullRankOf3x5Matrix)
{
	Matrix *matrix = new Matrix(3, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(0, 4, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(1, 3, 0);
	matrix->setEntry(1, 4, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 0);
	matrix->setEntry(2, 3, 1);
	matrix->setEntry(2, 4, 0);

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
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_TRUE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankOf3x3Matrix)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 2);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.fullRank(*matrix));
	EXPECT_TRUE(TM.fullRank(*matrix));
}

TEST(VectorEngineTypeMatrixFullRank, fullRankOf4x4Matrix)
{
	Matrix *matrix = new Matrix(4, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(1, 3, 1);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 3);
	matrix->setEntry(2, 2, 2);
	matrix->setEntry(2, 3, 1);
	matrix->setEntry(3, 0, 5);
	matrix->setEntry(3, 1, 3);
	matrix->setEntry(3, 2, 1);
	matrix->setEntry(3, 3, 8);

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