#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixSpan, spanFullDependent)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				1, 2, 3, 4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(1, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanFullDependentDistributed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				2, 4, 6, 8, 
				4, 8, 12, 16 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(1, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanZeroes)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 0, 
				0, 0, 0, 0, 
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(0, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 4, 1, 
				3, 1, 4, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(2, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf2_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				3, 1, 4, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(2, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf3)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 3, 1, 
				5, 1, 2, 6 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(3, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf3x3Matrix)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 4, 
				5, 1, 2 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(3, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf3x5Matrix)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 0, 0, 0, 0, 
				0, 1, 0, 0, 0, 
				0, 0, 0, 1, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(3, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0, 
				0, 1, 0, 0, 0, 
				0, 0, 0, 1, 0, 
				0, 0, 0, 0, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(3, TM.span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.span(*matrix));
	EXPECT_EQ(1, TM.span(*matrix));
}



