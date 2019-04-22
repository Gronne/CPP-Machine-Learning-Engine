#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6, 
				8, 10, 12 };

	EXPECT_NO_THROW(*matrix * 2);
	EXPECT_TRUE(*result == *matrix * 2);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6,
				-8, -10, -12 };

	EXPECT_NO_THROW(*matrix * -2);
	EXPECT_TRUE(*result == *matrix * -2);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2.5,  5,    7.5,
				10,   12.5, 15 };

	EXPECT_NO_THROW(*matrix * 2.5);
	EXPECT_TRUE(*result == *matrix * 2.5);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2.5,  -5,    -7.5,
				-10,   -12.5, -15 };

	EXPECT_NO_THROW(*matrix * -2.5);
	EXPECT_TRUE(*result == *matrix * -2.5);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix * 0);
	EXPECT_TRUE(*result == *matrix * 0);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  4,  8, 12,
				16, 20, 24 };

	EXPECT_NO_THROW(*matrix * 2 * 2);
	EXPECT_TRUE(*result == *matrix * 2 * 2);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueTwoTimes2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  4,  8, 12, 
				16, 20, 24 };

	EXPECT_NO_THROW((*matrix * 2) * 2);
	EXPECT_TRUE(*result == (*matrix * 2) * 2);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix * *result);
	EXPECT_EQ(14, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(32, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(32, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(77, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *result * *matrix);
	EXPECT_EQ(17, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(22, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(27, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(22, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(29, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(36, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(27, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(36, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(45, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix * *resultMatrix);
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix * *result);
	EXPECT_EQ(14, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(32, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(32, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(77, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *result * *matrix);
	EXPECT_EQ(17, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(22, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(27, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(22, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(29, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(36, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(27, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(36, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(45, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix * *resultMatrix);
	EXPECT_EQ(-142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix * *result);
	EXPECT_EQ(20.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(43.25, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(43.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(92.75, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *result * *matrix);
	EXPECT_EQ(22.5, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(28.5, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(34.5, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(28.5, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(36.5, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(44.5, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(34.5, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(44.5, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(54.5, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix * *resultMatrix);
	EXPECT_EQ(225.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(289.75, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(353.75, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(482.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(618.25, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(754.25, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix * *result);
	EXPECT_EQ(20.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(43.25, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(43.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(92.75, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *result * *matrix);
	EXPECT_EQ(22.5, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(28.5, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(34.5, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(28.5, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(36.5, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(44.5, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(34.5, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(44.5, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(54.5, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix * *resultMatrix);
	EXPECT_EQ(-225.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-289.75, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-353.75, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-482.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-618.25, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-754.25, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix * *result * *matrix);
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixTwoTimes2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = (*matrix * *result) * *matrix);
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixExceptionMissMatch)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 3);

	EXPECT_THROW(*matrix * *result, std::exception);

	matrix->transpose();
	result->transpose();
	EXPECT_THROW(*matrix * *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixExceptionLarge)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 4);

	EXPECT_THROW(*matrix * *result, std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixExceptionSmall)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(2, 2);

	EXPECT_THROW(*matrix * *result, std::exception);
}