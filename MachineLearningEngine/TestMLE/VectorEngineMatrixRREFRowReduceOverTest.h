#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	
	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4,
				0, 1, 0, -2,
				0, 0, 1, -4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1,  4.28571 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1,  4.28571 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, -4.28571 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,  3.5, -4,
				 3.5,  1, -5.5,  6,
				 5.5, -1,  6.5,  2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  0.94964,
				0, 1, 0, -0.33093,
				0, 0, 1, -0.54676 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

//-----------Different dimensions------------
TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6, 
				5, 1, 6, 2, 2 };

	Matrix *result = new Matrix(3, 5);
	*result = { 1, 0, 0, -4, -4,
				0, 1, 0, -2, -2,
				0, 0, 1,  4, 4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				3, 1, 6 };

	Matrix *result = new Matrix(4, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1,
				0, 0, 0 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5, 
				1, 1, 1 };

	Matrix *result = new Matrix(5, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1,
				0, 0, 0,
				0, 0, 0 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
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
	*matrix = { 1, 2, 3, 
				3, 1, 5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 0, 1.4,
				0, 1, 0.8 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5, 
				3, 1, 5, 6, 2, 
				5, 1, 6, 2, 2, 
				5, 1, 6, 2, 3 };

	Matrix *result = new Matrix(4, 5);
	*result = { 1, 0, 0, -4,  0,
				0, 1, 0, -2,  0,
				0, 0, 1,  4,  0,
				0, 0, 0,  0, -1.8 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}

TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOver5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6,
				3, 1, 5, 6, 2, 2,
				5, 1, 6, 2, 2, 2,
				5, 1, 6, 2, 3, 3,
				5, 6, 4, 2, 1, 5 };

	Matrix *result = new Matrix(5, 6);
	*result = { 1, 0, 0, 0, 0,  0.03703,
				0, 1, 0, 0, 0,  0.74074,
				0, 0, 1, 0, 0, -0.14814,
				0, 0, 0, 1, 0, -0.01851, 
				0, 0 ,0, 0, 1,  1 };

	TypeMatrix TM;
	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)));
	EXPECT_TRUE(TM.isEqual(*result, RREF.rowReduceOver(RREF.rowReduceUnder(*matrix)), 0.0001));
}


TEST(VectorEngineMatrixRREFRowReduceOver, rowReduceOverSpecialCase)
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
