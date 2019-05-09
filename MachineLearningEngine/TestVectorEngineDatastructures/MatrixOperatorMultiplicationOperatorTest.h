#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueHolePositive)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueHoleNegative)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueDecimalPositive)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueDecimalNegative)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueZero)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueTwoTimes)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorValueTwoTimes2)
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

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 14, 32,
				32, 77 };

	EXPECT_NO_THROW(*matrix * matrix->transpose(1));
	EXPECT_TRUE(*result == *matrix * matrix->transpose(1));


	result->setMatrixSize(3, 3);
	*result = { 17, 22, 27,
				22, 29, 36,
				27, 36, 45 };

	EXPECT_NO_THROW(matrix->transpose(1) * *matrix);
	EXPECT_TRUE(*result == matrix->transpose(1) * *matrix);


	result->setMatrixSize(2, 3);
	*result = { 142, 188, 234,
				340, 449, 558 };

	EXPECT_NO_THROW(*matrix * (matrix->transpose(1) * *matrix));
	EXPECT_TRUE(*result == *matrix * (matrix->transpose(1) * *matrix));
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 14, 32,
				32, 77 };

	EXPECT_NO_THROW(*matrix * matrix->transpose(1));
	EXPECT_TRUE(*result == *matrix * matrix->transpose(1));


	result->setMatrixSize(3, 3);
	*result = { 17, 22, 27,
				22, 29, 36,
				27, 36, 45 };

	EXPECT_NO_THROW(matrix->transpose(1) * *matrix);
	EXPECT_TRUE(*result == matrix->transpose(1) * *matrix);


	result->setMatrixSize(2, 3);
	*result = { -142, -188, -234,
				-340, -449, -558 };

	EXPECT_NO_THROW(*matrix * (matrix->transpose(1) * *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, *matrix * (matrix->transpose(1) * *matrix), 0.0001));
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 2);
	*result = { 20.75, 43.25,
				43.25, 92.75 };

	EXPECT_NO_THROW(*matrix * matrix->transpose(1));
	EXPECT_TRUE(*result == *matrix * matrix->transpose(1));


	result->setMatrixSize(3, 3);
	*result = { 22.5, 28.5, 34.5,
				28.5, 36.5, 44.5,
				34.5, 44.5, 54.5 };

	EXPECT_NO_THROW(matrix->transpose(1) * *matrix);
	EXPECT_TRUE(*result == matrix->transpose(1) * *matrix);


	result->setMatrixSize(2, 3);
	*result = { 225.75, 289.75, 353.75,
				482.25, 618.25, 754.25 };

	EXPECT_NO_THROW(*matrix * (matrix->transpose(1) * *matrix));
	EXPECT_TRUE(*result == *matrix * (matrix->transpose(1) * *matrix));
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 2);
	*result = { 20.75, 43.25,
				43.25, 92.75 };

	EXPECT_NO_THROW(*matrix * matrix->transpose(1));
	EXPECT_TRUE(*result == *matrix * matrix->transpose(1));


	result->setMatrixSize(3, 3);
	*result = { 22.5, 28.5, 34.5,
				28.5, 36.5, 44.5,
				34.5, 44.5, 54.5 };

	EXPECT_NO_THROW(matrix->transpose(1) * *matrix);
	EXPECT_TRUE(*result == matrix->transpose(1) * *matrix);


	result->setMatrixSize(2, 3);
	*result = { -225.75, -289.75, -353.75,
				-482.25, -618.25, -754.25 };

	EXPECT_NO_THROW(*matrix * (matrix->transpose(1) * *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, *matrix * (matrix->transpose(1) * *matrix), 0.0001));
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 142, 188, 234,
				340, 449, 558 };

	EXPECT_NO_THROW(*matrix * matrix->transpose(1) * *matrix);
	EXPECT_TRUE(*result == *matrix * matrix->transpose(1) * *matrix);
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixTwoTimes2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 142, 188, 234,
				340, 449, 558 };

	EXPECT_NO_THROW((*matrix * matrix->transpose(1)) * *matrix);
	EXPECT_TRUE(*result == (*matrix * matrix->transpose(1)) * *matrix);
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixExceptionMissMatch)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 3);

	EXPECT_THROW(*matrix * *result, std::exception);

	matrix->transpose();
	result->transpose();
	EXPECT_THROW(*matrix * *result, std::exception);
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixExceptionLarge)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 4);

	EXPECT_THROW(*matrix * *result, std::exception);
}

TEST(MatrixOperatorMultiplicationOperator, multiplicationOperatorMatrixExceptionSmall)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(2, 2);

	EXPECT_THROW(*matrix * *result, std::exception);
}