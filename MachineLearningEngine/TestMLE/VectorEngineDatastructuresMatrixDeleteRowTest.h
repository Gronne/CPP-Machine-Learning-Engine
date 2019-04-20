#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 9 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				7, 8, 9 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, -2, -3,
				-7, -8, -9 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -9 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, 2, -3,
				-7, 8, -9 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoublePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1.5, 2.5, 3.5,
				7.5, 8.5, 9.5 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoubleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -2.5, -3.5,
				-7.5, -8.5, -9.5 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoubleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -9.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, 2.5, -3.5,
				-7.5, 8.5, -9.5 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1.5, 2, 3.5,
				7.5, 8, 9.5 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -2, -3.5,
				-7.5, -8, -9.5 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   -3.5,
				-4,   5.5, -6,
				-7.5, 8,   -9.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, 2, -3.5,
				-7.5, 8, -9.5 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

//-------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDecimalZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0.0, 0.0, 0.0,
				0.0, 0.0, 0.0,
				0.0, 0.0, 0.0 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0.0, 0.0, 0.0,
				0.0, 0.0, 0.0 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

//------------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoubleDelete)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	Matrix *result = new Matrix(1, 3);
	*result = { 1, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowTripleDelete)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = {  1,  2,  3,
				 4,  5,  6,
				 7,  8,  9,
				10, 11, 12};

	Matrix *result = new Matrix(1, 3);
	*result = { 1, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

//-------------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowException1)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_THROW(matrix->deleteRow(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowException2)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_THROW(matrix->deleteRow(matrix->getNumberOfRows()), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(1, 3);
	EXPECT_THROW(matrix->deleteRow(0), std::exception);
}

//-----------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(1, 3);
	*result = { 1, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				4, 5, 
				7, 8 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2, 
				7, 8 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4, 
				4, 5, 6, 7 };

	Matrix *result = new Matrix(1, 4);
	*result = { 1, 2, 3, 4 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow4x2)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6, 
				7, 8 };

	Matrix *result = new Matrix(3, 2);
	*result = { 1, 2, 
				5, 6,
				7, 8 };

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}