#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueHolePositive)
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

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueHoleNegative)
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

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.4, 0.8, 1.2, 
				1.6, 2.0, 2.4 };

	EXPECT_NO_THROW(*matrix / 2.5);
	EXPECT_DOUBLE_EQ(result->getEntry(0, 0), (*matrix / 2.5).getEntry(0, 0));
	EXPECT_DOUBLE_EQ(result->getEntry(0, 1), (*matrix / 2.5).getEntry(0, 1));
	EXPECT_DOUBLE_EQ(result->getEntry(0, 2), (*matrix / 2.5).getEntry(0, 2));
	EXPECT_DOUBLE_EQ(result->getEntry(1, 0), (*matrix / 2.5).getEntry(1, 0));
	EXPECT_DOUBLE_EQ(result->getEntry(1, 1), (*matrix / 2.5).getEntry(1, 1));
	EXPECT_DOUBLE_EQ(result->getEntry(1, 2), (*matrix / 2.5).getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -0.4, -0.8, -1.2,
				-1.6, -2.0, -2.4 };

	EXPECT_NO_THROW(*matrix / -2.5);
	EXPECT_DOUBLE_EQ(result->getEntry(0, 0), (*matrix / -2.5).getEntry(0, 0));
	EXPECT_DOUBLE_EQ(result->getEntry(0, 1), (*matrix / -2.5).getEntry(0, 1));
	EXPECT_DOUBLE_EQ(result->getEntry(0, 2), (*matrix / -2.5).getEntry(0, 2));
	EXPECT_DOUBLE_EQ(result->getEntry(1, 0), (*matrix / -2.5).getEntry(1, 0));
	EXPECT_DOUBLE_EQ(result->getEntry(1, 1), (*matrix / -2.5).getEntry(1, 1));
	EXPECT_DOUBLE_EQ(result->getEntry(1, 2), (*matrix / -2.5).getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueZero)
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

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueTwoTimes)
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

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueTwoTimes2)
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