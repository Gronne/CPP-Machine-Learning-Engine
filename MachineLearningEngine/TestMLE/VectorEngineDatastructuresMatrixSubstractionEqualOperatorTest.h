#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = { -2, -4, -6, 
				-8, -10, -12 };

	EXPECT_NO_THROW(*buf -= *matrix);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6,
				8, 10, 12 };

	EXPECT_NO_THROW(*buf -= *matrix);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = {  2, -4,    6,
				-8,  10, -12 };

	EXPECT_NO_THROW(*buf -= *matrix);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*buf -= *matrix * -1);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = { -3, -5, -7,
				-9, -11, -13 };

	EXPECT_NO_THROW(*buf -= *matrix);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = { 3, 5,  7,
				9, 11, 13 };

	EXPECT_NO_THROW(*buf -= *matrix);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = {  3, -5,    7,
				-9,  11, -13 };

	EXPECT_NO_THROW(*buf -= *matrix);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *buf = new Matrix();
	*buf = *matrix * -1;

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*buf -= *matrix * -1);
	EXPECT_TRUE(*result == *buf);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixExceptionDiffCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 4);

	EXPECT_THROW(*matrix -= *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixExceptionDiffCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 2);

	EXPECT_THROW(*matrix -= *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixExceptionDiffRow1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 3);

	EXPECT_THROW(*matrix -= *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixExceptionDiffRow2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 3);

	EXPECT_THROW(*matrix -= *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixExceptionDiffRowCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 4);

	EXPECT_THROW(*matrix -= *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorMatrixExceptionDiffRowCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 2);

	EXPECT_THROW(*matrix -= *result, std::exception);
}

//-----------------------------------------------------

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorDoubleHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, 0, 1, 
				 2, 3, 4 };

	EXPECT_NO_THROW(*matrix -= 2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorDoubleHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3, 4, 5,
				6, 7, 8 };

	EXPECT_NO_THROW(*matrix -= -2);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorDoubleHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix -= 0);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorDoubleDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -0.5, 0.5,
				 1.5,  2.5, 3.5 };

	EXPECT_NO_THROW(*matrix -= 2.5);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorDoubleDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3.5, 4.5, 5.5, 
				6.5, 7.5, 8.5 };

	EXPECT_NO_THROW(*matrix -= -2.5);
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSubstractionEqualOperator, substractionOperatorDoubleDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				4, 5, 6 };

	EXPECT_NO_THROW(*matrix -= 0.0);
	EXPECT_TRUE(*result == *matrix);
}