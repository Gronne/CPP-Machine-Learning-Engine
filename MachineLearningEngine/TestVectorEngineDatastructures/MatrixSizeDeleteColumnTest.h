#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSizeDeleteColumn, DCSHolePositive)
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

TEST(MatrixSizeDeleteColumn, DCSHoleNegative)
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

TEST(MatrixSizeDeleteColumn, DCSHoleMixed)
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

TEST(MatrixSizeDeleteColumn, DCSDoublePositive)
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

TEST(MatrixSizeDeleteColumn, DCSDoubleNegative)
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

TEST(MatrixSizeDeleteColumn, DCSDoubleMixed)
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

TEST(MatrixSizeDeleteColumn, DCSMixedPositive)
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

TEST(MatrixSizeDeleteColumn, DCSMixedNegative)
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

TEST(MatrixSizeDeleteColumn, DCSMixedMixed)
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

TEST(MatrixSizeDeleteColumn, DCSHoleZero)
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

TEST(MatrixSizeDeleteColumn, DCSDecimalZero)
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

TEST(MatrixSizeDeleteColumn, DCSDoubleDelete)
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

TEST(MatrixSizeDeleteColumn, DCSTripleDelete)
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

TEST(MatrixSizeDeleteColumn, DCSException1)
{
	Matrix *matrix = new Matrix(3, 3);

	EXPECT_THROW(matrix->deleteColumn(-1), std::exception);
}

TEST(MatrixSizeDeleteColumn, DCSException2)
{
	Matrix *matrix = new Matrix(3, 3);

	EXPECT_THROW(matrix->deleteColumn(matrix->getNumberOfColumns()), std::exception);
}

TEST(MatrixSizeDeleteColumn, DCSExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(3, 1);

	EXPECT_THROW(matrix->deleteColumn(0), std::exception);
}

//-----------

TEST(MatrixSizeDeleteColumn, DCS2x3)
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

TEST(MatrixSizeDeleteColumn, DCS3x2)
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

TEST(MatrixSizeDeleteColumn, DCS2x4)
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

TEST(MatrixSizeDeleteColumn, DCS4x2)
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

//-----------Delete with vectors--------------
TEST(MatrixSizeDeleteColumn, DCV_1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 3, 
				4, 6 };

	std::vector<int> rows = { 1 };

	EXPECT_NO_THROW(matrix->deleteColumn(rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteColumn, DCV_2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 1);
	result->setEntry(0, 0, 1);
	result->setEntry(1, 0, 4);

	std::vector<int> rows = { 1, 2 };

	EXPECT_NO_THROW(matrix->deleteColumn(rows));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteColumn, DCV_3)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	Matrix *result = new Matrix(2, 1);
	result->setEntry(0, 0, 2);
	result->setEntry(1, 0, 6);

	std::vector<int> rows = { 0, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteColumn(rows));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//----exception----
TEST(MatrixSizeDeleteColumn, DCV_Exception1)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 4 };

	EXPECT_THROW(matrix->deleteColumn(rows), std::exception);
}

TEST(MatrixSizeDeleteColumn, DCV_Exception2)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { -1 };

	EXPECT_THROW(matrix->deleteColumn(rows), std::exception);
}

TEST(MatrixSizeDeleteColumn, DCV_Exception3)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { -1, 0, 1 };

	EXPECT_THROW(matrix->deleteColumn(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCV_Exception4)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 0, 1, 4 };

	EXPECT_THROW(matrix->deleteColumn(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCV_Exception5)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 4, 0, 1 };

	EXPECT_THROW(matrix->deleteColumn(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCV_Exception6)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 0, 1, -1 };

	EXPECT_THROW(matrix->deleteColumn(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}




//-----------Delete with matrixs--------------
TEST(MatrixSizeDeleteColumn, DCM_1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 3,
				4, 6 };

	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, 1);

	EXPECT_NO_THROW(matrix->deleteColumn(*rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteColumn, DCM_2_r)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 1);
	result->setEntry(0, 0, 1);
	result->setEntry(1, 0, 4);

	Matrix *rows = new Matrix(2, 1);
	rows->setEntry(0, 0, 1);
	rows->setEntry(1, 0, 2);

	EXPECT_NO_THROW(matrix->deleteColumn(*rows));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteColumn, DCM_2_c)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 1);
	result->setEntry(0, 0, 1);
	result->setEntry(1, 0, 4);

	Matrix *rows = new Matrix(1, 2);
	rows->setEntry(0, 0, 1);
	rows->setEntry(0, 1, 2);

	EXPECT_NO_THROW(matrix->deleteColumn(*rows));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteColumn, DCM_3_r)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	Matrix *result = new Matrix(2, 1);
	result->setEntry(0, 0, 2);
	result->setEntry(1, 0, 6);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 0, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteColumn(*rows));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteColumn, DCM_3_c)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	Matrix *result = new Matrix(2, 1);
	result->setEntry(0, 0, 2);
	result->setEntry(1, 0, 6);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 0, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteColumn(*rows));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//----exception----
TEST(MatrixSizeDeleteColumn, DCM_Exception1)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, 4);

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
}

TEST(MatrixSizeDeleteColumn, DCM_Exception2)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, -1);

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
}

TEST(MatrixSizeDeleteColumn, DCM_Exception3_r)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(3, 1);
	*rows = { 1, 2, 4 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception3_c)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(1, 3);
	*rows = { 1, 2, 4 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception4_r)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(3, 1);
	*rows = { -1, 1, 2 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception4_c)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(1, 3);
	*rows = { -1, 1, 2 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception5_r)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(3, 1);
	*rows = { 1, 2, -1 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception5_c)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(1, 3);
	*rows = { 1, 2, -1 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception6_r)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(3, 1);
	*rows = { 4, 2, 3 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception6_c)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(1, 3);
	*rows = { 4, 2, 3 };

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception7_r)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(3, 2);

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteColumn, DCM_Exception7_c)
{
	Matrix *matrix = new Matrix(2, 4);
	Matrix *rows = new Matrix(2, 3);

	EXPECT_THROW(matrix->deleteColumn(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}
