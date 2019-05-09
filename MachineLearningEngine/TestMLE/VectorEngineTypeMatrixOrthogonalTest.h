#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 3, 
				5, 2, 4 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 0, 
				0, 2 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 3, 
				1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse4)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				1, 2, 3, 
				4, 2, 6 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse5)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 3, 
				3, 1, 3, 1, 
				4, 2, 6, 3 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse6)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 3, 
				3, 1, 3, 1 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse7)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 5, 2, 
				7, 8, 
				3, 7, 
				4, 1 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse8)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0, 
				0, 1, 0, 
				0, 1, 0 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse9)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 2);

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0, 
				0, 1, 0, 
				0, 0, 1 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_TRUE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 1, 0, 
				1, 0, 0, 
				0, 0, 1 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_TRUE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue3)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 0, 
				0, 1 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_TRUE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue4)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_TRUE(TypeMatrix::orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::orthogonal(*matrix));
	EXPECT_FALSE(TypeMatrix::orthogonal(*matrix));
}