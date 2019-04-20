#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 9 };

	Matrix *result = new Matrix(3, 2);
	*result = { 1, 3,
				4, 6,
				7, 9 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };

	Matrix *result = new Matrix(3, 2);
	*result = { -1, -3,
				-4, -6,
				-7, -9 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -9 };

	Matrix *result = new Matrix(3, 2);
	*result = { -1, -3,
				4, 6,
				-7, -9 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoublePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };

	Matrix *result = new Matrix(3, 2);
	*result = { 1.5, 3.5,
				4.5, 6.5,
				7.5, 9.5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoubleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };

	Matrix *result = new Matrix(3, 2);
	*result = { -1.5, -3.5,
				-4.5, -6.5,
				-7.5, -9.5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoubleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -9.5 };

	Matrix *result = new Matrix(3, 2);
	*result = { -1.5, -3.5,
				 4.5,  6.5,
				-7.5, -9.5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };

	Matrix *result = new Matrix(3, 2);
	*result = { 1.5, 3.5,
				4,   6,
				7.5, 9.5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 2);
	*result = { -1.5, -3.5,
				-4,   -6,
				-7.5, -9.5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2,    3.5,
				-4,   -5.5,  6,
				 7.5, -8,   -9.5 };

	Matrix *result = new Matrix(3, 2);
	*result = { -1.5,  3.5,
				-4,    6,
				 7.5, -9.5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

//-------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	Matrix *result = new Matrix(3, 2);
	*result = { 0, 0,
				0, 0, 
				0, 0 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDecimalZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0.0, 0.0, 0.0,
				0.0, 0.0, 0.0,
				0.0, 0.0, 0.0 };

	Matrix *result = new Matrix(3, 2);
	*result = { 0.0, 0.0,
				0.0, 0.0,
				0.0, 0.0 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

//------------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoubleDelete)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 9 };

	Matrix *result = new Matrix(3, 1);
	*result = { 1, 4, 7 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnTripleDelete)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8,
				9, 1, 2, 3 };

	Matrix *result = new Matrix(3, 1);
	*result = {1, 5, 9};

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

//-------------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnException1)
{
	Matrix *matrix = new Matrix(3, 3);

	EXPECT_THROW(matrix->deleteColumn(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnException2)
{
	Matrix *matrix = new Matrix(3, 3);

	EXPECT_THROW(matrix->deleteColumn(matrix->getNumberOfColumns()), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(3, 1);

	EXPECT_THROW(matrix->deleteColumn(0), std::exception);
}

//-----------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 3,
				4, 6 };
	
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	Matrix *result = new Matrix(3, 1);
	*result = { 1, 3, 5 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4, 
				4, 5, 6, 7 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 3, 4, 
				4, 6, 7 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn4x2)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6,
				7, 8 };

	Matrix *result = new Matrix(4, 1);
	*result = { 1, 3, 5, 7 };

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_TRUE(*result == *matrix);
}