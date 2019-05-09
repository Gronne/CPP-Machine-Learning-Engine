#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixSpan, spanFullDependent)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				1, 2, 3, 4 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(1, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanFullDependentDistributed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				2, 4, 6, 8, 
				4, 8, 12, 16 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(1, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanZeroes)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 0, 
				0, 0, 0, 0, 
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(0, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 4, 1, 
				3, 1, 4, 1 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(2, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf2_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				1, 2, 3, 4, 
				3, 1, 4, 1 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(2, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf3)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 3, 1, 
				5, 1, 2, 6 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(3, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf3x3Matrix)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 4, 
				5, 1, 2 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(3, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanOf3x5Matrix)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 0, 0, 0, 0, 
				0, 1, 0, 0, 0, 
				0, 0, 0, 1, 0 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(3, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0, 
				0, 1, 0, 0, 0, 
				0, 0, 0, 1, 0, 
				0, 0, 0, 0, 1 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(3, TypeMatrix::span(*matrix));
}

TEST(VectorEngineTypeMatrixSpan, spanSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::span(*matrix));
	EXPECT_EQ(1, TypeMatrix::span(*matrix));
}



