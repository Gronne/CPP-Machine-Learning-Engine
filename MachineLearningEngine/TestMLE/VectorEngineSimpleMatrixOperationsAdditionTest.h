#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsAddition, addHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2,  4,  6,
				8, 10, 12 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6, 
				-8, -10, -12 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,   4, -6, 
				 8, -10, 12 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix * -1));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix * -1));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3,  5,  7,
				9, 11, 13 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -3,  -5,  -7,
				-9, -11, -13 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -3,   5, -7,
				 9, -11, 13};

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix*-1));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix*-1));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addExceptionDiffCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(2, 4);
	SimpleMatrixOperations SMO;

	EXPECT_THROW(SMO.addition(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addExceptionDiffCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	SimpleMatrixOperations SMO;

	EXPECT_THROW(SMO.addition(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addExceptionDiffRow1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	SimpleMatrixOperations SMO;

	EXPECT_THROW(SMO.addition(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addExceptionDiffRow2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(1, 3);
	SimpleMatrixOperations SMO;

	EXPECT_THROW(SMO.addition(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addExceptionDiffRowCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(3, 4);
	SimpleMatrixOperations SMO;

	EXPECT_THROW(SMO.addition(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addExceptionDiffRowCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *matrix2 = new Matrix(1, 2);
	SimpleMatrixOperations SMO;

	EXPECT_THROW(SMO.addition(*matrix, *matrix2), std::exception);
}

//-----------------

TEST(VectorEngineSimpleMatrixOperationsAddition, addDoubleHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3, 4, 5, 
				6, 7, 8 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, 2));
	EXPECT_TRUE(*result == SMO.addition(*matrix, 2));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDoubleHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, 0, 1,
				 2, 3, 4 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, -2));
	EXPECT_TRUE(*result == SMO.addition(*matrix, -2));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDoubleHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				4, 5, 6 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, 0));
	EXPECT_TRUE(*result == SMO.addition(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDoubleDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3.5, 4.5, 5.5, 
				6.5, 7.5, 8.5 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, 2.5));
	EXPECT_TRUE(*result == SMO.addition(*matrix, 2.5));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDoubleDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -0.5, 0.5,
				 1.5,  2.5, 3.5 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, -2.5));
	EXPECT_TRUE(*result == SMO.addition(*matrix, -2.5));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addDoubleDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				4, 5, 6 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, 0.0));
	EXPECT_TRUE(*result == SMO.addition(*matrix, 0.0));
}

//--------Different sizes---------

TEST(VectorEngineSimpleMatrixOperationsAddition, addSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0,0,1);

	Matrix *result = new Matrix();
	SimpleMatrixOperations SMO;

	EXPECT_NO_THROW(*result = SMO.addition(*matrix, *matrix));
	EXPECT_EQ(2, result->getEntry(0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(2, 2);
	*result = { 2, 4,
				6, 8 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(3, 3);
	*result = {  2,  4,  6,
				 8, 10, 12,
				14, 16, 18 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsAddition, addSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = {  1,  2,  3,  4,
				 5,  6,  7,  8,
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	Matrix *result = new Matrix(4, 4);
	*result = {  2,  4,  6,  8,
				10, 12, 14, 16,
				18, 20, 22, 24,
				26, 28, 30, 32 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.addition(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.addition(*matrix, *matrix));
}