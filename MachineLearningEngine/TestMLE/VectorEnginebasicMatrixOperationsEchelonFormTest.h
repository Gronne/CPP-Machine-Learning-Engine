#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormHolePositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormHoleNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1, -2, -3, -4,
				-3, -1, -5, -6,
				-5, -1, -6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, 4,
				0, 1, 0, -2,
				0, 0, 1, -4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormHoleMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, -2, 3, -4,
				3, -1, 5, -6,
				5, -1, 6, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4,
				0, 1, 0, -2,
				0, 0, 1, -4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, 4.28571 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2.5, 3.5, 4.5,
				3.5, 1.5, 5.5, 6.5,
				5.5, 1.5, 6.5, 2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, 4.28571 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4.14285, 
				0, 1, 0, -1.71428, 
				0, 0, 1,  4.28571 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-3.5, -1.5, -5.5, -6.5,
				-5.5, -1.5, -6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, 4.28571 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, -4.285714 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, -4.285714 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormMixedPositive)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, 2, 3.5, 4,
				3.5, 1, 5.5, 6,
				5.5, 1, 6.5, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1, 4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormMixedNegative)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5, -2, -3.5, -4,
				-3.5, -1, -5.5, -6,
				-5.5, -1, -6.5, -2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonFormMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,  3.5, -4,
				 3.5,  1, -5.5,  6,
				 5.5, -1,  6.5,  2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  0.94964,
				0, 1, 0, -0.33093,
				0, 0, 1, -0.54676 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormMixedMixed)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { -1.5,  2,  3.5, -4,
				 3.5,  1, -5.5,  6,
				 5.5, -1,  6.5,  2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  0.94964,
				0, 1, 0, -0.33093,
				0, 0, 1, -0.54676 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

//-----------Different dimensions------------
TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4, 
				3, 1, 5, 6, 6, 
				5, 1, 6, 2, 2 };

	Matrix *result = new Matrix(3, 5);
	*result = { 1, 0, 0, -4, -4,
				0, 1, 0, -2, -2,
				0, 0, 1,  4,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x5)
{
	Matrix *matrix = new Matrix(3, 5);
	*matrix = { 1, 2, 3, 4, 4,
				3, 1, 5, 6, 6,
				5, 1, 6, 2, 2 };

	Matrix *result = new Matrix(3, 5);
	*result = { 1, 0, 0, -4, -4,
				0, 1, 0, -2, -2,
				0, 0, 1,  4,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6 };

	Matrix *result = new Matrix(3, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}
TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3, 
				3, 1, 5, 
				5, 1, 6, 
				2, 1, 5 };

	Matrix *result = new Matrix(4, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1,
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5,
				5, 1, 6,
				2, 1, 5 };

	Matrix *result = new Matrix(4, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1,
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
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
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1,
				0, 0, 0,
				0, 0, 0 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm5x3)
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

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

//----------Different sizes-----------

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm1x2)
{
	Matrix *matrix = new Matrix(1, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5 };


	Matrix *result = new Matrix(2, 3);
	*result = { 1, 0, 1.4,
				0, 1, 0.8 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 1, 5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 0, 1.4,
				0, 1, 0.8 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4, 
				3, 1, 5, 6, 
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm3x4_2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 1, 5, 6,
				5, 1, 6, 2 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0, -4,
				0, 1, 0, -2,
				0, 0, 1,  4 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, getEchelonForm4x5)
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

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm4x5)
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

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
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
	*result = { 1, 0, 0, 0, 0,  0.03703,
				0, 1, 0, 0, 0,  0.74074,
				0, 0, 1, 0, 0, -0.14814,
				0, 0, 0, 1, 0, -0.01851,
				0, 0, 0, 0, 1,  1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm5x6)
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
				0, 0, 0, 0, 1,  1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

//----- special case -----
TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm0and1s_1)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 0, 1, 0, 0, 
				0, 0, 0, 1, 
				1, 0, 0, 0, 
				0, 0, 1, 0 };

	Matrix *result = new Matrix(4, 4);
	*result = { 1, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm0and1s_2)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 1,
				1, 0, 0, 0,
				0, 0, 1, 0 };

	Matrix *result = new Matrix(4, 4);
	*result = { 1, 0, 0, 0,
				0, 0, 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonForm0and1s_3)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 1,
				0, 1, 0, 0,
				0, 0, 1, 0 };

	Matrix *result = new Matrix(4, 4);
	*result = { 0, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineBasicMatrixOperationsEchelonForm, echelonFormSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0 ,0, 0 };

	Matrix *result = new Matrix(3, 4);
	*result = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(*matrix = BasicMatrixOperations::getEchelonForm(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrix, *result, 0.0001));
}