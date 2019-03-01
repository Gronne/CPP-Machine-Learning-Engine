#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorValueHolePositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 *= 2);
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorValueHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 *= -2);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorValueDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 *= 2.5);
	EXPECT_EQ(2.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(10, matrix2->getEntry(1, 0));
	EXPECT_EQ(12.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(15, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorValueDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 *= -2.5);
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-10, matrix2->getEntry(1, 0));
	EXPECT_EQ(-12.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-15, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorValueZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 *= 0);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorValueTwoTimes)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 *= 2 * 2);
	EXPECT_EQ(4, matrix2->getEntry(0, 0));
	EXPECT_EQ(8, matrix2->getEntry(0, 1));
	EXPECT_EQ(12, matrix2->getEntry(0, 2));
	EXPECT_EQ(16, matrix2->getEntry(1, 0));
	EXPECT_EQ(20, matrix2->getEntry(1, 1));
	EXPECT_EQ(24, matrix2->getEntry(1, 2));
}


TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixHolePositive)
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

	EXPECT_NO_THROW(*matrix2 *= *matrix1);
	EXPECT_EQ(17, matrix2->getEntry(0, 0));
	EXPECT_EQ(22, matrix2->getEntry(0, 1));
	EXPECT_EQ(27, matrix2->getEntry(0, 2));
	EXPECT_EQ(22, matrix2->getEntry(1, 0));
	EXPECT_EQ(29, matrix2->getEntry(1, 1));
	EXPECT_EQ(36, matrix2->getEntry(1, 2));
	EXPECT_EQ(27, matrix2->getEntry(2, 0));
	EXPECT_EQ(36, matrix2->getEntry(2, 1));
	EXPECT_EQ(45, matrix2->getEntry(2, 2));

	EXPECT_NO_THROW(*matrix1 *= *matrix2);
	EXPECT_EQ(142, matrix1->getEntry(0, 0));
	EXPECT_EQ(188, matrix1->getEntry(0, 1));
	EXPECT_EQ(234, matrix1->getEntry(0, 2));
	EXPECT_EQ(340, matrix1->getEntry(1, 0));
	EXPECT_EQ(449, matrix1->getEntry(1, 1));
	EXPECT_EQ(558, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixHoleNegative)
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

	EXPECT_NO_THROW(*matrix2 *= *matrix1);
	EXPECT_EQ(17, matrix2->getEntry(0, 0));
	EXPECT_EQ(22, matrix2->getEntry(0, 1));
	EXPECT_EQ(27, matrix2->getEntry(0, 2));
	EXPECT_EQ(22, matrix2->getEntry(1, 0));
	EXPECT_EQ(29, matrix2->getEntry(1, 1));
	EXPECT_EQ(36, matrix2->getEntry(1, 2));
	EXPECT_EQ(27, matrix2->getEntry(2, 0));
	EXPECT_EQ(36, matrix2->getEntry(2, 1));
	EXPECT_EQ(45, matrix2->getEntry(2, 2));

	EXPECT_NO_THROW(*matrix1 *= *matrix2);
	EXPECT_EQ(-142, matrix1->getEntry(0, 0));
	EXPECT_EQ(-188, matrix1->getEntry(0, 1));
	EXPECT_EQ(-234, matrix1->getEntry(0, 2));
	EXPECT_EQ(-340, matrix1->getEntry(1, 0));
	EXPECT_EQ(-449, matrix1->getEntry(1, 1));
	EXPECT_EQ(-558, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixDecimalPositive)
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

	EXPECT_NO_THROW(*matrix2 *= *matrix1);
	EXPECT_EQ(22.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(28.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(34.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(28.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(36.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(44.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(34.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(44.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(54.5, matrix2->getEntry(2, 2));

	EXPECT_NO_THROW(*matrix1 *= *matrix2);
	EXPECT_EQ(225.75, matrix1->getEntry(0, 0));
	EXPECT_EQ(289.75, matrix1->getEntry(0, 1));
	EXPECT_EQ(353.75, matrix1->getEntry(0, 2));
	EXPECT_EQ(482.25, matrix1->getEntry(1, 0));
	EXPECT_EQ(618.25, matrix1->getEntry(1, 1));
	EXPECT_EQ(754.25, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixDecimalNegative)
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

	EXPECT_NO_THROW(*matrix2 *= *matrix1);
	EXPECT_EQ(22.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(28.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(34.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(28.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(36.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(44.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(34.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(44.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(54.5, matrix2->getEntry(2, 2));

	EXPECT_NO_THROW(*matrix1 *= *matrix2);
	EXPECT_EQ(-225.75, matrix1->getEntry(0, 0));
	EXPECT_EQ(-289.75, matrix1->getEntry(0, 1));
	EXPECT_EQ(-353.75, matrix1->getEntry(0, 2));
	EXPECT_EQ(-482.25, matrix1->getEntry(1, 0));
	EXPECT_EQ(-618.25, matrix1->getEntry(1, 1));
	EXPECT_EQ(-754.25, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixTwoTimes)
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

	EXPECT_NO_THROW(*matrix1 *= *matrix2 * *matrix1);
	EXPECT_EQ(142, matrix1->getEntry(0, 0));
	EXPECT_EQ(188, matrix1->getEntry(0, 1));
	EXPECT_EQ(234, matrix1->getEntry(0, 2));
	EXPECT_EQ(340, matrix1->getEntry(1, 0));
	EXPECT_EQ(449, matrix1->getEntry(1, 1));
	EXPECT_EQ(558, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixTwoTimes2)
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

	EXPECT_NO_THROW(*matrix1 *= (*matrix2 * *matrix1));
	EXPECT_EQ(142, matrix1->getEntry(0, 0));
	EXPECT_EQ(188, matrix1->getEntry(0, 1));
	EXPECT_EQ(234, matrix1->getEntry(0, 2));
	EXPECT_EQ(340, matrix1->getEntry(1, 0));
	EXPECT_EQ(449, matrix1->getEntry(1, 1));
	EXPECT_EQ(558, matrix1->getEntry(1, 2));
}


TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixExceptionMissMatch)
{
	Matrix *matrix1 = new Matrix(2, 3);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;

	EXPECT_THROW(*matrix1 * *matrix2, std::exception);

	matrix1->transpose();
	matrix2->transpose();
	EXPECT_THROW(*matrix1 *= *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixExceptionLarge)
{
	Matrix *matrix1 = new Matrix(3, 3);

	Matrix *matrix2 = new Matrix(4, 4);

	EXPECT_THROW(*matrix1 *= *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixMultiplicationEqualOperator, multiplicationOperatorMatrixExceptionSmall)
{
	Matrix *matrix1 = new Matrix(3, 3);

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_THROW(*matrix1 *= *matrix2, std::exception);
}