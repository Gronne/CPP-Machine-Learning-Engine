#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6, 
				0,  0, -1.8, -7.2};


	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4, 
				-3, -1, -5, -6, 
				-5, -1, -6, -2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 4);
	*result = { -1, -2, -3,   -4,
				 0,  5,  4,    6,
				 0,  0,  1.8,  7.2 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 4);
	*result = { 1, -2,  3,   -4,
				0,  5, -4,    6,
				0,  0, -1.8,  7.2 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1.5, result->getEntry(0, 0));
	EXPECT_EQ(2.5, result->getEntry(0, 1));
	EXPECT_EQ(3.5, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(-4.33333, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(-1.615385, result->getEntry(2, 2), 0.0001);
	EXPECT_EQ(4.5, result->getEntry(0, 3));
	EXPECT_EQ(-4, result->getEntry(1, 3));
	EXPECT_NEAR(-6.923077, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1.5, result->getEntry(0, 0));
	EXPECT_EQ(-2.5, result->getEntry(0, 1));
	EXPECT_EQ(-3.5, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(4.33333, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1.615385, result->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, result->getEntry(0, 3));
	EXPECT_EQ(4, result->getEntry(1, 3));
	EXPECT_NEAR(6.923077, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	MatrixRREF RREF; Matrix *result = new Matrix();
	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1.5, result->getEntry(0, 0));
	EXPECT_EQ(-2.5, result->getEntry(0, 1));
	EXPECT_EQ(3.5, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(4.33333, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(-1.615385, result->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, result->getEntry(0, 3));
	EXPECT_EQ(4, result->getEntry(1, 3));
	EXPECT_NEAR(6.923077, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1.5, result->getEntry(0, 0));
	EXPECT_EQ(2, result->getEntry(0, 1));
	EXPECT_EQ(3.5, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(-3.66666, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(-1.72727, result->getEntry(2, 2), 0.001);
	EXPECT_EQ(4, result->getEntry(0, 3));
	EXPECT_NEAR(-3.33333, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-6.90909, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1.5, result->getEntry(0, 0));
	EXPECT_EQ(-2, result->getEntry(0, 1));
	EXPECT_EQ(-3.5, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(3.66666, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1.72727, result->getEntry(2, 2), 0.001);
	EXPECT_EQ(-4, result->getEntry(0, 3));
	EXPECT_NEAR(3.33333, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(6.90909, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,  3.5, -4,
				 3.5,  1, -5.5,  6,
				 5.5, -1,  6.5,  2 };

	MatrixRREF RREF; Matrix *result = new Matrix();
	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1.5, result->getEntry(0, 0));
	EXPECT_EQ(2, result->getEntry(0, 1));
	EXPECT_EQ(3.5, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(5.66666, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(16.35294, result->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4, result->getEntry(0, 3));
	EXPECT_NEAR(-3.33333, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-8.941176, result->getEntry(2, 3), 0.0001);
}

//-----------Different dimensions------------
TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6, 
				5, 1, 6, 2, 2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 5);
	*result = { 1,  2,  3,    4,    4,
				0, -5, -4,   -6,   -6,
				0,  0, -1.8, -7.2, -7.2 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 3);
	*result = { 1,  2,  3, 
				0, -5, -4, 
				0,  0, -1.8 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				3, 1, 6 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(4, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8,
				0,  0,  0 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5, 
				1, 1, 1 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(5, 3);
	*result = { 1,  2,  3,
				0, -5, -4,
				0,  0, -1.8,
				0,  0,  0,
				0,  0,  0 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

//----------Different sizes-----------
TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	MatrixRREF RREF; 
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(2, result->getEntry(0, 1));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(2, 3);
	*result = { 1,  2,  3, 
				0, -5, -4 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(3, 4);
	*result = { 1,  2,  3,    4,
				0, -5, -4,   -6,
				0,  0, -1.8, -7.2 };

	EXPECT_NO_THROW(RREF.rowReduceUnder(*matrix));
	EXPECT_TRUE(*result == RREF.rowReduceUnder(*matrix));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5, 
				3, 1, 5, 6, 2, 
				5, 1, 6, 2, 2, 
				5, 1, 6, 2, 3 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix(4, 5);

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(2, result->getEntry(0, 1));
	EXPECT_EQ(3, result->getEntry(0, 2));
	EXPECT_EQ(4, result->getEntry(0, 3));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(-5, result->getEntry(1, 1));
	EXPECT_EQ(-4, result->getEntry(1, 2));
	EXPECT_EQ(-6, result->getEntry(1, 3));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(-1.8, result->getEntry(2, 2));
	EXPECT_EQ(-7.2, result->getEntry(2, 3));
	EXPECT_EQ(0, result->getEntry(3, 0));
	EXPECT_EQ(0, result->getEntry(3, 1));
	EXPECT_EQ(0, result->getEntry(3, 2));
	EXPECT_EQ(0, result->getEntry(3, 3));
	EXPECT_EQ(5, result->getEntry(0, 4));
	EXPECT_EQ(-13, result->getEntry(1, 4));
	EXPECT_EQ(0.4, result->getEntry(2, 4));
	EXPECT_NEAR(-1.79999, result->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6,
				3, 1, 5, 6, 2, 2,
				5, 1, 6, 2, 2, 2,
				5, 1, 6, 2, 3, 3,
				5, 6, 4, 2, 1, 5 };

	MatrixRREF RREF; 
	Matrix *result = new Matrix();

	EXPECT_NO_THROW(*result = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(2, result->getEntry(0, 1));
	EXPECT_EQ(3, result->getEntry(0, 2));
	EXPECT_EQ(4, result->getEntry(0, 3));
	EXPECT_EQ(5, result->getEntry(0, 4));
	EXPECT_EQ(6, result->getEntry(0, 5));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(-5, result->getEntry(1, 1));
	EXPECT_EQ(-4, result->getEntry(1, 2));
	EXPECT_EQ(-6, result->getEntry(1, 3));
	EXPECT_EQ(-13, result->getEntry(1, 4));
	EXPECT_EQ(-16, result->getEntry(1, 5));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(-1.8, result->getEntry(2, 2));
	EXPECT_EQ(-7.2, result->getEntry(2, 3));
	EXPECT_EQ(0.4, result->getEntry(2, 4));
	EXPECT_EQ(0.8, result->getEntry(2, 5));
	EXPECT_EQ(0, result->getEntry(3, 0));
	EXPECT_EQ(0, result->getEntry(3, 1));
	EXPECT_EQ(0, result->getEntry(3, 2));
	EXPECT_EQ(-18, result->getEntry(3, 3));
	EXPECT_NEAR(29.37333, result->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(29.70666, result->getEntry(3, 5), 0.0001);
	EXPECT_EQ(0, result->getEntry(4, 0));
	EXPECT_EQ(0, result->getEntry(4, 1));
	EXPECT_EQ(0, result->getEntry(4, 2));
	EXPECT_EQ(0, result->getEntry(4, 3));
	EXPECT_NEAR(14.04, result->getEntry(4, 4), 0.0001);
	EXPECT_EQ(14.04, result->getEntry(4, 5));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	MatrixRREF RREF;
	Matrix *resultMatrix = new Matrix();
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
}