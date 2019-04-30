#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOthersDivisionOperator, divisionOperatorValueHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.5, 1,   1.5, 
				2,   2.5, 3 };

	EXPECT_NO_THROW(*matrix / 2);
	EXPECT_TRUE(*result == *matrix / 2);
}

TEST(MatrixOthersDivisionOperator, divisionOperatorValueHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -0.5, -1,   -1.5,
				-2,   -2.5, -3 };

	EXPECT_NO_THROW(*matrix / -2);
	EXPECT_TRUE(*result == *matrix / -2);
}

TEST(MatrixOthersDivisionOperator, divisionOperatorValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.4, 0.8, 1.2, 
				1.6, 2.0, 2.4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(*matrix / 2.5);
	EXPECT_TRUE(TM.isEqual(*result, *matrix / 2.5, 0.001));
}

TEST(MatrixOthersDivisionOperator, divisionOperatorValueDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -0.4, -0.8, -1.2,
				-1.6, -2.0, -2.4 };

	TypeMatrix TM;
	EXPECT_NO_THROW(*matrix / -2.5);
	EXPECT_TRUE(TM.isEqual(*result, *matrix / -2.5, 0.001));
}

TEST(MatrixOthersDivisionOperator, divisionOperatorValueZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { INFINITY, INFINITY, INFINITY, 
				INFINITY, INFINITY, INFINITY };

	EXPECT_NO_THROW(*matrix / 0);
	EXPECT_TRUE(*result == *matrix / 0);
}

TEST(MatrixOthersDivisionOperator, divisionOperatorValueTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.25, 0.5,  0.75,
				1,    1.25, 1.5 };

	EXPECT_NO_THROW(*matrix / 2 / 2);
	EXPECT_TRUE(*result == *matrix / 2 / 2);
}

TEST(MatrixOthersDivisionOperator, divisionOperatorValueTwoTimes2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.25, 0.5,  0.75,
				1,    1.25, 1.5 };

	EXPECT_NO_THROW((*matrix / 2) / 2);
	EXPECT_TRUE(*result == (*matrix / 2) / 2);
}