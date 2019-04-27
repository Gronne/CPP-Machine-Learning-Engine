#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.getInverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getinverseDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 1.5 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.getInverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseExceptionNotSquare2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				4, 5, 
				4, 5 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.getInverse(*matrix), std::exception);
}


TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_EQ(1, SMO.getInverse(*matrix).getEntry(0,0));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 1 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 1 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5,
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*matrix), SMO.getInverse(*matrix), 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, getInverseSize5x5Time)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.getInverse(*matrix*2));
}

//--------------------------------------------------

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -1 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -1 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 1.5 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsInverse, inverseExceptionNotSquare2)
{
	Matrix *matrix = new Matrix(3, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}


TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_EQ(-0.2, matrix->getEntry(0, 0));
	EXPECT_EQ(0.4, matrix->getEntry(0, 1));
	EXPECT_NEAR(0.6, matrix->getEntry(1, 0), 0.0001);
	EXPECT_EQ(-0.2, matrix->getEntry(1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	Matrix *result = new Matrix();
	*result = *matrix;

	TypeMatrix TM;
	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix));
	EXPECT_TRUE(TM.isEqual(BMO.getEchelonInverse(*result), *matrix, 0.0001));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSize5x5Time)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5,
				6, -2, 3,  1,  1,
				2,  3, 4, -5,  6,
				7,  2, 1,  1,  2,
				3,  4, 5,  6, -7 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.inverse(*matrix*2));
}

TEST(VectorEngineSimpleMatrixOperationsInverse, InverseSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 1,
				0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.inverse(*matrix), std::exception);
}