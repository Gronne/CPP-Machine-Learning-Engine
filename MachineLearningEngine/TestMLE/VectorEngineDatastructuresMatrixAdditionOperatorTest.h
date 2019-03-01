#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixHolePositive)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixHoleNegative)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixHoleMixed)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixHoleZero)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixDecimalPositive)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7, matrix2->getEntry(0, 2));
	EXPECT_EQ(9, matrix2->getEntry(1, 0));
	EXPECT_EQ(11, matrix2->getEntry(1, 1));
	EXPECT_EQ(13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixDecimalNegative)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(-3, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7, matrix2->getEntry(0, 2));
	EXPECT_EQ(-9, matrix2->getEntry(1, 0));
	EXPECT_EQ(-11, matrix2->getEntry(1, 1));
	EXPECT_EQ(-13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixDecimalMixed)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(-3, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7, matrix2->getEntry(0, 2));
	EXPECT_EQ(9, matrix2->getEntry(1, 0));
	EXPECT_EQ(-11, matrix2->getEntry(1, 1));
	EXPECT_EQ(13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixDecimalZero)
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

	EXPECT_NO_THROW(*matrix2 = *matrix1 + *matrix2);
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixExceptionDiffCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 4);

	EXPECT_THROW(*matrix1 + *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixExceptionDiffCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_THROW(*matrix1 + *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixExceptionDiffRow1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 3);

	EXPECT_THROW(*matrix1 + *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixExceptionDiffRow2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 3);

	EXPECT_THROW(*matrix1 + *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixExceptionDiffRowCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 4);

	EXPECT_THROW(*matrix1 + *matrix2, std::exception);
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorMatrixExceptionDiffRowCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 2);

	EXPECT_THROW(*matrix1 + *matrix2, std::exception);
}

//-----------------------------------------------------

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorDoubleHolePositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2;

	EXPECT_NO_THROW(*matrix2 = *matrix1 + 2);
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(5, matrix2->getEntry(0, 2));
	EXPECT_EQ(6, matrix2->getEntry(1, 0));
	EXPECT_EQ(7, matrix2->getEntry(1, 1));
	EXPECT_EQ(8, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorDoubleHoleNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2;

	EXPECT_NO_THROW(*matrix2 = *matrix1 + -2);
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(1, matrix2->getEntry(0, 2));
	EXPECT_EQ(2, matrix2->getEntry(1, 0));
	EXPECT_EQ(3, matrix2->getEntry(1, 1));
	EXPECT_EQ(4, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorDoubleHoleZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2;

	EXPECT_NO_THROW(*matrix2 = *matrix1 + 0);
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorDoubleDecimalPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2;

	EXPECT_NO_THROW(*matrix2 = *matrix1 + 2.5);
	EXPECT_EQ(3.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(4.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(5.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(7.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorDoubleDecimalNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2;

	EXPECT_NO_THROW(*matrix2 = *matrix1 + -2.5);
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-0.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(0.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(1.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixAdditionOperator, additionOperatorDoubleDecimalZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2;

	EXPECT_NO_THROW(*matrix2 = *matrix1 + 0.0);
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}