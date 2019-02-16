#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueHolePositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 / 2);
	EXPECT_EQ(0.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(1, matrix2->getEntry(0, 1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(2, matrix2->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(3, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 / -2);
	EXPECT_EQ(-0.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-1, matrix2->getEntry(0, 1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-2, matrix2->getEntry(1, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-3, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 / 2.5);
	EXPECT_DOUBLE_EQ(0.4, matrix2->getEntry(0, 0));
	EXPECT_DOUBLE_EQ(0.8, matrix2->getEntry(0, 1));
	EXPECT_DOUBLE_EQ(1.2, matrix2->getEntry(0, 2));
	EXPECT_DOUBLE_EQ(1.6, matrix2->getEntry(1, 0));
	EXPECT_DOUBLE_EQ(2.0, matrix2->getEntry(1, 1));
	EXPECT_DOUBLE_EQ(2.4, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 / -2.5);
	EXPECT_DOUBLE_EQ(-0.4, matrix2->getEntry(0, 0));
	EXPECT_DOUBLE_EQ(-0.8, matrix2->getEntry(0, 1));
	EXPECT_DOUBLE_EQ(-1.2, matrix2->getEntry(0, 2));
	EXPECT_DOUBLE_EQ(-1.6, matrix2->getEntry(1, 0));
	EXPECT_DOUBLE_EQ(-2.0, matrix2->getEntry(1, 1));
	EXPECT_DOUBLE_EQ(-2.4, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);

	EXPECT_NO_THROW(*matrix2 = *matrix1 / 0);
	EXPECT_EQ(INFINITY, matrix2->getEntry(0, 0));
	EXPECT_EQ(INFINITY, matrix2->getEntry(0, 1));
	EXPECT_EQ(INFINITY, matrix2->getEntry(0, 2));
	EXPECT_EQ(INFINITY, matrix2->getEntry(1, 0));
	EXPECT_EQ(INFINITY, matrix2->getEntry(1, 1));
	EXPECT_EQ(INFINITY, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueTwoTimes)
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

TEST(VectorEngineDatastructurMatrixDivisionOperator, divisionOperatorValueTwoTimes2)
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