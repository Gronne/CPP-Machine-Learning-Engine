#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanNotSpan)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 4, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(3, 1);
	*spanMatrix = { 1, 3, 5 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanException1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(4, 1);
	*spanMatrix = { 1, 3, 5, 5 };

	TypeMatrix TM;
	EXPECT_THROW(TM.checkSpan(*matrix, *spanMatrix), std::exception);
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanException2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(2, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);

	TypeMatrix TM;
	EXPECT_THROW(TM.checkSpan(*matrix, *spanMatrix), std::exception);
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpanRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(3, 1);
	*spanMatrix = { 1, 3, 5 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpanCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(1, 3);
	*spanMatrix = { 1, 3, 5 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpanMatrixRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(2, 3);
	*spanMatrix = { 1, 3, 5, 
					1, 3, 5 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpanMatrixCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(3, 2);
	*spanMatrix = { 1, 3, 
					5, 1, 
					3, 5 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpan1DimensionTrue)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				2, 4 };

	Matrix *spanMatrix = new Matrix(2, 2);
	*spanMatrix = { 3, 6, 
					4, 8 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpan1DimensionFalse)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				2, 4 };

	Matrix *spanMatrix = new Matrix(2, 2);
	*spanMatrix = { 3, 6, 
					3, 8 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanSpecialCase) 
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *spanMatrix = new Matrix(3, 1);
	*spanMatrix = { 1, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TM.checkSpan(*matrix, *spanMatrix));
}