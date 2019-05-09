#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 9 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(45, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(-45, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -9 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(-5, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(49.5, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(-49.5, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -9.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(-5.5, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5, 
				4,   5.5, 6, 
				7.5, 8,   9.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(47.5, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(-47.5, SimpleMatrixOperations::sum(*matrix));
}
TEST(VectorEngineSimpleMatrixOperationsSum, sumMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				-4,   5.5, 6,
				-7.5, 8,   9.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(21.5, SimpleMatrixOperations::sum(*matrix));
}

//-----Different sizes-----
TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(1, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive1x5)
{
	Matrix *matrix = new Matrix(1, 5);
	*matrix = { 1, 2, 3, 4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(15, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive5x1)
{
	Matrix *matrix = new Matrix(5, 1);
	*matrix = { 1, 2, 3, 4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(15, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = {  1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10, 
				11, 12, 13, 14, 15, 
				16, 17, 18, 19, 20, 
				21, 22, 23, 24, 25 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(325, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive2x5)
{
	Matrix *matrix = new Matrix(2, 5);
	*matrix = { 1, 2, 3, 4, 5, 
				6, 7, 8, 9, 10 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(55, SimpleMatrixOperations::sum(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive5x2)
{
	Matrix *matrix = new Matrix(5, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6,
				7, 8,
				9, 10 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(55, SimpleMatrixOperations::sum(*matrix));
}

//--------No Values--------

TEST(VectorEngineSimpleMatrixOperationsSum, sumNoValue)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
}


//---------Special cases-----------

TEST(VectorEngineSimpleMatrixOperationsSum, sumSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(SimpleMatrixOperations::sum(*matrix));
	EXPECT_EQ(1, SimpleMatrixOperations::sum(*matrix));
}