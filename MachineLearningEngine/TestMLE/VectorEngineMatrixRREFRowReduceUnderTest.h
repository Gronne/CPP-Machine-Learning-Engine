#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-6, matrix2->getEntry(1, 3));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(0, 3, -4);
	matrix->setEntry(1, 0, -3);
	matrix->setEntry(1, 1, -1);
	matrix->setEntry(1, 2, -5);
	matrix->setEntry(1, 3, -6);
	matrix->setEntry(2, 0, -5);
	matrix->setEntry(2, 1, -1);
	matrix->setEntry(2, 2, -6);
	matrix->setEntry(2, 3, -2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(-4, matrix2->getEntry(0, 3));
	EXPECT_EQ(6, matrix2->getEntry(1, 3));
	EXPECT_EQ(7.2, matrix2->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, -4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, -1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, -6);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, -1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, -2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(-4, matrix2->getEntry(0, 3));
	EXPECT_EQ(6, matrix2->getEntry(1, 3));
	EXPECT_EQ(7.2, matrix2->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(0, 3, 4.5);
	matrix->setEntry(1, 0, 3.5);
	matrix->setEntry(1, 1, 1.5);
	matrix->setEntry(1, 2, 5.5);
	matrix->setEntry(1, 3, 6.5);
	matrix->setEntry(2, 0, 5.5);
	matrix->setEntry(2, 1, 1.5);
	matrix->setEntry(2, 2, 6.5);
	matrix->setEntry(2, 3, 2.5);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(-4.33333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(-1.615385, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_EQ(4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(-4, matrix2->getEntry(1, 3));
	EXPECT_NEAR(-6.923077, matrix2->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(0, 3, -4.5);
	matrix->setEntry(1, 0, -3.5);
	matrix->setEntry(1, 1, -1.5);
	matrix->setEntry(1, 2, -5.5);
	matrix->setEntry(1, 3, -6.5);
	matrix->setEntry(2, 0, -5.5);
	matrix->setEntry(2, 1, -1.5);
	matrix->setEntry(2, 2, -6.5);
	matrix->setEntry(2, 3, -2.5);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(4.33333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(1.615385, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(4, matrix2->getEntry(1, 3));
	EXPECT_NEAR(6.923077, matrix2->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(0, 3, -4.5);
	matrix->setEntry(1, 0, 3.5);
	matrix->setEntry(1, 1, -1.5);
	matrix->setEntry(1, 2, 5.5);
	matrix->setEntry(1, 3, -6.5);
	matrix->setEntry(2, 0, 5.5);
	matrix->setEntry(2, 1, -1.5);
	matrix->setEntry(2, 2, 6.5);
	matrix->setEntry(2, 3, -2.5);

	MatrixRREF RREF; Matrix *matrix2 = new Matrix();
	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(4.33333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(-1.615385, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(4, matrix2->getEntry(1, 3));
	EXPECT_NEAR(6.923077, matrix2->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3.5);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5.5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(2, 0, 5.5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6.5);
	matrix->setEntry(2, 3, 2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(-3.66666, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(-1.72727, matrix2->getEntry(2, 2), 0.001);
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_NEAR(-3.33333, matrix2->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-6.90909, matrix2->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(0, 3, -4);
	matrix->setEntry(1, 0, -3.5);
	matrix->setEntry(1, 1, -1);
	matrix->setEntry(1, 2, -5.5);
	matrix->setEntry(1, 3, -6);
	matrix->setEntry(2, 0, -5.5);
	matrix->setEntry(2, 1, -1);
	matrix->setEntry(2, 2, -6.5);
	matrix->setEntry(2, 3, -2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(3.66666, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(1.72727, matrix2->getEntry(2, 2), 0.001);
	EXPECT_EQ(-4, matrix2->getEntry(0, 3));
	EXPECT_NEAR(3.33333, matrix2->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(6.90909, matrix2->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnderMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(0, 3, -4);
	matrix->setEntry(1, 0, 3.5);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, -5.5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(2, 0, 5.5);
	matrix->setEntry(2, 1, -1);
	matrix->setEntry(2, 2, 6.5);
	matrix->setEntry(2, 3, 2);

	MatrixRREF RREF; Matrix *matrix2 = new Matrix();
	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(5.66666, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(16.35294, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4, matrix2->getEntry(0, 3));
	EXPECT_NEAR(-3.33333, matrix2->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-8.941176, matrix2->getEntry(2, 3), 0.0001);
}

//-----------Different dimensions------------
TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(0, 4, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(1, 4, 6);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 2);
	matrix->setEntry(2, 4, 2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(-6, matrix2->getEntry(1, 3));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 3));
	EXPECT_EQ(4, matrix2->getEntry(0, 4));
	EXPECT_EQ(-6, matrix2->getEntry(1, 4));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 4));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-6, matrix2->getEntry(1, 3));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(3, 0, 3);
	matrix->setEntry(3, 1, 1);
	matrix->setEntry(3, 2, 6);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(0, matrix2->getEntry(3, 0));
	EXPECT_EQ(0, matrix2->getEntry(3, 1));
	EXPECT_EQ(0, matrix2->getEntry(3, 2));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(3, 0, 2);
	matrix->setEntry(3, 1, 1);
	matrix->setEntry(3, 2, 5);
	matrix->setEntry(4, 0, 1);
	matrix->setEntry(4, 1, 1);
	matrix->setEntry(4, 2, 1);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(0, matrix2->getEntry(3, 0));
	EXPECT_EQ(0, matrix2->getEntry(3, 1));
	EXPECT_EQ(0, matrix2->getEntry(3, 2));
	EXPECT_EQ(0, matrix2->getEntry(4, 0));
	EXPECT_EQ(0, matrix2->getEntry(4, 1));
	EXPECT_EQ(0, matrix2->getEntry(4, 2));
}

//----------Different sizes-----------
TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 2);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-6, matrix2->getEntry(1, 3));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(0, 4, 5);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(1, 4, 2);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 2);
	matrix->setEntry(2, 4, 2);
	matrix->setEntry(3, 0, 5);
	matrix->setEntry(3, 1, 1);
	matrix->setEntry(3, 2, 6);
	matrix->setEntry(3, 3, 2);
	matrix->setEntry(3, 4, 3);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(-6, matrix2->getEntry(1, 3));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 3));
	EXPECT_EQ(0, matrix2->getEntry(3, 0));
	EXPECT_EQ(0, matrix2->getEntry(3, 1));
	EXPECT_EQ(0, matrix2->getEntry(3, 2));
	EXPECT_EQ(0, matrix2->getEntry(3, 3));
	EXPECT_EQ(5, matrix2->getEntry(0, 4));
	EXPECT_EQ(-13, matrix2->getEntry(1, 4));
	EXPECT_EQ(0.4, matrix2->getEntry(2, 4));
	EXPECT_NEAR(-1.79999, matrix2->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceUnder, rowReduceUnder5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(0, 4, 5);
	matrix->setEntry(0, 5, 6);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);
	matrix->setEntry(1, 3, 6);
	matrix->setEntry(1, 4, 2);
	matrix->setEntry(1, 5, 2);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 2);
	matrix->setEntry(2, 4, 2);
	matrix->setEntry(2, 5, 2);
	matrix->setEntry(3, 0, 5);
	matrix->setEntry(3, 1, 1);
	matrix->setEntry(3, 2, 6);
	matrix->setEntry(3, 3, 2);
	matrix->setEntry(3, 4, 3);
	matrix->setEntry(3, 5, 3);
	matrix->setEntry(4, 0, 5);
	matrix->setEntry(4, 1, 6);
	matrix->setEntry(4, 2, 4);
	matrix->setEntry(4, 3, 2);
	matrix->setEntry(4, 4, 1);
	matrix->setEntry(4, 5, 5);

	MatrixRREF RREF; 
	Matrix *matrix2 = new Matrix();

	EXPECT_NO_THROW(*matrix2 = RREF.rowReduceUnder(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(0, 4));
	EXPECT_EQ(6, matrix2->getEntry(0, 5));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
	EXPECT_EQ(-6, matrix2->getEntry(1, 3));
	EXPECT_EQ(-13, matrix2->getEntry(1, 4));
	EXPECT_EQ(-16, matrix2->getEntry(1, 5));
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix2->getEntry(2, 2));
	EXPECT_EQ(-7.2, matrix2->getEntry(2, 3));
	EXPECT_EQ(0.4, matrix2->getEntry(2, 4));
	EXPECT_EQ(0.8, matrix2->getEntry(2, 5));
	EXPECT_EQ(0, matrix2->getEntry(3, 0));
	EXPECT_EQ(0, matrix2->getEntry(3, 1));
	EXPECT_EQ(0, matrix2->getEntry(3, 2));
	EXPECT_EQ(-18, matrix2->getEntry(3, 3));
	EXPECT_NEAR(29.37333, matrix2->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(29.70666, matrix2->getEntry(3, 5), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(4, 0));
	EXPECT_EQ(0, matrix2->getEntry(4, 1));
	EXPECT_EQ(0, matrix2->getEntry(4, 2));
	EXPECT_EQ(0, matrix2->getEntry(4, 3));
	EXPECT_NEAR(14.04, matrix2->getEntry(4, 4), 0.0001);
	EXPECT_EQ(14.04, matrix2->getEntry(4, 5));
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