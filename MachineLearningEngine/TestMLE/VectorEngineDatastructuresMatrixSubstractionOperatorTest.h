#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorHolePositive)
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

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorHoleMixed)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorHoleZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1 * -1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(-3, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7, matrix2->getEntry(0, 2));
	EXPECT_EQ(-9, matrix2->getEntry(1, 0));
	EXPECT_EQ(-11, matrix2->getEntry(1, 1));
	EXPECT_EQ(-13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7, matrix2->getEntry(0, 2));
	EXPECT_EQ(9, matrix2->getEntry(1, 0));
	EXPECT_EQ(11, matrix2->getEntry(1, 1));
	EXPECT_EQ(13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDecimalMixed)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7, matrix2->getEntry(0, 2));
	EXPECT_EQ(-9, matrix2->getEntry(1, 0));
	EXPECT_EQ(11, matrix2->getEntry(1, 1));
	EXPECT_EQ(-13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorDecimalZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1 * -1;

	EXPECT_NO_THROW(*matrix2 = (*matrix1 * -1) - *matrix2);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorExceptionDiffCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 4);

	EXPECT_THROW(*matrix1 - *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorExceptionDiffCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_THROW(*matrix1 - *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, additionOperatorExceptionDiffRow1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 3);

	EXPECT_THROW(*matrix1 - *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorExceptionDiffRow2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 3);

	EXPECT_THROW(*matrix1 - *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorExceptionDiffRowCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 4);

	EXPECT_THROW(*matrix1 - *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixSubstractionOperator, substractionOperatorExceptionDiffRowCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 2);

	EXPECT_THROW(*matrix1 - *matrix2, std::exception);
}