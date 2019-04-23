#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixHolePositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixHoleNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixDecimalPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixDecimalNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixMixedPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixMixedNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixMixedMixedMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixNotsetColumnMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixHolePositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixHoleNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixDecimalPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixDecimalNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixNotsetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0),    matrix->getEntry(0, 1),    matrix->getEntry(0, 2),
				matrixRow->getEntry(0, 0), matrixRow->getEntry(0, 1), matrixRow->getEntry(0, 2) };

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMixedPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMixedNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMixedMixedMatrix)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixHolePositiveMatrixTransposed)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixmatrixOverwritten)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMatrixNewRow)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMatrixNewRowTransposed)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionNegativeRowNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);

	EXPECT_THROW(matrix->setRow(-1, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionTooLargeRowNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 3);

	EXPECT_THROW(matrix->setRow(4, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionTooSmallRowMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 2);

	EXPECT_THROW(matrix->setRow(1, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionTooLargeRowMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixRow = new Matrix(1, 4);

	EXPECT_THROW(matrix->setRow(1, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixHolePositiveVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixHoleNegativeVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixDecimalPositiveVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixDecimalNegativeVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixMixedPositiveVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixMixedNegativeVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowSetMatrixMixedMixedVector)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4,					    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { -1, -4, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    -4,					    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1.5, 4.5, 8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1.5,				    4.5,				    8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { -1.5, -4.5, -8.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1.5,				    -4.5,				    -8.5 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4.5, 8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    4.5,				    8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { -1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				-1,					    -4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, -4.5, -8 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrix->getEntry(0, 1), matrix->getEntry(0, 2),
				1,					    -4.5,				    -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixVectorOverwritten)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixVectorNewRow)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowNotSetMatrixVectorNewRowTransposed)
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

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionNegativeRowNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_THROW(matrix->setRow(-1, matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionTooLargeRowNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_THROW(matrix->setRow(4, matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionTooSmallRowVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1 };

	EXPECT_THROW(matrix->setRow(1, matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetRow, setRowExceptionTooLargeRowVector)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<double> matrixRow = { 1, 4, 8, 16 };

	EXPECT_THROW(matrix->setRow(1, matrixRow), std::exception);
}