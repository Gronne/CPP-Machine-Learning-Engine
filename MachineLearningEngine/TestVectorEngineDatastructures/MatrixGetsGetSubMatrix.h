#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixGetsGetSubMatrix, subMatrix_1x1_0_0_1_1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	int startRow = 0;
	int startColumn = 0;
	int rows = 1;
	int columns = 1;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_2x2_0_0_1_1)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	int startRow = 0;
	int startColumn = 0;
	int rows = 1;
	int columns = 1;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_2x2_1_1_1_1)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 4);

	int startRow = 1;
	int startColumn = 1;
	int rows = 1;
	int columns = 1;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_2x2_0_0_2_2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2,
				3, 4 };

	int startRow = 0;
	int startColumn = 0;
	int rows = 2;
	int columns = 2;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_2_2_1_1)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = {  1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25};

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 13);

	int startRow = 2;
	int startColumn = 2;
	int rows = 1;
	int columns = 1;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_1_2_2_2)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	Matrix *result = new Matrix(2, 2);
	*result = { 8, 9,
				13, 14 };

	int startRow = 1;
	int startColumn = 2;
	int rows = 2;
	int columns = 2;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_1_2_3_2)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	Matrix *result = new Matrix(3, 2);
	*result = { 8, 9,
				13, 14,
				18, 19};

	int startRow = 1;
	int startColumn = 2;
	int rows = 3;
	int columns = 2;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_1_2_2_3)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	Matrix *result = new Matrix(2, 3);
	*result = { 8, 9, 10,
				13, 14, 15 };

	int startRow = 1;
	int startColumn = 2;
	int rows = 2;
	int columns = 3;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_1_1_4_4)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	Matrix *result = new Matrix(4, 4);
	*result = { 7, 8, 9, 10,
				12, 13, 14, 15,
				17, 18, 19, 20,
				22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 1;
	int rows = 4;
	int columns = 4;

	EXPECT_NO_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
	EXPECT_TRUE(*result == matrix->getSubMatrix(startRow, startColumn, rows, columns));
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_startRow_toLow)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = -1;
	int startColumn = 1;
	int rows = 1;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}

TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_startRow_toLarge)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 5;
	int startColumn = 1;
	int rows = 1;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_startColumn_toLow)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = -1;
	int rows = 1;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_startColumn_toLarge)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 5;
	int rows = 1;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_Rows_toLow)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 1;
	int rows = 0;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_Rows_toLarge)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 1;
	int rows = 5;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_Columns_toLow)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 1;
	int rows = 1;
	int columns = 0;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_Columns_toLarge)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 1;
	int rows = 1;
	int columns = 5;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_startRowPlusRows_toLarge)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 2;
	int startColumn = 1;
	int rows = 4;
	int columns = 1;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}


TEST(MatrixGetsGetSubMatrix, subMatrix_5x5_exception_startColumnPlusColumns_toLarge)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2,  3,  4,  5,
				 6,  7,  8,  9, 10,
				11, 12, 13, 14, 15,
				16, 17, 18, 19, 20,
				21, 22, 23, 24, 25 };

	int startRow = 1;
	int startColumn = 2;
	int rows = 1;
	int columns = 4;

	EXPECT_THROW(matrix->getSubMatrix(startRow, startColumn, rows, columns), std::exception);
}



