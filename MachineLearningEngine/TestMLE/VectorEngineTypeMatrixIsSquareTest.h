#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixIsSquare, IsSquareTrue1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_TRUE(TM.isSquare(*matrix));
}

TEST(VectorEngineTypeMatrixIsSquare, IsSquareTrue2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_TRUE(TM.isSquare(*matrix));
}

TEST(VectorEngineTypeMatrixIsSquare, IsSquareTrue3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				3, 4, 5,
				6, 7, 8 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_TRUE(TM.isSquare(*matrix));
}

TEST(VectorEngineTypeMatrixIsSquare, IsSquareTrue4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = {  1,  2,  3,  4,
				 3,  4,  5,  6,
				 6,  7,  8,  9,
				10, 11, 12, 13 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_TRUE(TM.isSquare(*matrix));
}

//------FALSE------


TEST(VectorEngineTypeMatrixIsSquare, IsSquareFalse1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1,  2,  3 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_FALSE(TM.isSquare(*matrix));
}

TEST(VectorEngineTypeMatrixIsSquare, IsSquareFalse3x1)
{
	Matrix *matrix = new Matrix(3, 1);
	*matrix = { 1,  2,  3 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_FALSE(TM.isSquare(*matrix));
}

TEST(VectorEngineTypeMatrixIsSquare, IsSquareFalse2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,  2,  3,
				4,  5,  6 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_FALSE(TM.isSquare(*matrix));
}

TEST(VectorEngineTypeMatrixIsSquare, IsSquareFalse3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1,  2,
				4,  5,
				7,  8 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isSquare(*matrix));
	EXPECT_FALSE(TM.isSquare(*matrix));
}