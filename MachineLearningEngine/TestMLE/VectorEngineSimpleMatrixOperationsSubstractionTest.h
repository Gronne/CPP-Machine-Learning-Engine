#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHolePositive)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(-2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(-10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHoleNegative)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHoleMixed)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(2, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(6, matrix2->getEntry(0, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 0));
	EXPECT_EQ(10, matrix2->getEntry(1, 1));
	EXPECT_EQ(-12, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHoleZero)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalPositive)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(-3, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-7, matrix2->getEntry(0, 2));
	EXPECT_EQ(-9, matrix2->getEntry(1, 0));
	EXPECT_EQ(-11, matrix2->getEntry(1, 1));
	EXPECT_EQ(-13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalNegative)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7, matrix2->getEntry(0, 2));
	EXPECT_EQ(9, matrix2->getEntry(1, 0));
	EXPECT_EQ(11, matrix2->getEntry(1, 1));
	EXPECT_EQ(13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalMixed)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(3, matrix2->getEntry(0, 0));
	EXPECT_EQ(-5, matrix2->getEntry(0, 1));
	EXPECT_EQ(7, matrix2->getEntry(0, 2));
	EXPECT_EQ(-9, matrix2->getEntry(1, 0));
	EXPECT_EQ(11, matrix2->getEntry(1, 1));
	EXPECT_EQ(-13, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalZero)
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

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.substraction((*matrix1 * -1), *matrix2));
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 4);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.substraction(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.substraction(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRow1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 3);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.substraction(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRow2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 3);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.substraction(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRowCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(3, 4);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.substraction(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRowCol2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(1, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.substraction(*matrix1, *matrix2), std::exception);
}