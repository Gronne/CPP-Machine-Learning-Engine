#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHolePositive)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(9, matrix2->getEntry(0, 2));
	EXPECT_EQ(16, matrix2->getEntry(1, 0));
	EXPECT_EQ(25, matrix2->getEntry(1, 1));
	EXPECT_EQ(36, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHoleNegative)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(9, matrix2->getEntry(0, 2));
	EXPECT_EQ(16, matrix2->getEntry(1, 0));
	EXPECT_EQ(25, matrix2->getEntry(1, 1));
	EXPECT_EQ(36, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHoleMixed)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(4, matrix2->getEntry(0, 1));
	EXPECT_EQ(9, matrix2->getEntry(0, 2));
	EXPECT_EQ(16, matrix2->getEntry(1, 0));
	EXPECT_EQ(25, matrix2->getEntry(1, 1));
	EXPECT_EQ(36, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHoleInv)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-4, matrix2->getEntry(0, 1));
	EXPECT_EQ(-9, matrix2->getEntry(0, 2));
	EXPECT_EQ(-16, matrix2->getEntry(1, 0));
	EXPECT_EQ(-25, matrix2->getEntry(1, 1));
	EXPECT_EQ(-36, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalPositive)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(2.25, matrix2->getEntry(0, 0));
	EXPECT_EQ(6.25, matrix2->getEntry(0, 1));
	EXPECT_EQ(12.25, matrix2->getEntry(0, 2));
	EXPECT_EQ(20.25, matrix2->getEntry(1, 0));
	EXPECT_EQ(30.25, matrix2->getEntry(1, 1));
	EXPECT_EQ(42.25, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalNegative)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(2.25, matrix2->getEntry(0, 0));
	EXPECT_EQ(6.25, matrix2->getEntry(0, 1));
	EXPECT_EQ(12.25, matrix2->getEntry(0, 2));
	EXPECT_EQ(20.25, matrix2->getEntry(1, 0));
	EXPECT_EQ(30.25, matrix2->getEntry(1, 1));
	EXPECT_EQ(42.25, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalMixed)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(2.25, matrix2->getEntry(0, 0));
	EXPECT_EQ(6.25, matrix2->getEntry(0, 1));
	EXPECT_EQ(12.25, matrix2->getEntry(0, 2));
	EXPECT_EQ(20.25, matrix2->getEntry(1, 0));
	EXPECT_EQ(30.25, matrix2->getEntry(1, 1));
	EXPECT_EQ(42.25, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalInv)
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
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(-2.25, matrix2->getEntry(0, 0));
	EXPECT_EQ(-6.25, matrix2->getEntry(0, 1));
	EXPECT_EQ(-12.25, matrix2->getEntry(0, 2));
	EXPECT_EQ(-20.25, matrix2->getEntry(1, 0));
	EXPECT_EQ(-30.25, matrix2->getEntry(1, 1));
	EXPECT_EQ(-42.25, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalZero)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix1 * 0;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.hadamard(*matrix1, *matrix2));
	EXPECT_EQ(0, matrix2->getEntry(0, 0));
	EXPECT_EQ(0, matrix2->getEntry(0, 1));
	EXPECT_EQ(0, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(0, matrix2->getEntry(1, 1));
	EXPECT_EQ(0, matrix2->getEntry(1, 2));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffCol1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	Matrix *matrix2 = new Matrix(2, 4);
	matrix2->transpose();

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffCol2)
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
	EXPECT_THROW(SMO.hadamard(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRow1)
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
	EXPECT_THROW(SMO.hadamard(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRow2)
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
	EXPECT_THROW(SMO.hadamard(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRowCol1)
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
	EXPECT_THROW(SMO.hadamard(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRowCol2)
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
	EXPECT_THROW(SMO.hadamard(*matrix1, *matrix2), std::exception);
}