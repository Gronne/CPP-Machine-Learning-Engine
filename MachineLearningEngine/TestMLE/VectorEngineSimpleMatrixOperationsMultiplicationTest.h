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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, 2));
	EXPECT_TRUE(*result == SMO.multiplication(*matrix, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6,
				-8, -10, -12 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, -2));
	EXPECT_TRUE(*result == SMO.multiplication(*matrix, -2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2.5,  5,    7.5,
				10,   12.5, 15   };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, 2.5));
	EXPECT_TRUE(*result == SMO.multiplication(*matrix, 2.5));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  -2.5,  -5,    -7.5,
				-10,   -12.5, -15   };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, -2.5));
	EXPECT_TRUE(*result == SMO.multiplication(*matrix, -2.5));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationValueZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.multiplication(*matrix, 0));
	EXPECT_TRUE(*result == SMO.multiplication(*matrix, 0));
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

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *result));
	EXPECT_EQ(14, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(32, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(32, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(77, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*result, *matrix));
	EXPECT_EQ(17, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(22, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(27, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(22, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(29, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(36, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(27, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(36, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(45, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *resultMatrix));
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *result));
	EXPECT_EQ(14, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(32, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(32, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(77, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*result, *matrix));
	EXPECT_EQ(17, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(22, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(27, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(22, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(29, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(36, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(27, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(36, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(45, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *resultMatrix));
	EXPECT_EQ(-142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *result));
	EXPECT_EQ(20.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(43.25, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(43.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(92.75, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*result, *matrix));
	EXPECT_EQ(22.5, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(28.5, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(34.5, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(28.5, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(36.5, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(44.5, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(34.5, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(44.5, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(54.5, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *resultMatrix));
	EXPECT_EQ(225.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(289.75, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(353.75, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(482.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(618.25, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(754.25, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *result));
	EXPECT_EQ(20.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(43.25, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(43.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(92.75, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*result, *matrix));
	EXPECT_EQ(22.5, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(28.5, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(34.5, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(28.5, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(36.5, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(44.5, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(34.5, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(44.5, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(54.5, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(*matrix, *resultMatrix));
	EXPECT_EQ(-225.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-289.75, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-353.75, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-482.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-618.25, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-754.25, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixTwoTimes)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix();
	*result = *matrix;
	result->transpose();

	Matrix *resultMatrix = new Matrix();
	SimpleMatrixOperations SMO;

	EXPECT_NO_THROW(*resultMatrix = SMO.multiplication(SMO.multiplication(*matrix, *result), *matrix));
	EXPECT_EQ(-142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixExceptionMissMatch)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	*result = *matrix;

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.multiplication(*matrix, *result), std::exception);

	matrix->transpose();
	result->transpose();
	EXPECT_THROW(SMO.multiplication(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsMultiplication, multiplicationMatrixExceptionLarge)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(4, 4);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.multiplication(*matrix, *result), std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationMatrixExceptionSmall)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *result = new Matrix(2, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.multiplication(*matrix, *result), std::exception);
}