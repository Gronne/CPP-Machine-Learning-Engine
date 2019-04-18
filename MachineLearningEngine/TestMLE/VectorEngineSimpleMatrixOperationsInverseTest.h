#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(-1.791667, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916677, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, result->getEntry(0, 2));
	EXPECT_NEAR(1.583333, result->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.833333, result->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, result->getEntry(1, 2));
	EXPECT_EQ(-0.125, result->getEntry(2, 0));
	EXPECT_EQ(0.25, result->getEntry(2, 1));
	EXPECT_EQ(-0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(1.791667, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-0.916667, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, result->getEntry(0, 2));
	EXPECT_NEAR(-1.583333, result->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.833333, result->getEntry(1, 1), 0.0001);
	EXPECT_EQ(-0.25, result->getEntry(1, 2));
	EXPECT_EQ(0.125, result->getEntry(2, 0));
	EXPECT_EQ(-0.25, result->getEntry(2, 1));
	EXPECT_EQ(0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(1.791667, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916667, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, result->getEntry(0, 2));
	EXPECT_NEAR(1.583333, result->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.833333, result->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, result->getEntry(1, 2));
	EXPECT_EQ(0.125, result->getEntry(2, 0));
	EXPECT_EQ(0.25, result->getEntry(2, 1));
	EXPECT_EQ(0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*result = SMO.getInverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getinverseDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 1.5 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(-1.958333, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.083333, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, result->getEntry(0, 2));
	EXPECT_EQ(1.75, result->getEntry(1, 0));
	EXPECT_EQ(-1, result->getEntry(1, 1));
	EXPECT_EQ(0.25, result->getEntry(1, 2));
	EXPECT_EQ(-0.125, result->getEntry(2, 0));
	EXPECT_EQ(0.25, result->getEntry(2, 1));
	EXPECT_EQ(-0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(1.958333, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.083333, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, result->getEntry(0, 2));
	EXPECT_EQ(-1.75, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(-0.25, result->getEntry(1, 2));
	EXPECT_EQ(0.125, result->getEntry(2, 0));
	EXPECT_EQ(-0.25, result->getEntry(2, 1));
	EXPECT_EQ(0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(1.958333, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.083333, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, result->getEntry(0, 2));
	EXPECT_EQ(1.75, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0.25, result->getEntry(1, 2));
	EXPECT_EQ(0.125, result->getEntry(2, 0));
	EXPECT_EQ(0.25, result->getEntry(2, 1));
	EXPECT_EQ(0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.getInverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseExceptionNotSquare2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				4, 5, 
				4, 5 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.getInverse(*matrix), std::exception);
}


TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_EQ(1, SMO.getInverse(*matrix).getEntry(0,0));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 1 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_EQ(-0.2, result->getEntry(0, 0));
	EXPECT_EQ(0.4, result->getEntry(0, 1));
	EXPECT_NEAR(0.6, result->getEntry(1, 0), 0.0001);
	EXPECT_EQ(-0.2, result->getEntry(1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 1 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(-1.791667, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916667, result->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, result->getEntry(0, 2));
	EXPECT_NEAR(1.583333, result->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.833333, result->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, result->getEntry(1, 2));
	EXPECT_EQ(-0.125, result->getEntry(2, 0));
	EXPECT_EQ(0.25, result->getEntry(2, 1));
	EXPECT_EQ(-0.125, result->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(-0.138889, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.027778, result->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.111111, result->getEntry(0, 2), 0.0001);
	EXPECT_EQ(-0, result->getEntry(0, 3));
	EXPECT_NEAR(-1.430556, result->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.819444, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-0.222222, result->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(-0.166667, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(1.277778, result->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.722222, result->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.111111, result->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(0.333333, result->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(0.041667, result->getEntry(3, 0), 0.0001);
	EXPECT_EQ(0.125, result->getEntry(3, 1));
	EXPECT_EQ(-0, result->getEntry(3, 2));
	EXPECT_NEAR(-0.166667, result->getEntry(3, 3), 0.0001);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5,
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*result = SMO.getInverse(*matrix));
	EXPECT_NEAR(-0.048976, result->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.038892, result->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(-0.014834, result->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(0.123697, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-0.006804, result->getEntry(0, 4), 0.0001);
	EXPECT_NEAR(-0.000061, result->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.193944, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.048792, result->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.130318, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(0.051306, result->getEntry(1, 4), 0.0001);
	EXPECT_NEAR(0.025009, result->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.129092, result->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.092681, result->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-0.169548, result->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(0.067304, result->getEntry(2, 4), 0.0001);
	EXPECT_NEAR(0.119468, result->getEntry(3, 0), 0.0001);
	EXPECT_NEAR(-0.003433, result->getEntry(3, 1), 0.0001);
	EXPECT_NEAR(-0.096482, result->getEntry(3, 2), 0.0001);
	EXPECT_NEAR(0.011156, result->getEntry(3, 3), 0.0001);
	EXPECT_NEAR(0.005333, result->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(0.09924, result->getEntry(4, 0), 0.0001);
	EXPECT_NEAR(-0.004904, result->getEntry(4, 1), 0.0001);
	EXPECT_NEAR(0.005026, result->getEntry(4, 2), 0.0001);
	EXPECT_NEAR(0.015937, result->getEntry(4, 3), 0.0001);
	EXPECT_NEAR(-0.06381, result->getEntry(4, 4), 0.0001);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize5x5Time)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix*2));
}

//--------------------------------------------------

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(-1.791667, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916677, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, matrix->getEntry(0, 2));
	EXPECT_NEAR(1.583333, matrix->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.833333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(-0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(-0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(1.791667, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-0.916667, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix->getEntry(0, 2));
	EXPECT_NEAR(-1.583333, matrix->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.833333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_EQ(-0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(-0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(1.791667, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916667, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix->getEntry(0, 2));
	EXPECT_NEAR(1.583333, matrix->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.833333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 1.5 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(-1.958333, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.083333, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, matrix->getEntry(0, 2));
	EXPECT_EQ(1.75, matrix->getEntry(1, 0));
	EXPECT_EQ(-1, matrix->getEntry(1, 1));
	EXPECT_EQ(0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(-0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(-0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(1.958333, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.083333, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix->getEntry(0, 2));
	EXPECT_EQ(-1.75, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(-0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(-0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(1.958333, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.083333, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(0.125, matrix->getEntry(0, 2));
	EXPECT_EQ(1.75, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseExceptionNotSquare2)
{
	Matrix *matrix = new Matrix(3, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}


TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_EQ(-0.2, matrix->getEntry(0, 0));
	EXPECT_EQ(0.4, matrix->getEntry(0, 1));
	EXPECT_NEAR(0.6, matrix->getEntry(1, 0), 0.0001);
	EXPECT_EQ(-0.2, matrix->getEntry(1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(-1.791667, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.916667, matrix->getEntry(0, 1), 0.0001);
	EXPECT_EQ(-0.125, matrix->getEntry(0, 2));
	EXPECT_NEAR(1.583333, matrix->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.833333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_EQ(0.25, matrix->getEntry(1, 2));
	EXPECT_EQ(-0.125, matrix->getEntry(2, 0));
	EXPECT_EQ(0.25, matrix->getEntry(2, 1));
	EXPECT_EQ(-0.125, matrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(-0.138889, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.027778, matrix->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.111111, matrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(-0, matrix->getEntry(0, 3));
	EXPECT_NEAR(-1.430556, matrix->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.819444, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-0.222222, matrix->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(-0.166667, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(1.277778, matrix->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.722222, matrix->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.111111, matrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(0.333333, matrix->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(0.041667, matrix->getEntry(3, 0), 0.0001);
	EXPECT_EQ(0.125, matrix->getEntry(3, 1));
	EXPECT_EQ(-0, matrix->getEntry(3, 2));
	EXPECT_NEAR(-0.166667, matrix->getEntry(3, 3), 0.0001);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_NEAR(-0.048976, matrix->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.038892, matrix->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(-0.014834, matrix->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(0.123697, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-0.006804, matrix->getEntry(0, 4), 0.0001);
	EXPECT_NEAR(-0.000061, matrix->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-0.193944, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.048792, matrix->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.130318, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(0.051306, matrix->getEntry(1, 4), 0.0001);
	EXPECT_NEAR(0.025009, matrix->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.129092, matrix->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.092681, matrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-0.169548, matrix->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(0.067304, matrix->getEntry(2, 4), 0.0001);
	EXPECT_NEAR(0.119468, matrix->getEntry(3, 0), 0.0001);
	EXPECT_NEAR(-0.003433, matrix->getEntry(3, 1), 0.0001);
	EXPECT_NEAR(-0.096482, matrix->getEntry(3, 2), 0.0001);
	EXPECT_NEAR(0.011156, matrix->getEntry(3, 3), 0.0001);
	EXPECT_NEAR(0.005333, matrix->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(0.09924, matrix->getEntry(4, 0), 0.0001);
	EXPECT_NEAR(-0.004904, matrix->getEntry(4, 1), 0.0001);
	EXPECT_NEAR(0.005026, matrix->getEntry(4, 2), 0.0001);
	EXPECT_NEAR(0.015937, matrix->getEntry(4, 3), 0.0001);
	EXPECT_NEAR(-0.06381, matrix->getEntry(4, 4), 0.0001);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize5x5Time)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5,
				6, -2, 3,  1,  1,
				2,  3, 4, -5,  6,
				7,  2, 1,  1,  2,
				3,  4, 5,  6, -7 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix*2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 1,
				0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}