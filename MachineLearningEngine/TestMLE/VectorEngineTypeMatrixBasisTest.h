#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixBasis, basisTrue1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 3, 
				5, 2, 4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_TRUE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisTrue2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 0, 
				0, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_TRUE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 3, 
				1, 2, 3 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				1, 2, 3, 
				4, 2, 6 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse3)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 3, 
				3, 1, 3, 1, 
				4, 2, 6, 3 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 3, 
				3, 1, 3, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse5)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 5, 2, 
				7, 8, 
				3, 7, 
				4, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}


TEST(VectorEngineTypeMatrixBasis, basisSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}