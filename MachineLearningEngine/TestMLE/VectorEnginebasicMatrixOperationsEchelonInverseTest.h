#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
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

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
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

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(2, 2), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8,
				9, 1, 2, 3,
				4, 5, 6, 1 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(4, 4), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, getEchelonInverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = BasicMatrixOperations::getEchelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix * *result, GetMatrix::getIdentityMatrix(5, 5), 0.00001));
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

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
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

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
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

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(2, 2), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(3, 3), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(4, 4), 0.00001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonInverse, echelonInverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	EXPECT_NO_THROW(BasicMatrixOperations::echelonInverse(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*buffer * *matrix, GetMatrix::getIdentityMatrix(5, 5), 0.00001));
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