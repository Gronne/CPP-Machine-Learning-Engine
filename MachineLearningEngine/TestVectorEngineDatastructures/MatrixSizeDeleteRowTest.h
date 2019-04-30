#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSizeDeleteRow, DRHolePositive)
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

TEST(MatrixSizeDeleteRow, DRHoleNegative)
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

TEST(MatrixSizeDeleteRow, DRHoleMixed)
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

TEST(MatrixSizeDeleteRow, DRDoublePositive)
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

TEST(MatrixSizeDeleteRow, DRDoubleNegative)
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

TEST(MatrixSizeDeleteRow, DRDoubleMixed)
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

TEST(MatrixSizeDeleteRow, DRMixedPositive)
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

TEST(MatrixSizeDeleteRow, DRMixedNegative)
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

TEST(MatrixSizeDeleteRow, DRMixedMixed)
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

TEST(MatrixSizeDeleteRow, DRHoleZero)
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

TEST(MatrixSizeDeleteRow, DRDecimalZero)
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

TEST(MatrixSizeDeleteRow, DRDoubleDelete)
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

TEST(MatrixSizeDeleteRow, DRTripleDelete)
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

TEST(MatrixSizeDeleteRow, DRException1)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_THROW(matrix->deleteRow(-1), std::exception);
}

TEST(MatrixSizeDeleteRow, DRException2)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_THROW(matrix->deleteRow(matrix->getNumberOfRows()), std::exception);
}

TEST(MatrixSizeDeleteRow, DRExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(1, 3);
	EXPECT_THROW(matrix->deleteRow(0), std::exception);
}

//-----------

TEST(MatrixSizeDeleteRow, DR2x3)
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

TEST(MatrixSizeDeleteRow, DR3x2)
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

TEST(MatrixSizeDeleteRow, DR2x4)
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

TEST(MatrixSizeDeleteRow, DR4x2)
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

//-----------Delete with vectors--------------
TEST(MatrixSizeDeleteRow, DRV_1)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2,
				5, 6 };

	std::vector<int> rows = { 1 };

	EXPECT_NO_THROW(matrix->deleteRow(rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteRow, DRV_2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	std::vector<int> rows = { 1, 2 };

	EXPECT_NO_THROW(matrix->deleteRow(rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteRow, DRV_3)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6, 
				7, 8 };

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 3);
	result->setEntry(0, 1, 4);

	std::vector<int> rows = { 0, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteRow(rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//----exception----
TEST(MatrixSizeDeleteRow, DRV_Exception1)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 4 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
}

TEST(MatrixSizeDeleteRow, DRV_Exception2)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { -1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
}

TEST(MatrixSizeDeleteRow, DRV_Exception3)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { -1, 0, 1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRV_Exception4)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 0, 1, 4 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRV_Exception5)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 4, 0, 1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRV_Exception6)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 0, 1, -1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}




//-----------Delete with matrixs--------------
TEST(MatrixSizeDeleteRow, DRM_1)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2,
				5, 6 };

	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, 1);

	EXPECT_NO_THROW(matrix->deleteRow(*rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteRow, DRM_2_r)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	Matrix *rows = new Matrix(2, 1);
	rows->setEntry(0, 0, 1);
	rows->setEntry(1, 0, 2);

	EXPECT_NO_THROW(matrix->deleteRow(*rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteRow, DRM_2_c)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	Matrix *rows = new Matrix(1, 2);
	rows->setEntry(0, 0, 1);
	rows->setEntry(0, 1, 2);

	EXPECT_NO_THROW(matrix->deleteRow(*rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteRow, DRM_3_r)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2, 
				3, 4,
				5, 6, 
				7, 8 };

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 3);
	result->setEntry(0, 1, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 0, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteRow(*rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSizeDeleteRow, DRM_3_c)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2, 
				3, 4,
				5, 6, 
				7, 8 };

	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 3);
	result->setEntry(0, 1, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 0, 2, 3 };

	EXPECT_NO_THROW(matrix->deleteRow(*rows));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//----exception----
TEST(MatrixSizeDeleteRow, DRM_Exception1)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, 4);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
}

TEST(MatrixSizeDeleteRow, DRM_Exception2)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, -1);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
}

TEST(MatrixSizeDeleteRow, DRM_Exception3_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 1, 2, 4 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception3_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 1, 2, 4 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception4_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { -1, 1, 2 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception4_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { -1, 1, 2 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception5_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 1, 2, -1 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception5_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 1, 2, -1 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception6_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 4, 2, 3 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception6_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 4, 2, 3 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception7_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 2);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(MatrixSizeDeleteRow, DRM_Exception7_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(2, 3);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}
