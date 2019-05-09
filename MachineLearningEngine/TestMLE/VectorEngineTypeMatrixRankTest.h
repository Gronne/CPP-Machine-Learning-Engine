#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixRank, rankFullDependent)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				1, 2, 3, 4 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(1, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankFullDependentDistributed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2,  3,  4, 
				2, 4,  6,  8, 
				4, 8, 12, 16 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(1, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankZeroes)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 0, 
				0, 0, 0, 0, 
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(0, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankOf2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 4, 1, 
				3, 1, 4, 1 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(2, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankOf2_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				3, 1, 4, 1 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(2, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankOf3)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 3, 1, 
				5, 1, 2, 6 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(3, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankOf3x3Matrix)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 3, 
				5, 1, 2 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(3, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankOf3x5Matrix)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(3, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0, 
				0, 1, 0, 0, 0, 
				0, 0, 0, 1, 0, 
				0, 0, 0, 0, 1 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(3, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				0, 0, 6, 
				0, 0, 6 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(2, TypeMatrix::rank(*matrix));
}

TEST(VectorEngineTypeMatrixRank, rankSpecialCase2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::rank(*matrix));
	EXPECT_EQ(1, TypeMatrix::rank(*matrix));
}

