#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.791667,  0.916677, -0.125,
				 1.583333, -0.833333,  0.25,
				-0.125,		0.25,	  -0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	Matrix *result = new Matrix(3, 3);
	*result = {  1.791667, -0.91667,  0.125,
				-1.583333,  0.83333, -0.25,
				 0.125,    -0.25,     0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1.791667, 0.916667, 0.125,
				1.583333, 0.833333, 0.25,
				0.125,    0.25,     0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	EXPECT_THROW(BasicMatrixOperations::getEchelonInverse(*matrix), std::exception);
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 1.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.958333,  1.083333, -0.125, 
				 1.75,     -1,         0.25, 
				-0.125,	    0.25,     -0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	Matrix *result = new Matrix(3, 3);
	*result = {  1.958333, -1.083333,  0.125,
				-1.75,	    1,        -0.25,
				 0.125,    -0.25,      0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1.958333, 1.083333, 0.125,
				1.75,     1,        0.25,
				0.125,    0.25,     0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(BasicMatrixOperations::getEchelonInverse(*matrix), std::exception);
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseExceptionNotSquare2)
{
	Matrix *matrix = new Matrix(3, 2);
	EXPECT_THROW(BasicMatrixOperations::getEchelonInverse(*matrix), std::exception);
}


TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *result = new Matrix();
	result->setEntry(0, 0, 1);

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 1 };

	Matrix *result = new Matrix(2, 2);
	*result = { -0.2,  0.4,
				 0.6, -0.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.791667,  0.916667, -0.125,
				 1.583333, -0.833333,  0.25,
				-0.125,     0.25,     -0.125 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8,
				9, 1, 2, 3,
				4, 5, 6, 1 };

	Matrix *result = new Matrix(4, 4);
	*result = { -0.138889, 0.027778,  0.111111, 0,
				-1.430556, 0.819444, -0.222222, -0.166667,
				 1.277778, -0.72222,  0.111111,  0.333333,
				 0.041667,  0.125,    0,        -0.166667 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	Matrix *result = new Matrix(5, 5);
	*result = { -0.048976,  0.038892, -0.014834,  0.123697, -0.006804,
				-0.000061, -0.193944,  0.048792,  0.130318,  0.051306,
				 0.025009,  0.129092,  0.092681, -0.169548,  0.067304,
				 0.119468, -0.003433, -0.096482,  0.011156,  0.005333,
				 0.099240, -0.004904,  0.005026,  0.015937, -0.063810 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize5x5Time)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5,
				6, -2, 3,  1,  1,
				2,  3, 4, -5,  6,
				7,  2, 1,  1,  2,
				3,  4, 5,  6, -7 };

	EXPECT_NO_THROW(BasicMatrixOperations::getEchelonInverse(*matrix));
}

//--------------------------------------------------

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.791667,  0.916677, -0.125,
				 1.583333, -0.833333,  0.25,
				-0.125,     0.25,     -0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	Matrix *result = new Matrix(3, 3);
	*result = {  1.791665, -0.916667,  0.125,
				-1.583333,  0.833333, -0.25,
				 0.125,    -0.25,      0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1.791667, 0.916667, 0.125,
				1.583333, 0.833333, 0.25,
				0.125,    0.25,     0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	EXPECT_THROW(BasicMatrixOperations::echelonInverse(*matrix), std::exception);
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 1.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.958333,  1.083333, -0.125,
				 1.75,     -1,         0.25,
				-0.125,     0.25,     -0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	Matrix *result = new Matrix(3, 3);
	*result = {  1.958333, -1.083333,  0.125,
				-1.75,      1,        -0.25,
				 0.125,    -0.25,      0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1.958333, 1.083333, 0.125,
				1.75,     1,        0.25,
				0.125,    0.25,     0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(BasicMatrixOperations::echelonInverse(*matrix), std::exception);
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseExceptionNotSquare2)
{
	Matrix *matrix = new Matrix(3, 2);
	EXPECT_THROW(BasicMatrixOperations::echelonInverse(*matrix), std::exception);
}


TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize1x1_1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize1x1_2)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 5);

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_EQ(0.2, matrix->getEntry(0, 0));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 1 };

	Matrix *result = new Matrix(2, 2);
	*result = { -0.2,  0.4,
				 0.6, -0.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.791667,  0.916667, -0.125,
				 1.583333, -0.833333,  0.25,
				-0.125,     0.25,     -0.125 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	Matrix *result = new Matrix(4, 4);
	*result = { -0.138889,  0.027778,  0.111111, 0,
				-1.430556,  0.819444, -0.222222, -0.166667,
				 1.277778, -0.722222,  0.111111,  0.333333,
				 0.041667,  0.125,     0,        -0.166667 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	Matrix *result = new Matrix(5, 5);
	*result = { -0.048976,  0.038892, -0.014834,  0.123697, -0.006804,
				-0.000061, -0.193944,  0.048792,  0.130318,  0.051306,
				 0.025009,  0.129092,  0.092681, -0.169548,  0.067304,
				 0.119468, -0.003433, -0.096482,  0.011156,  0.005333,
				 0.099240, -0.004904,  0.005026,  0.015937, -0.063810 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize5x5Time)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5,
				6, -2, 3,  1,  1,
				2,  3, 4, -5,  6,
				7,  2, 1,  1,  2,
				3,  4, 5,  6, -7 };

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				 0, 0, 0, 0,
				 0, 0 ,0, 0 };

	EXPECT_THROW(BasicMatrixOperations::echelonInverse(*matrix), std::exception);
}