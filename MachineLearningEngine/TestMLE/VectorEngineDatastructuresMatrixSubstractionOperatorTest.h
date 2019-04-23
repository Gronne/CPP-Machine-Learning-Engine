#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6,
				-8, -10, -12 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6,
				8, 10, 12 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2,  -4,   6,
				-8,  10, -12 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix * -1);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -3,  -5,  -7,
				-9, -11, -13 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3,  5,  7,
				9, 11, 13 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = {  3,  -5,   7,
				-9,  11, -13 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };
	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix = (*matrix * -1) - *matrix * -1);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixExceptionDiffCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *buf = new Matrix(2, 4);

	EXPECT_THROW(*matrix - *buf, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixExceptionDiffCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *buf = new Matrix(2, 2);

	EXPECT_THROW(*matrix - *buf, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixExceptionDiffRow1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *buf = new Matrix(3, 3);

	EXPECT_THROW(*matrix - *buf, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixExceptionDiffRow2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *buf = new Matrix(1, 3);

	EXPECT_THROW(*matrix - *buf, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixExceptionDiffRowCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *buf = new Matrix(3, 4);

	EXPECT_THROW(*matrix - *buf, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorMatrixExceptionDiffRowCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *buf = new Matrix(1, 2);

	EXPECT_THROW(*matrix - *buf, std::exception);
}

//-----------------------------------------------------

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDoubleHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, 0, 1,
				 2, 3, 4 };

	EXPECT_NO_THROW(*matrix = *matrix - 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDoubleHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3, 4, 5,
				6, 7, 8 };

	EXPECT_NO_THROW(*matrix = *matrix - -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDoubleHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix = *matrix - 0);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDoubleDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -0.5, 0.5,
				 1.5,  2.5, 3.5 };

	EXPECT_NO_THROW(*matrix = *matrix - 2.5);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDoubleDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3.5, 4.5, 5.5,
				6.5, 7.5, 8.5 };

	EXPECT_NO_THROW(*matrix = *matrix - -2.5);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDoubleDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix = *matrix - 0.0);
	EXPECT_TRUE(*result == *matrix);
}