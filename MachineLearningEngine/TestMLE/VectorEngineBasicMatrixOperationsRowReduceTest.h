#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,   4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1, -2, -3,   -4,
				 0,  5,  4,    6,
				 0,  0,  1.8,  7.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1, -2, -3,   -4,
				 0,  5,  4,    6,
				 0,  0,  1.8,  7.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4, 
				3, -1, 5, -6, 
				5, -1, 6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, -2,  3,   -4,
				0,  5, -4,    6,
				0,  0, -1.8,  7.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, -2,  3,   -4,
				0,  5, -4,    6,
				0,  0, -1.8,  7.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1.5,  2.5,      3.5,       4.5,
				0,   -4.33333, -2.66666,  -4,
				0,    0,       -1.615385, -6.923077 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1.5,  2.5,      3.5,       4.5,
				0,   -4.33333, -2.666666, -4,
				0,    0,       -1.615385, -6.923077 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1.5, -2.5,     -3.5,      -4.5,
				 0,    4.33333,  2.66666,   4,
				 0,    0,        1.615385,  6.923077 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1.5, -2.5,     -3.5,      -4.5,
				 0,    4.33333,  2.66666,   4,
				 0,    0,        1.615385,  6.923077 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1.5, -2.5,      3.5,     -4.5,
				0,    4.33333, -2.66666,  4,
				0,    0,       -1.61538,  6.92307 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1.5, -2.5,      3.5,      -4.5,
				0,    4.33333, -2.66666,   4,
				0,    0,       -1.615385,  6.923077 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1.5,  2,        3.5,      4,
				0,   -3.66666, -2.66666, -3.33333,
				0,    0,       -1.72727, -6.90909 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1.5,  2,        3.5,      4,
				0,   -3.66666, -2.66666, -3.33333,
				0,    0,       -1.72727, -6.90909, };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1.5, -2,       -3.5,     -4,
				 0,    3.66666,  2.66666,  3.33333,
				 0,    0,        1.72727,  6.90909 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1.5, -2,       -3.5,     -4,
				 0,    3.66666,  2.66666,  3.33333,
				 0,    0,        1.72727,  6.90909 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, 2, 3.5, -4,
				3.5, 1, -5.5, 6,
				5.5, -1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1.5, 2,       3.5,      -4,
				 0,   5.66666, 2.66666,  -3.33333,
				 0,   0,       16.35294, -8.941176 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, 2, 3.5, -4,
				3.5, 1, -5.5, 6,
				5.5, -1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { -1.5, 2,       3.5,      -4,
				 0,   5.66666, 2.66666,  -3.33333,
				 0,   0,       16.35294, -8.941176 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

//-----------Different dimensions------------
TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6,
				5, 1, 6, 2, 2 };

	Matrix *result = new Matrix(3, 5);
	*result = { 1,  2,  3,    4,    4,
				0, -5, -4,   -6,   -6,
				0,  0, -1.8, -7.2, -7.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6,
				5, 1, 6, 2, 2 };

	Matrix *result = new Matrix(3, 5);
	*result = { 1,  2,  3,    4,    4,
				0, -5, -4,   -6,   -6,
				0,  0, -1.8, -7.2, -7.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x5_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}
TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5 };

	Matrix *result = new Matrix(4, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8,
				0,  0,  0 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5 };

	Matrix *result = new Matrix(4, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8,
				0,  0,  0 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5, 
				1, 1, 1 };

	Matrix *result = new Matrix(5, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8,
				0,  0,  0,
				0,  0,  0 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5,
				1, 1, 1 };

	Matrix *result = new Matrix(5, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8,
				0,  0,  0,
				0,  0,  0 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

//----------Different sizes-----------

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,  2,  3,
				0, -5, -4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,  2,  3,
				0, -5, -4 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 1, 5, 6, 2,
				5, 1, 6, 2, 2,
				5, 1, 6, 2, 3 };

	Matrix *result = new Matrix(4, 5);
	*result = { 1,  2,  3,    4,     5,
				0, -5, -4,   -6,   -13,
				0,  0, -1.8, -7.2,   0.4,
				0,  0,  0,    0,    -1.8 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 1, 5, 6, 2,
				5, 1, 6, 2, 2,
				5, 1, 6, 2, 3 };

	Matrix *result = new Matrix(4, 5);
	*result = { 1,  2,  3,    4,     5,
				0, -5, -4,   -6,   -13,
				0,  0, -1.8, -7.2,   0.4,
				0,  0,  0,    0,    -1.8 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6, 
				3, 1, 5, 6, 2, 2, 
				5, 1, 6, 2, 2, 2, 
				5, 1, 6, 2, 3, 3, 
				5, 6, 4, 2, 1, 5 };

	Matrix *result = new Matrix(5, 6);
	*result = { 1,  2,  3,    4,     5,         6,
				0, -5, -4,   -6,   -13,       -16,
				0,  0, -1.8, -7.2,   0.4,       0.8,
				0,  0,  0,   -18,   29.37333,  29.70666,
				0,  0,  0,     0,   14.04,     14.04 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getRowReduction(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6,
				3, 1, 5, 6, 2, 2,
				5, 1, 6, 2, 2, 2,
				5, 1, 6, 2, 3, 3,
				5, 6, 4, 2, 1, 5 };

	Matrix *result = new Matrix(5, 6);
	*result = { 1,  2,  3,    4,     5,         6,
				0, -5, -4,   -6,   -13,       -16,
				0,  0, -1.8, -7.2,   0.4,       0.8,
				0,  0,  0,   -18,   29.37333,  29.70666,
				0,  0,  0,     0,   14.04,     14.04 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}


TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0 ,0, 0 };

	Matrix *result = new Matrix(3, 4);
	*result = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(BasicMatrixOperations::rowReduce(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}