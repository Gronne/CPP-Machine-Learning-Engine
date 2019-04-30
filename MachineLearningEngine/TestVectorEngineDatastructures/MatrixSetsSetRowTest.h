#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSetsSetRow, setRowSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, 4, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				1, 4, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { -1, -4, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,  2,  3,
				-1, -4, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1.5, 4.5, 8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,   2,   3,
				1.5, 4.5, 8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { -1.5, -4.5, -8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,    2,    3,
				-1.5, -4.5, -8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, 4.6, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2,   3,
				1, 4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { -1, -4.6, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,  2,    3,
				-1, -4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, -4.6, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,  2,    3,
				1, -4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixNotsetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixRow = new Matrix(1, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { 1,						   2,						  3,
				matrixRow->getEntry(0, 0), matrixRow->getEntry(0, 1), matrixRow->getEntry(0, 2) };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, 4, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4,					    8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { -1, -4, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    -4,					    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1.5, 4.5, 8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1.5,					4.5,				    8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { -1.5, -4.5, -8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1.5,				    -4.5,				    -8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixNotsetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0),    matrix->getEntry(0, 1),    matrix->getEntry(0, 2),
				matrixRow->getEntry(0, 0), matrixRow->getEntry(0, 1), matrixRow->getEntry(0, 2) };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, 4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { -1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    -4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixHolePositiveMatrixTransposed)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *matrixRow = new Matrix(3, 1);
	*matrixRow = { 1, 4, 8 };

	matrixRow->transpose();

	Matrix *result = new Matrix(3, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4,					    8,
				matrix->getEntry(2, 0), matrix->getEntry(2, 1), matrix->getEntry(2, 2) };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixmatrixOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);

	*matrixRow = { -1, 4.5, 8 };

	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMatrixNewRow)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);

	*matrixRow = { -1, 4.5, 8 };

	*result = { -1,  4.5, 8,
				 1, -4.5, 8 };

	EXPECT_NO_THROW(matrix->setRow(0, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMatrixNewRowTransposed)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);

	Matrix *matrixRow2 = new Matrix(1, 2);
	matrixRow2->setEntry(0, 0, -1);
	matrixRow2->setEntry(0, 1, 4.6);
	matrixRow2->transpose();

	*result = { -1,	 matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				4.6, -4.5,				    8 };

	EXPECT_NO_THROW(matrix->setColumn(0, *matrixRow2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowExceptionNegativeRowNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);

	EXPECT_THROW(matrix->setRow(-1, *matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowExceptionTooLargeRowNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);

	EXPECT_THROW(matrix->setRow(4, *matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowExceptionTooSmallRowMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 2);

	EXPECT_THROW(matrix->setRow(1, *matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowExceptionTooLargeRowMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 4);

	EXPECT_THROW(matrix->setRow(1, *matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	std::vector<double> matrixRow = { 1, 4, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				1, 4, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixRow = { -1, -4, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,  2,  3,
				-1, -4, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixRow = { 1.5, 4.5, 8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				1.5, 4.5, 8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixRow = { -1.5, -4.5, -8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,    2,    3,
				-1.5, -4.5, -8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixRow = { 1, 4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				1, 4.5, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				1, -4.5, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixRow = { 1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,  2, 3,
				1, -4.5, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4,					    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { -1, -4, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    -4,					    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1.5, 4.5, 8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1.5,				    4.5,				    8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { -1.5, -4.5, -8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1.5,				    -4.5,				    -8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { -1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    -4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixVectorOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,					    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);

	matrixRow = { -1, 4.5, -8 };
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixVectorNewRow)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,					    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);

	matrixRow = { -1, 4.5, -8 };
	*result = { -1,	  4.5,	-8,
				 1,	 -4.5,	 8 };

	EXPECT_NO_THROW(matrix->setRow(0, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowNotSetMatrixVectorNewRowTransposed)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, -4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,					    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);

	matrixRow = { -1, 4.5 };
	*result = { -1,  matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				4.5, -4.5,					 8 };

	EXPECT_NO_THROW(matrix->setColumn(0, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetRow, setRowExceptionNegativeRowNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_THROW(matrix->setRow(-1, matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowExceptionTooLargeRowNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_THROW(matrix->setRow(4, matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowExceptionTooSmallRowVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1 };

	EXPECT_THROW(matrix->setRow(1, matrixRow), std::exception);
}

TEST(MatrixSetsSetRow, setRowExceptionTooLargeRowVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8, 16 };

	EXPECT_THROW(matrix->setRow(1, matrixRow), std::exception);
}