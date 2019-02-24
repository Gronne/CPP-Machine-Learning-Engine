#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsInverse, InverseHolePositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(-1.791667, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916677, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, matrix2->getEntry(0, 2));
	EXPECT_NEAR(1.583333, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.833333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(-0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(-0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);
	matrix1->setEntry(2, 0, -7);
	matrix1->setEntry(2, 1, -8);
	matrix1->setEntry(2, 2, -1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(1.791667, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-0.916667, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix2->getEntry(0, 2));
	EXPECT_NEAR(-1.583333, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.833333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_EQ(-0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(-0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, -7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, -1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(1.791667, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916667, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix2->getEntry(0, 2));
	EXPECT_NEAR(1.583333, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.833333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleZero)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 0);
	matrix1->setEntry(0, 1, 0);
	matrix1->setEntry(0, 2, 0);
	matrix1->setEntry(1, 0, 0);
	matrix1->setEntry(1, 1, 0);
	matrix1->setEntry(1, 2, 0);
	matrix1->setEntry(2, 0, 0);
	matrix1->setEntry(2, 1, 0);
	matrix1->setEntry(2, 2, 0);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*matrix2 = SMO.getInverse(*matrix1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalPositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);
	matrix1->setEntry(2, 0, 7.5);
	matrix1->setEntry(2, 1, 8.5);
	matrix1->setEntry(2, 2, 1.5);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(-1.958333, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.083333, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, matrix2->getEntry(0, 2));
	EXPECT_EQ(1.75, matrix2->getEntry(1, 0));
	EXPECT_EQ(-1, matrix2->getEntry(1, 1));
	EXPECT_EQ(0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(-0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(-0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);
	matrix1->setEntry(2, 0, -7.5);
	matrix1->setEntry(2, 1, -8.5);
	matrix1->setEntry(2, 2, -1.5);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(1.958333, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.083333, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix2->getEntry(0, 2));
	EXPECT_EQ(-1.75, matrix2->getEntry(1, 0));
	EXPECT_EQ(1, matrix2->getEntry(1, 1));
	EXPECT_EQ(-0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(-0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);
	matrix1->setEntry(2, 0, -7.5);
	matrix1->setEntry(2, 1, 8.5);
	matrix1->setEntry(2, 2, -1.5);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(1.958333, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.083333, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix2->getEntry(0, 2));
	EXPECT_EQ(1.75, matrix2->getEntry(1, 0));
	EXPECT_EQ(1, matrix2->getEntry(1, 1));
	EXPECT_EQ(0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseExceptionNotSquare1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*matrix2 = SMO.getInverse(*matrix1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseExceptionNotSquare2)
{
	Matrix *matrix1 = new Matrix(3, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(2, 0, 4);
	matrix1->setEntry(2, 1, 5);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*matrix2 = SMO.getInverse(*matrix1), std::exception);
}


TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize1x1)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize2x2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 3);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_EQ(-0.2, matrix2->getEntry(0, 0));
	EXPECT_EQ(0.4, matrix2->getEntry(0, 1));
	EXPECT_NEAR(0.6, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_EQ(-0.2, matrix2->getEntry(1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize3x3)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(-1.791667, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916667, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, matrix2->getEntry(0, 2));
	EXPECT_NEAR(1.583333, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.833333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, matrix2->getEntry(1, 2));
	EXPECT_EQ(-0.125, matrix2->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix2->getEntry(2, 1));
	EXPECT_EQ(-0.125, matrix2->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize4x4)
{
	Matrix *matrix1 = new Matrix(4, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 2);
	matrix1->setEntry(2, 3, 3);
	matrix1->setEntry(3, 0, 4);
	matrix1->setEntry(3, 1, 5);
	matrix1->setEntry(3, 2, 6);
	matrix1->setEntry(3, 3, 1);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(-0.138889, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.027778, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.111111, matrix2->getEntry(0, 2), 0.0001);
	EXPECT_EQ(-0, matrix2->getEntry(0, 3));
	EXPECT_NEAR(-1.430556, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.819444, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-0.222222, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(-0.166667, matrix2->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(1.277778, matrix2->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.722222, matrix2->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.111111, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(0.333333, matrix2->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(0.041667, matrix2->getEntry(3, 0), 0.0001);
	EXPECT_EQ(0.125, matrix2->getEntry(3, 1));
	EXPECT_EQ(-0, matrix2->getEntry(3, 2));
	EXPECT_NEAR(-0.166667, matrix2->getEntry(3, 3), 0.0001);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize5x5)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(0, 4, 5);
	matrix1->setEntry(1, 0, 6);
	matrix1->setEntry(1, 1, -2);
	matrix1->setEntry(1, 2, 3);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(1, 4, 1);
	matrix1->setEntry(2, 0, 2);
	matrix1->setEntry(2, 1, 3);
	matrix1->setEntry(2, 2, 4);
	matrix1->setEntry(2, 3, -5);
	matrix1->setEntry(2, 4, 6);
	matrix1->setEntry(3, 0, 7);
	matrix1->setEntry(3, 1, 2);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);
	matrix1->setEntry(3, 4, 2);
	matrix1->setEntry(4, 0, 3);
	matrix1->setEntry(4, 1, 4);
	matrix1->setEntry(4, 2, 5);
	matrix1->setEntry(4, 3, 6);
	matrix1->setEntry(4, 4, -7);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
	EXPECT_NEAR(-0.048976, matrix2->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.038892, matrix2->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(-0.014834, matrix2->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(0.123697, matrix2->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-0.006804, matrix2->getEntry(0, 4), 0.0001);
	EXPECT_NEAR(-0.000061, matrix2->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.193944, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.048792, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.130318, matrix2->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(0.051306, matrix2->getEntry(1, 4), 0.0001);
	EXPECT_NEAR(0.025009, matrix2->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.129092, matrix2->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.092681, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-0.169548, matrix2->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(0.067304, matrix2->getEntry(2, 4), 0.0001);
	EXPECT_NEAR(0.119468, matrix2->getEntry(3, 0), 0.0001);
	EXPECT_NEAR(-0.003433, matrix2->getEntry(3, 1), 0.0001);
	EXPECT_NEAR(-0.096482, matrix2->getEntry(3, 2), 0.0001);
	EXPECT_NEAR(0.011156, matrix2->getEntry(3, 3), 0.0001);
	EXPECT_NEAR(0.005333, matrix2->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(0.09924, matrix2->getEntry(4, 0), 0.0001);
	EXPECT_NEAR(-0.004904, matrix2->getEntry(4, 1), 0.0001);
	EXPECT_NEAR(0.005026, matrix2->getEntry(4, 2), 0.0001);
	EXPECT_NEAR(0.015937, matrix2->getEntry(4, 3), 0.0001);
	EXPECT_NEAR(-0.06381, matrix2->getEntry(4, 4), 0.0001);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize5x5Time)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(0, 4, 5);
	matrix1->setEntry(1, 0, 6);
	matrix1->setEntry(1, 1, -2);
	matrix1->setEntry(1, 2, 3);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(1, 4, 1);
	matrix1->setEntry(2, 0, 2);
	matrix1->setEntry(2, 1, 3);
	matrix1->setEntry(2, 2, 4);
	matrix1->setEntry(2, 3, -5);
	matrix1->setEntry(2, 4, 6);
	matrix1->setEntry(3, 0, 7);
	matrix1->setEntry(3, 1, 2);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);
	matrix1->setEntry(3, 4, 2);
	matrix1->setEntry(4, 0, 3);
	matrix1->setEntry(4, 1, 4);
	matrix1->setEntry(4, 2, 5);
	matrix1->setEntry(4, 3, 6);
	matrix1->setEntry(4, 4, -7);

	Matrix *matrix2 = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*matrix2 = SMO.getInverse(*matrix1));
}