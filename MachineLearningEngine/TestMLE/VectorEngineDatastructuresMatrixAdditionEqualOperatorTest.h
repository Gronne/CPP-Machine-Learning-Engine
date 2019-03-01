#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHolePositive)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHoleNegative)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHoleMixed)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixHoleZero)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalPositive)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7, matrix2->getEntry(0, 2));
	EXPECT_EQ(9, matrix2->getEntry(1, 0));
	EXPECT_EQ(11, matrix2->getEntry(1, 1));
	EXPECT_EQ(13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalNegative)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(-3, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7, matrix2->getEntry(0, 2));
	EXPECT_EQ(-9, matrix2->getEntry(1, 0));
	EXPECT_EQ(-11, matrix2->getEntry(1, 1));
	EXPECT_EQ(-13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalMixed)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(-3, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7, matrix2->getEntry(0, 2));
	EXPECT_EQ(9, matrix2->getEntry(1, 0));
	EXPECT_EQ(-11, matrix2->getEntry(1, 1));
	EXPECT_EQ(13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixDecimalZero)
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

	EXPECT_NO_THROW(*matrix2 += *matrix1);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 4);

	EXPECT_THROW(*matrix1 += *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_THROW(*matrix1 += *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRow1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 3);

	EXPECT_THROW(*matrix1 += *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRow2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 3);

	EXPECT_THROW(*matrix1 += *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRowCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 4);

	EXPECT_THROW(*matrix1 += *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorMatrixExceptionDiffRowCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 2);

	EXPECT_THROW(*matrix1 += *matrix2, std::exception);
}

//-----------------------------------------------------

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleHolePositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 += 2);
	EXPECT_EQ(3, matrix1->getEntry(0, 0));
	EXPECT_EQ(4, matrix1->getEntry(0, 1));
	EXPECT_EQ(5, matrix1->getEntry(0, 2));
	EXPECT_EQ(6, matrix1->getEntry(1, 0));
	EXPECT_EQ(7, matrix1->getEntry(1, 1));
	EXPECT_EQ(8, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 += -2);
	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(0, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(2, matrix1->getEntry(1, 0));
	EXPECT_EQ(3, matrix1->getEntry(1, 1));
	EXPECT_EQ(4, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleHoleZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 += 0);
	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(2, matrix1->getEntry(0, 1));
	EXPECT_EQ(3, matrix1->getEntry(0, 2));
	EXPECT_EQ(4, matrix1->getEntry(1, 0));
	EXPECT_EQ(5, matrix1->getEntry(1, 1));
	EXPECT_EQ(6, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 += 2.5);
	EXPECT_EQ(3.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(4.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(5.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(6.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(7.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(8.5, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 += -2.5);
	EXPECT_EQ(-1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(-0.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(0.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(3.5, matrix1->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionEqualOperator, additionOperatorDoubleDecimalZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(*matrix1 += 0.0);
	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(2, matrix1->getEntry(0, 1));
	EXPECT_EQ(3, matrix1->getEntry(0, 2));
	EXPECT_EQ(4, matrix1->getEntry(1, 0));
	EXPECT_EQ(5, matrix1->getEntry(1, 1));
	EXPECT_EQ(6, matrix1->getEntry(1, 2));
}