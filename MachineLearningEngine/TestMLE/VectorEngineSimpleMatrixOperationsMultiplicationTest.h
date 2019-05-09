#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6,
				8, 10, 12 };

	EXPECT_NO_THROW(SimpleMatrixOperations::multiplication(*matrix, 2));
	EXPECT_TRUE(*result == SimpleMatrixOperations::multiplication(*matrix, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6,
				-8, -10, -12 };

	EXPECT_NO_THROW(SimpleMatrixOperations::multiplication(*matrix, -2));
	EXPECT_TRUE(*result == SimpleMatrixOperations::multiplication(*matrix, -2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2.5,  5,    7.5,
				10,   12.5, 15   };

	EXPECT_NO_THROW(SimpleMatrixOperations::multiplication(*matrix, 2.5));
	EXPECT_TRUE(*result == SimpleMatrixOperations::multiplication(*matrix, 2.5));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  -2.5,  -5,    -7.5,
				-10,   -12.5, -15   };

	EXPECT_NO_THROW(SimpleMatrixOperations::multiplication(*matrix, -2.5));
	EXPECT_TRUE(*result == SimpleMatrixOperations::multiplication(*matrix, -2.5));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(SimpleMatrixOperations::multiplication(*matrix, 0));
	EXPECT_TRUE(*result == SimpleMatrixOperations::multiplication(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  4,  8, 12, 
				16, 20, 24 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(SMO.multiplication(*matrix, 2), 2));
	EXPECT_TRUE(*result == SMO.multiplication(SMO.multiplication(*matrix, 2), 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };


	Matrix *result = new Matrix(2, 2);
	*result = { 14, 32,
				32, 77 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1)));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1)), 0.0001));


	result->setMatrixSize(3, 3);
	*result = { 17, 22, 27,
				22, 29, 36,
				27, 36, 45 };

	EXPECT_NO_THROW(SMO.multiplication(matrix->transpose(1), *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(matrix->transpose(1), *matrix), 0.0001));


	result->setMatrixSize(2, 3);
	*result = { 142, 188, 234,
				340, 449, 558 };

	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1) * *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1) * *matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 14, 32,
				32, 77 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1)));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1)), 0.0001));


	result->setMatrixSize(3, 3);
	*result = { 17, 22, 27,
				22, 29, 36,
				27, 36, 45 };

	EXPECT_NO_THROW(SMO.multiplication(matrix->transpose(1), *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(matrix->transpose(1), *matrix), 0.0001));


	result->setMatrixSize(2, 3);
	*result = { -142, -188, -234,
				-340, -449, -558 };

	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1) * *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1) * *matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 2);
	*result = { 20.75, 43.25,
				43.25, 92.75 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1)));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1)), 0.0001));


	result->setMatrixSize(3, 3);
	*result = { 22.5, 28.5, 34.5,
				28.5, 36.5, 44.5,
				34.5, 44.5, 54.5 };

	EXPECT_NO_THROW(SMO.multiplication(matrix->transpose(1), *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(matrix->transpose(1), *matrix), 0.0001));


	result->setMatrixSize(2, 3);
	*result = { 225.75, 289.75, 353.75,
				482.25, 618.25, 754.25 };

	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1) * *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1) * *matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 2);
	*result = { 20.75, 43.25,
				43.25, 92.75 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1)));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1)), 0.0001));


	result->setMatrixSize(3, 3);
	*result = { 22.5, 28.5, 34.5,
				28.5, 36.5, 44.5,
				34.5, 44.5, 54.5 };

	EXPECT_NO_THROW(SMO.multiplication(matrix->transpose(1), *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(matrix->transpose(1), *matrix), 0.0001));


	result->setMatrixSize(2, 3);
	*result = { -225.75, -289.75, -353.75,
				-482.25, -618.25, -754.25 };

	EXPECT_NO_THROW(SMO.multiplication(*matrix, matrix->transpose(1) * *matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, SMO.multiplication(*matrix, matrix->transpose(1) * *matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -142, -188, -234,
				-340, -449, -558 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(SMO.multiplication(*matrix, matrix->transpose(1)), *matrix));
	EXPECT_TRUE(*result == SMO.multiplication(SMO.multiplication(*matrix, matrix->transpose(1)), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixExceptionMissMatch)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	*result = *matrix;

	EXPECT_THROW(SimpleMatrixOperations::multiplication(*matrix, *result), std::exception);
	EXPECT_THROW(SimpleMatrixOperations::multiplication(matrix->transpose(), result->transpose()), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixExceptionLarge)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 4);

	EXPECT_THROW(SimpleMatrixOperations::multiplication(*matrix, *result), std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationMatrixExceptionSmall)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(2, 2);

	EXPECT_THROW(SimpleMatrixOperations::multiplication(*matrix, *result), std::exception);
}