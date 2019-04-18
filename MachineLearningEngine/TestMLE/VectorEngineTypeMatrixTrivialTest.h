#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixTrivial, trivialFalse1)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 10, 11, 12 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.trivial(*matrix));
	EXPECT_FALSE(TM.trivial(*matrix));
}

TEST(VectorEngineTypeMatrixTrivial, trivialFalse2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 0, 
				5, 6, 7, 0, 
				9, 10, 11, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.trivial(*matrix));
	EXPECT_FALSE(TM.trivial(*matrix));
}

TEST(VectorEngineTypeMatrixTrivial, trivialFalse3)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1,  2,  3, 0, 0, 
				5,  6,  7, 0, 0, 
				9, 10, 11, 1, 4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.trivial(*matrix));
	EXPECT_FALSE(TM.trivial(*matrix));
}

TEST(VectorEngineTypeMatrixTrivial, trivialTrue1)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 0, 
				4, 5, 6, 0, 
				3, 4, 1, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.trivial(*matrix));
	EXPECT_TRUE(TM.trivial(*matrix));
}

TEST(VectorEngineTypeMatrixTrivial, trivialTrue2)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 0,
				4, 5, 0, 
				7, 8, 0, 
				3, 2, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_TRUE(TM.homogeneous(*matrix));
}

TEST(VectorEngineTypeMatrixTrivial, trivialSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.trivial(*matrix));
	EXPECT_FALSE(TM.trivial(*matrix));
}