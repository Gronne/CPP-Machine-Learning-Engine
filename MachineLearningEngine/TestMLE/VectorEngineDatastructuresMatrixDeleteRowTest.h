#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDeleteRow, DRHolePositive)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRHoleNegative)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRHoleMixed)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRDoublePositive)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRDoubleNegative)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRDoubleMixed)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRMixedPositive)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRMixedNegative)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRMixedMixed)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRHoleZero)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRDecimalZero)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRDoubleDelete)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRTripleDelete)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRException1)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_THROW(matrix->deleteRow(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRException2)
{
	Matrix *matrix = new Matrix(3, 3);
	EXPECT_THROW(matrix->deleteRow(matrix->getNumberOfRows()), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(1, 3);
	EXPECT_THROW(matrix->deleteRow(0), std::exception);
}

//-----------

TEST(VectorEngineDatastructurMatrixDeleteRow, DR2x3)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DR3x2)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DR2x4)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DR4x2)
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
TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_1)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_2)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_3)
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
TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_Exception1)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 4 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_Exception2)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { -1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_Exception3)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { -1, 0, 1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_Exception4)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 0, 1, 4 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_Exception5)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 4, 0, 1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRV_Exception6)
{
	Matrix *matrix = new Matrix(2, 4);
	std::vector<int> rows = { 0, 1, -1 };

	EXPECT_THROW(matrix->deleteRow(rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}




//-----------Delete with matrixs--------------
TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_1)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_2_r)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_2_c)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_3_r)
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

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_3_c)
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
TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception1)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, 4);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception2)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix();
	rows->setEntry(0, 0, -1);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception3_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 1, 2, 4 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception3_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 1, 2, 4 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception4_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { -1, 1, 2 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception4_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { -1, 1, 2 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception5_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 1, 2, -1 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception5_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 1, 2, -1 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception6_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 1);
	*rows = { 4, 2, 3 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception6_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(1, 3);
	*rows = { 4, 2, 3 };

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception7_r)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(3, 2);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeleteRow, DRM_Exception7_c)
{
	Matrix *matrix = new Matrix(2, 4);

	Matrix *rows = new Matrix(2, 3);

	EXPECT_THROW(matrix->deleteRow(*rows), std::exception);
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}
