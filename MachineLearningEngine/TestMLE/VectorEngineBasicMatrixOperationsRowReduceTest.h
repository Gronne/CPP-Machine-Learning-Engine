#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_EQ(-6, matrix->getEntry(1, 3));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(-2, matrix->getEntry(0, 1));
	EXPECT_EQ(-3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	EXPECT_EQ(4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(-4, matrix->getEntry(0, 3));
	EXPECT_EQ(6, matrix->getEntry(1, 3));
	EXPECT_EQ(7.2, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4, 
				3, -1, 5, -6, 
				5, -1, 6, -2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(-4, matrix->getEntry(0, 3));
	EXPECT_EQ(6, matrix->getEntry(1, 3));
	EXPECT_EQ(7.2, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(-4.33333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(-1.615385, matrix->getEntry(2, 2), 0.0001);
	EXPECT_EQ(4.5, matrix->getEntry(0, 3));
	EXPECT_EQ(-4, matrix->getEntry(1, 3));
	EXPECT_NEAR(-6.923077, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(4.33333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1.615385, matrix->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, matrix->getEntry(0, 3));
	EXPECT_EQ(4, matrix->getEntry(1, 3));
	EXPECT_NEAR(6.923077, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_NEAR(4.33333, matrix2->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix2->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix2->getEntry(2, 0));
	EXPECT_EQ(0, matrix2->getEntry(2, 1));
	EXPECT_NEAR(-1.61538, matrix2->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(4, matrix2->getEntry(1, 3));
	EXPECT_NEAR(6.92307, matrix2->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(4.33333, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(-1.615385, matrix->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4.5, matrix->getEntry(0, 3));
	EXPECT_EQ(4, matrix->getEntry(1, 3));
	EXPECT_NEAR(6.923077, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(-3.66666, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-2.66666, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(-1.72727, matrix->getEntry(2, 2), 0.001);
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_NEAR(-3.33333, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-6.90909, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-2, matrix->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(3.66666, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1.72727, matrix->getEntry(2, 2), 0.001);
	EXPECT_EQ(-4, matrix->getEntry(0, 3));
	EXPECT_NEAR(3.33333, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(6.90909, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduceMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, 2, 3.5, -4,
				3.5, 1, -5.5, 6,
				5.5, -1, 6.5, 2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, 2, 3.5, -4,
				3.5, 1, -5.5, 6,
				5.5, -1, 6.5, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(5.66666, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(2.66666, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(16.35294, matrix->getEntry(2, 2), 0.0001);
	EXPECT_EQ(-4, matrix->getEntry(0, 3));
	EXPECT_NEAR(-3.33333, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-8.941176, matrix->getEntry(2, 3), 0.0001);
}

//-----------Different dimensions------------
TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6,
				5, 1, 6, 2, 2 };

	Matrix *matrix2 = new Matrix(3, 5);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6,
				5, 1, 6, 2, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(-6, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 3));
	EXPECT_EQ(4, matrix->getEntry(0, 4));
	EXPECT_EQ(-6, matrix->getEntry(1, 4));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 4));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x5_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *matrix2 = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_EQ(-6, matrix->getEntry(1, 3));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	Matrix *matrix2 = new Matrix(3, 3);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
}
TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5 };

	Matrix *matrix2 = new Matrix(4, 3);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
}
TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5, 
				1, 1, 1 };

	Matrix *matrix2 = new Matrix(5, 3);
	*matrix2 = *matrix;

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5,
				1, 1, 1 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(0, matrix->getEntry(4, 0));
	EXPECT_EQ(0, matrix->getEntry(4, 1));
	EXPECT_EQ(0, matrix->getEntry(4, 2));
}

//----------Different sizes-----------

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	Matrix *matrix2 = new Matrix(1, 2);
	*matrix2 = *matrix;

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = *matrix;

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(0, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-4, matrix2->getEntry(1, 2));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *matrix2 = new Matrix(3, 4);
	*matrix2 = *matrix;

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_EQ(-6, matrix->getEntry(1, 3));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 1, 5, 6, 2,
				5, 1, 6, 2, 2,
				5, 1, 6, 2, 3 };

	Matrix *matrix2 = new Matrix(4, 5);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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
	EXPECT_NEAR(-1.8, matrix2->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 1, 5, 6, 2,
				5, 1, 6, 2, 2,
				5, 1, 6, 2, 3 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(-6, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 3));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(0, matrix->getEntry(3, 3));
	EXPECT_EQ(5, matrix->getEntry(0, 4));
	EXPECT_EQ(-13, matrix->getEntry(1, 4));
	EXPECT_EQ(0.4, matrix->getEntry(2, 4));
	EXPECT_NEAR(-1.79999, matrix->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsRowReduce, getRowReduce5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6, 
				3, 1, 5, 6, 2, 2, 
				5, 1, 6, 2, 2, 2, 
				5, 1, 6, 2, 3, 3, 
				5, 6, 4, 2, 1, 5 };

	Matrix *matrix2 = new Matrix(5, 6);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*matrix2 = BMO.getRowReduction(*matrix));
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

TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduce5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6,
				3, 1, 5, 6, 2, 2,
				5, 1, 6, 2, 2, 2,
				5, 1, 6, 2, 3, 3,
				5, 6, 4, 2, 1, 5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
	EXPECT_EQ(5, matrix->getEntry(0, 4));
	EXPECT_EQ(6, matrix->getEntry(0, 5));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 2));
	EXPECT_EQ(-6, matrix->getEntry(1, 3));
	EXPECT_EQ(-13, matrix->getEntry(1, 4));
	EXPECT_EQ(-16, matrix->getEntry(1, 5));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(-1.8, matrix->getEntry(2, 2));
	EXPECT_EQ(-7.2, matrix->getEntry(2, 3));
	EXPECT_EQ(0.4, matrix->getEntry(2, 4));
	EXPECT_EQ(0.8, matrix->getEntry(2, 5));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(-18, matrix->getEntry(3, 3));
	EXPECT_NEAR(29.37333, matrix->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(29.70666, matrix->getEntry(3, 5), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(4, 0));
	EXPECT_EQ(0, matrix->getEntry(4, 1));
	EXPECT_EQ(0, matrix->getEntry(4, 2));
	EXPECT_EQ(0, matrix->getEntry(4, 3));
	EXPECT_NEAR(14.04, matrix->getEntry(4, 4), 0.0001);
	EXPECT_EQ(14.04, matrix->getEntry(4, 5));
}


TEST(VectorEngineBasicMatrixOperationsRowReduce, rowReduceSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0 ,0, 0 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.rowReduce(*matrix));
	EXPECT_EQ(0, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(0, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(0, matrix->getEntry(2, 2));
	EXPECT_NEAR(1, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 3));
}