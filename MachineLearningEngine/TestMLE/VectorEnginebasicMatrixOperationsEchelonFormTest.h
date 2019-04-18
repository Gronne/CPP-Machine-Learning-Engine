#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, result->getEntry(1, 3));
	EXPECT_EQ(4, result->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(4, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, result->getEntry(1, 3));
	EXPECT_EQ(4, result->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(4, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_NEAR(4, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, result->getEntry(1, 3));
	EXPECT_EQ(-4, result->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_NEAR(4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(-4, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_NEAR(0, result->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(1, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1, result->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4.14285, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4.28571, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_NEAR(0, matrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(1, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1, matrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4.14285, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4.28571, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = *matrix;

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_NEAR(0, result->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(1, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1, result->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4.14285, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4.28571, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_NEAR(0, matrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(1, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1, matrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4.14285, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4.28571, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_NEAR(0, result->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(1, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1, result->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(4.14285, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-4.285714, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_NEAR(0, matrix->getEntry(0, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(1, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1, matrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(4.14285, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-1.71428, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-4.285714, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = *matrix;

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(1, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1, result->getEntry(2, 2), 0.001);
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-2, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(1, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1, matrix->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-2, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(1, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1, result->getEntry(2, 2), 0.001);
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-2, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(1, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1, matrix->getEntry(2, 2), 0.001);
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-2, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(4, matrix->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,  3.5, -4,
				 3.5,  1, -5.5,  6,
				 5.5, -1,  6.5,  2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_NEAR(1, result->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_NEAR(1, result->getEntry(2, 2), 0.001);
	EXPECT_NEAR(0.94964, result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-0.33093, result->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-0.54676, result->getEntry(2, 3), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,  3.5, -4,
				 3.5,  1, -5.5,  6,
				 5.5, -1,  6.5,  2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_NEAR(1, matrix->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 2), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_NEAR(1, matrix->getEntry(2, 2), 0.001);
	EXPECT_NEAR(0.94964, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-0.33093, matrix->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(-0.54676, matrix->getEntry(2, 3), 0.0001);
}

//-----------Different dimensions------------
TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6, 
				5, 1, 6, 2, 2 };

	Matrix *result = new Matrix(3, 5);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_NEAR(-4,result->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-4,result->getEntry(0, 4), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(-2,result->getEntry(1, 3));
	EXPECT_EQ(-2,result->getEntry(1, 4));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_EQ(4, result->getEntry(2, 3));
	EXPECT_EQ(4, result->getEntry(2, 4));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4,
				3, 1, 5, 6, 6,
				5, 1, 6, 2, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(-4, matrix->getEntry(0, 4), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(-2, matrix->getEntry(1, 4));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(4, matrix->getEntry(2, 3));
	EXPECT_EQ(4, matrix->getEntry(2, 4));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, result->getEntry(1, 3));
	EXPECT_EQ(4, result->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(4, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	Matrix *result = new Matrix(3, 3);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
}
TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5 };

	Matrix *result = new Matrix(4, 3);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_EQ(0, result->getEntry(3, 0));
	EXPECT_EQ(0, result->getEntry(3, 1));
	EXPECT_EQ(0, result->getEntry(3, 2));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
}
TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5, 
				1, 1, 1 };

	Matrix *result = new Matrix(5, 3);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_EQ(0, result->getEntry(3, 0));
	EXPECT_EQ(0, result->getEntry(3, 1));
	EXPECT_EQ(0, result->getEntry(3, 2));
	EXPECT_EQ(0, result->getEntry(4, 0));
	EXPECT_EQ(0, result->getEntry(4, 1));
	EXPECT_EQ(0, result->getEntry(4, 2));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm5x3)
{
	Matrix *matrix = new Matrix(5, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5,
				1, 1, 1 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(0, matrix->getEntry(4, 0));
	EXPECT_EQ(0, matrix->getEntry(4, 1));
	EXPECT_EQ(0, matrix->getEntry(4, 2));
}

//----------Different sizes-----------

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	Matrix *result = new Matrix(1, 2);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(2, result->getEntry(0, 1));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5 };


	Matrix *result = new Matrix(2, 3);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(1.4, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0.8, result->getEntry(1, 2));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(1.4, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, result->getEntry(1, 3));
	EXPECT_EQ(4, result->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(4, matrix->getEntry(2, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5, 
				3, 1, 5, 6, 2, 
				5, 1, 6, 2, 2, 
				5, 1, 6, 2, 3 };

	Matrix *result = new Matrix(4, 5);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_NEAR(-4, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_EQ(-2, result->getEntry(1, 3));
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_EQ(4, result->getEntry(2, 3));
	EXPECT_EQ(0, result->getEntry(3, 0));
	EXPECT_EQ(0, result->getEntry(3, 1));
	EXPECT_EQ(0, result->getEntry(3, 2));
	EXPECT_EQ(0, result->getEntry(3, 3));
	EXPECT_NEAR(0, result->getEntry(0, 4), 0.0001);
	EXPECT_NEAR(0, result->getEntry(1, 4), 0.0001);
	EXPECT_NEAR(0, result->getEntry(2, 4), 0.0001);
	EXPECT_NEAR(-1.8, result->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm4x5)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 1, 5, 6, 2,
				5, 1, 6, 2, 2,
				5, 1, 6, 2, 3 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_NEAR(-4, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(-2, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(4, matrix->getEntry(2, 3));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(0, matrix->getEntry(3, 3));
	EXPECT_NEAR(0, matrix->getEntry(0, 4), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(1, 4), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(2, 4), 0.0001);
	EXPECT_NEAR(-1.8, matrix->getEntry(3, 4), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6, 
				3, 1, 5, 6, 2, 2, 
				5, 1, 6, 2, 2, 2, 
				5, 1, 6, 2, 3, 3, 
				5, 6, 4, 2, 1, 5 };

	Matrix *result = new Matrix(5, 6);

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(*result = BMO.getEchelonForm(*matrix));
	EXPECT_EQ(1, result->getEntry(0, 0));
	EXPECT_EQ(0, result->getEntry(0, 1));
	EXPECT_EQ(0, result->getEntry(0, 2));
	EXPECT_NEAR(0, result->getEntry(0, 3), 0.0001);
	EXPECT_EQ(0, result->getEntry(0, 4));
	EXPECT_NEAR(0.03703, result->getEntry(0, 5), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 0));
	EXPECT_EQ(1, result->getEntry(1, 1));
	EXPECT_EQ(0, result->getEntry(1, 2));
	EXPECT_NEAR(0, result->getEntry(1, 3), 0.0001);
	EXPECT_EQ(0, result->getEntry(1, 4));
	EXPECT_NEAR(0.74074, result->getEntry(1, 5), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 0));
	EXPECT_EQ(0, result->getEntry(2, 1));
	EXPECT_EQ(1, result->getEntry(2, 2));
	EXPECT_NEAR(0, result->getEntry(2, 3), 0.0001);
	EXPECT_EQ(0, result->getEntry(2, 4));
	EXPECT_NEAR(-0.14814, result->getEntry(2, 5), 0.0001);
	EXPECT_EQ(0, result->getEntry(3, 0));
	EXPECT_EQ(0, result->getEntry(3, 1));
	EXPECT_EQ(0, result->getEntry(3, 2));
	EXPECT_NEAR(1, result->getEntry(3, 3), 0.0001);
	EXPECT_NEAR(0, result->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(-0.01851, result->getEntry(3, 5), 0.0001);
	EXPECT_EQ(0, result->getEntry(4, 0));
	EXPECT_EQ(0, result->getEntry(4, 1));
	EXPECT_EQ(0, result->getEntry(4, 2));
	EXPECT_NEAR(0, result->getEntry(4, 3), 0.0001);
	EXPECT_EQ(1, result->getEntry(4, 4));
	EXPECT_NEAR(1, result->getEntry(4, 5), 0.0001);
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm5x6)
{
	Matrix *matrix = new Matrix(5, 6);
	*matrix = { 1, 2, 3, 4, 5, 6,
				3, 1, 5, 6, 2, 2,
				5, 1, 6, 2, 2, 2,
				5, 1, 6, 2, 3, 3,
				5, 6, 4, 2, 1, 5 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_NEAR(0, matrix->getEntry(0, 3), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(0, 4));
	EXPECT_NEAR(0.03703, matrix->getEntry(0, 5), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_NEAR(0, matrix->getEntry(1, 3), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(1, 4));
	EXPECT_NEAR(0.74074, matrix->getEntry(1, 5), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_NEAR(0, matrix->getEntry(2, 3), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(2, 4));
	EXPECT_NEAR(-0.14814, matrix->getEntry(2, 5), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_NEAR(1, matrix->getEntry(3, 3), 0.0001);
	EXPECT_NEAR(0, matrix->getEntry(3, 4), 0.0001);
	EXPECT_NEAR(-0.01851, matrix->getEntry(3, 5), 0.0001);
	EXPECT_EQ(0, matrix->getEntry(4, 0));
	EXPECT_EQ(0, matrix->getEntry(4, 1));
	EXPECT_EQ(0, matrix->getEntry(4, 2));
	EXPECT_NEAR(0, matrix->getEntry(4, 3), 0.0001);
	EXPECT_EQ(1, matrix->getEntry(4, 4));
	EXPECT_NEAR(1, matrix->getEntry(4, 5), 0.0001);
}

//----- special case -----
TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm0and1s_1)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 0, 1, 0, 0, 
				0, 0, 0, 1, 
				1, 0, 0, 0, 
				0, 0, 1, 0 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(0, 3));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 3));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(1, matrix->getEntry(3, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm0and1s_2)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 1,
				1, 0, 0, 0,
				0, 0, 1, 0 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(0, 3));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(0, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 3));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(1, matrix->getEntry(3, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm0and1s_3)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 1,
				0, 1, 0, 0,
				0, 0, 1, 0 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
	EXPECT_EQ(0, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(0, 3));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(1, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 3));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
	EXPECT_EQ(1, matrix->getEntry(2, 2));
	EXPECT_EQ(0, matrix->getEntry(2, 3));
	EXPECT_EQ(0, matrix->getEntry(3, 0));
	EXPECT_EQ(0, matrix->getEntry(3, 1));
	EXPECT_EQ(0, matrix->getEntry(3, 2));
	EXPECT_EQ(1, matrix->getEntry(3, 3));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0 ,0, 0 };

	BasicMatrixOperations BMO;
	EXPECT_NO_THROW(BMO.echelonForm(*matrix));
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