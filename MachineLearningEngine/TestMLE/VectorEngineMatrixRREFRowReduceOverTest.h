#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverHolePositive)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverHoleNegative)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverHoleMixed)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_NEAR(4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(-4, resultMatrix->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverDecimalPositive)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_NEAR(0, resultMatrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_NEAR(1, resultMatrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_NEAR(1, resultMatrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4.14285, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, resultMatrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4.28571, resultMatrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverDecimalNegative)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_NEAR(0, resultMatrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_NEAR(1, resultMatrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_NEAR(1, resultMatrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4.14285, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, resultMatrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4.28571, resultMatrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverDecimalMixed)
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

	MatrixRREF RREF; 
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_NEAR(0, resultMatrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_NEAR(1, resultMatrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_NEAR(1, resultMatrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(4.14285, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, resultMatrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-4.285714, resultMatrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverMixedPositive)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_NEAR(1, resultMatrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_NEAR(1, resultMatrix->getEntry(2, 2), 0.001);
	EXPECT_EQ(-4, resultMatrix->getEntry(0, 3));
	EXPECT_NEAR(-2, resultMatrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4, resultMatrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverMixedNegative)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_NEAR(1, resultMatrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_NEAR(1, resultMatrix->getEntry(2, 2), 0.001);
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-2, resultMatrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4, resultMatrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverMixedMixed)
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

	MatrixRREF RREF; 
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_NEAR(1, resultMatrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_NEAR(1, resultMatrix->getEntry(2, 2), 0.001);
	EXPECT_NEAR(0.94964, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-0.33093, resultMatrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-0.54676, resultMatrix->getEntry(2, 3), 0.0001);
}

//-----------Different dimensions------------
TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x5)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 4), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 4));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 3));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 4));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x4)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x3)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver4x3)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 2));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver5x3)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(4, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(4, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(4, 2));
}

//----------Different sizes-----------
TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	MatrixRREF RREF; 
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(2, resultMatrix->getEntry(0, 1));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 5);

	MatrixRREF RREF; 
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(1.4, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0.8, resultMatrix->getEntry(1, 2));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x4_2)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 3));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver4x5)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_NEAR(-4, resultMatrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(-2, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_EQ(4, resultMatrix->getEntry(2, 3));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 3));
	EXPECT_NEAR(0, resultMatrix->getEntry(0, 4), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(1, 4), 0.0001);
	EXPECT_NEAR(0, resultMatrix->getEntry(2, 4), 0.0001);
	EXPECT_NEAR(-1.8, resultMatrix->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver5x6)
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
	Matrix *resultMatrix = new Matrix(); 
	*resultMatrix = RREF.rowReduceUnder(*matrix);

	EXPECT_NO_THROW(*resultMatrix = RREF.rowReduceOver(*resultMatrix));
	EXPECT_EQ(1, resultMatrix->getEntry(0, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 3));
	EXPECT_EQ(0, resultMatrix->getEntry(0, 4));
	EXPECT_NEAR(0.03703, resultMatrix->getEntry(0, 5), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(1, 0));
	EXPECT_EQ(1, resultMatrix->getEntry(1, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 3));
	EXPECT_EQ(0, resultMatrix->getEntry(1, 4));
	EXPECT_NEAR(0.74074, resultMatrix->getEntry(1, 5), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(2, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 1));
	EXPECT_EQ(1, resultMatrix->getEntry(2, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 3));
	EXPECT_EQ(0, resultMatrix->getEntry(2, 4));
	EXPECT_NEAR(-0.14814, resultMatrix->getEntry(2, 5), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(3, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(3, 2));
	EXPECT_EQ(1, resultMatrix->getEntry(3, 3));
	EXPECT_NEAR(0, resultMatrix->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(-0.01851, resultMatrix->getEntry(3, 5), 0.0001);
	EXPECT_EQ(0, resultMatrix->getEntry(4, 0));
	EXPECT_EQ(0, resultMatrix->getEntry(4, 1));
	EXPECT_EQ(0, resultMatrix->getEntry(4, 2));
	EXPECT_EQ(0, resultMatrix->getEntry(4, 3));
	EXPECT_EQ(1, resultMatrix->getEntry(4, 4));
	EXPECT_NEAR(1, resultMatrix->getEntry(4, 5), 0.0001);
}
