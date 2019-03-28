#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(45, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -4);
	matrix->setEntry(1, 1, -5);
	matrix->setEntry(1, 2, -6);
	matrix->setEntry(2, 0, -7);
	matrix->setEntry(2, 1, -8);
	matrix->setEntry(2, 2, -9);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(-45, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, -5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, -7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, -9);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(-5, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 4.5);
	matrix->setEntry(1, 1, 5.5);
	matrix->setEntry(1, 2, 6.5);
	matrix->setEntry(2, 0, 7.5);
	matrix->setEntry(2, 1, 8.5);
	matrix->setEntry(2, 2, 9.5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(49.5, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -4.5);
	matrix->setEntry(1, 1, -5.5);
	matrix->setEntry(1, 2, -6.5);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, -8.5);
	matrix->setEntry(2, 2, -9.5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(-49.5, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, 4.5);
	matrix->setEntry(1, 1, -5.5);
	matrix->setEntry(1, 2, 6.5);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, 8.5);
	matrix->setEntry(2, 2, -9.5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(-5.5, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5.5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7.5);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9.5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(47.5, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -4);
	matrix->setEntry(1, 1, -5.5);
	matrix->setEntry(1, 2, -6);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, -8);
	matrix->setEntry(2, 2, -9.5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(-47.5, sumValue);
}
TEST(VectorEngineSimpleMatrixOperationsSum, sumMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, -4);
	matrix->setEntry(1, 1, 5.5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9.5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(21.5, sumValue);
}

//-----Different sizes-----
TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(1, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive1x5)
{
	Matrix *matrix = new Matrix(1, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(0, 4, 5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(15, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive5x1)
{
	Matrix *matrix = new Matrix(5, 1);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(3, 0, 4);
	matrix->setEntry(4, 0, 5);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(15, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(0, 4, 5);
	matrix->setEntry(1, 0, 6);
	matrix->setEntry(1, 1, 7);
	matrix->setEntry(1, 2, 8);
	matrix->setEntry(1, 3, 9);
	matrix->setEntry(1, 4, 10); 
	matrix->setEntry(2, 0, 11);
	matrix->setEntry(2, 1, 12);
	matrix->setEntry(2, 2, 13);
	matrix->setEntry(2, 3, 14); 
	matrix->setEntry(2, 4, 15);
	matrix->setEntry(3, 0, 16);
	matrix->setEntry(3, 1, 17);
	matrix->setEntry(3, 2, 18);
	matrix->setEntry(3, 3, 19);
	matrix->setEntry(3, 4, 20);
	matrix->setEntry(4, 0, 21);
	matrix->setEntry(4, 1, 22);
	matrix->setEntry(4, 2, 23);
	matrix->setEntry(4, 3, 24);
	matrix->setEntry(4, 4, 25);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(325, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive2x5)
{
	Matrix *matrix = new Matrix(2, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(0, 4, 5);
	matrix->setEntry(1, 0, 6);
	matrix->setEntry(1, 1, 7);
	matrix->setEntry(1, 2, 8);
	matrix->setEntry(1, 3, 9);
	matrix->setEntry(1, 4, 10);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(55, sumValue);
}

TEST(VectorEngineSimpleMatrixOperationsSum, sumHolePositive5x2)
{
	Matrix *matrix = new Matrix(5, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(3, 0, 4);
	matrix->setEntry(4, 0, 5);
	matrix->setEntry(0, 1, 6);
	matrix->setEntry(1, 1, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(3, 1, 9);
	matrix->setEntry(4, 1, 10);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(55, sumValue);
}

//--------No Values--------

TEST(VectorEngineSimpleMatrixOperationsSum, sumNoValue)
{
	Matrix *matrix = new Matrix(3, 3);

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
}


//---------Special cases-----------

TEST(VectorEngineSimpleMatrixOperationsSum, sumSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	double sumValue;

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(sumValue = SMO.sum(*matrix));
	EXPECT_EQ(1, SMO.sum(*matrix));
}