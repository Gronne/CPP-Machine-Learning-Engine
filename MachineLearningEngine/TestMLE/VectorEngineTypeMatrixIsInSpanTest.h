#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanNotSpan)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 4, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(3, 1);
	*spanMatrix = { 1, 3, 5 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanException1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				2, 3, 6,
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(4, 1);
	*spanMatrix = { 1, 3, 5, 5 };

	EXPECT_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix), std::exception);
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanException2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				2, 3, 6,
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(2, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);

	EXPECT_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix), std::exception);
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpanRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				2, 3, 6,
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(3, 1);
	*spanMatrix = { 1, 3, 5 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpanCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(1, 3);
	*spanMatrix = { 1, 3, 5 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpanMatrixRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 3, 6, 
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(2, 3);
	*spanMatrix = { 1, 3, 5, 
					1, 3, 5 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpanMatrixCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				2, 3, 6,
				4, 8, 1 };

	Matrix *spanMatrix = new Matrix(3, 2);
	*spanMatrix = { 1, 1,
					3, 3,
					5, 5 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpan1DimensionTrue)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				2, 4 };

	Matrix *spanMatrix = new Matrix(2, 2);
	*spanMatrix = { 3, 6,
					4, 8 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpan1DimensionFalse)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				2, 4 };

	Matrix *spanMatrix = new Matrix(2, 2);
	*spanMatrix = { 3, 6,
					3, 8 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpanSpecialCaseRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	Matrix *spanMatrix = new Matrix(3, 1);
	*spanMatrix = { 1, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixIsInSpan, isInSpanSpanSpecialCaseCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *spanMatrix = new Matrix(1, 3);
	*spanMatrix = { 1, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::isInSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TypeMatrix::isInSpan(*matrix, *spanMatrix));
}