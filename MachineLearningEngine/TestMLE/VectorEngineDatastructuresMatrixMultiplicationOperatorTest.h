#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueHolePositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 * 2);
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 * -2);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 * 2.5);
	EXPECT_EQ(2.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(10, matrix2->getEntry(1, 0));
	EXPECT_EQ(12.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(15, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 * -2.5);
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-10, matrix2->getEntry(1, 0));
	EXPECT_EQ(-12.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-15, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 * 0);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueTwoTimes)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 * 2 * 2);
	EXPECT_EQ(4, matrix2->getEntry(0, 0));
	EXPECT_EQ(8, matrix2->getEntry(0, 1));
	EXPECT_EQ(12, matrix2->getEntry(0, 2));
	EXPECT_EQ(16, matrix2->getEntry(1, 0));
	EXPECT_EQ(20, matrix2->getEntry(1, 1));
	EXPECT_EQ(24, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorValueTwoTimes2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * 2) * 2);
	EXPECT_EQ(4, matrix2->getEntry(0, 0));
	EXPECT_EQ(8, matrix2->getEntry(0, 1));
	EXPECT_EQ(12, matrix2->getEntry(0, 2));
	EXPECT_EQ(16, matrix2->getEntry(1, 0));
	EXPECT_EQ(20, matrix2->getEntry(1, 1));
	EXPECT_EQ(24, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixHolePositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *matrix2);
	EXPECT_EQ(14, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(32, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(32, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(77, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *matrix2 * *matrix1);
	EXPECT_EQ(17, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(22, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(27, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(22, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(29, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(36, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(27, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(36, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(45, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *resultMatrix);
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *matrix2);
	EXPECT_EQ(14, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(32, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(32, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(77, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *matrix2 * *matrix1);
	EXPECT_EQ(17, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(22, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(27, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(22, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(29, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(36, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(27, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(36, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(45, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *resultMatrix);
	EXPECT_EQ(-142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *matrix2);
	EXPECT_EQ(20.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(43.25, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(43.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(92.75, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *matrix2 * *matrix1);
	EXPECT_EQ(22.5, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(28.5, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(34.5, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(28.5, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(36.5, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(44.5, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(34.5, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(44.5, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(54.5, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *resultMatrix);
	EXPECT_EQ(225.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(289.75, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(353.75, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(482.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(618.25, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(754.25, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *matrix2);
	EXPECT_EQ(20.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(43.25, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(43.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(92.75, resultMatrix->getEntry(1, 1));

	EXPECT_NO_THROW(*resultMatrix = *matrix2 * *matrix1);
	EXPECT_EQ(22.5, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(28.5, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(34.5, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(28.5, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(36.5, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(44.5, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(34.5, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(44.5, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(54.5, resultMatrix->getEntry(2, 2));

	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *resultMatrix);
	EXPECT_EQ(-225.75, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(-289.75, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(-353.75, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(-482.25, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(-618.25, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(-754.25, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixTwoTimes)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = *matrix1 * *matrix2 * *matrix1);
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixTwoTimes2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	Matrix *resultMatrix = new Matrix();
	EXPECT_NO_THROW(*resultMatrix = (*matrix1 * *matrix2) * *matrix1);
	EXPECT_EQ(142, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(188, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(234, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(340, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(449, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(558, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixExceptionMissMatch)
{
	Matrix *matrix1 = new Matrix(2, 3);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;

	EXPECT_THROW(*matrix1 * *matrix2, std::exception);

	matrix1->transpose();
	matrix2->transpose();
	EXPECT_THROW(*matrix1 * *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixExceptionLarge)
{
	Matrix *matrix1 = new Matrix(3, 3);

	Matrix *matrix2 = new Matrix(4, 4);

	EXPECT_THROW(*matrix1 * *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationOperator, multiplicationOperatorMatrixExceptionSmall)
{
	Matrix *matrix1 = new Matrix(3, 3);

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_THROW(*matrix1 * *matrix2, std::exception);
}