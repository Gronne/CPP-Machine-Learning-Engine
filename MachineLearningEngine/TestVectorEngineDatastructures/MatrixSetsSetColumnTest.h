#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSetsSetColumn, setColumnSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 1, 3, 
				4, 4, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, -1, 3, 
				4, -4, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1.4);
	matrixColumn->setEntry(1, 0, 4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 1.4, 3, 
				4, 4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1.4);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, -1.4, 3, 
				4, -4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 1, 3,
				4, 4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, -1,   3,
				4, -4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { 1,  1,   3,
				4, -4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixNotSetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *matrixColumn = new Matrix(2, 1);

	Matrix *result = new Matrix(2, 3);
	*result = { 1, matrixColumn->getEntry(0, 0), 3,
				4, matrixColumn->getEntry(1, 0), 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), 4, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1.4);
	matrixColumn->setEntry(1, 0, 4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1.4, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1.4);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1.4, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixNotSetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixColumn = new Matrix(2, 1);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrixColumn->getEntry(0, 0), matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), matrixColumn->getEntry(1, 0), matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixHolePositiveMatrixTransposed)
{
	Matrix *matrix = new Matrix(3, 3);
	Matrix *matrixRow = new Matrix(1, 3);
	*matrixRow = { 1, 2, 3 };
	matrixRow->transpose();

	Matrix *result = new Matrix(3, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), 2, matrix->getEntry(1, 2),
				matrix->getEntry(2, 0), 3, matrix->getEntry(2, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixVectorOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);


	Matrix *matrixColumn2 = new Matrix(2, 1);
	matrixColumn2->setEntry(0, 0, -1);
	matrixColumn2->setEntry(1, 0, 4.6);

	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixVectorNewColumn)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);


	Matrix *matrixColumn2 = new Matrix(2, 1);
	matrixColumn2->setEntry(0, 0, -1);
	matrixColumn2->setEntry(1, 0, 4.6);

	*result = { -1,    1,   matrix->getEntry(0, 2),
				 4.6, -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(0, *matrixColumn2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMatrixNewColumnTransposed)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);

	Matrix *matrixColumn2 = new Matrix(3, 1);
	*matrixColumn2 = { -1, 4.6, 8 };
	matrixColumn2->transpose();

	*result = { -1,                      4.6, 8,
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setRow(0, *matrixColumn2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnExceptionNegativeColumnNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	EXPECT_THROW(matrix->setColumn(-1, *matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnExceptionTooLargeColumnNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	EXPECT_THROW(matrix->setColumn(3, *matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnExceptionTooSmallColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(1, 1);
	matrixColumn->setEntry(0, 0, 1);

	EXPECT_THROW(matrix->setColumn(1, *matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnExceptionTooLargeColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(3, 1);
	*matrixColumn = { 1, 4, 8 };

	EXPECT_THROW(matrix->setColumn(1, *matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	std::vector<double> matrixColumn = { 1, 4 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 1, 3, 
				4, 4, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixColumn = { -1, -4 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, -1, 3,
				4, -4, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixColumn = { 1.4, 4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 1.4, 3,
				4, 4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixColumn = { -1.4, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, -1.4, 3,
				4, -4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixColumn = { 1, 4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 1,   3,
				4, 4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixColumn = { -1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, -1,   3,
				4, -4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	std::vector<double> matrixColumn = { 1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1,  1,   3,
				4, -4.6, 6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), 4, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1, -4 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1.4, 4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1.4, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1.4, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1.4, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMatrixOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);

	std::vector<double> matrixColumn2 = { -1, 4.6 };

	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0),  4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixMatrixNewColumn)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);

	std::vector<double> matrixColumn2 = { -1, 4.6 };

	*result = { -1,    1,   matrix->getEntry(1, 2),
				 4.6, -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(0, matrixColumn2));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnNotSetMatrixVectorNewColumnTransposed)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);

	std::vector<double> matrixRow = { -1, 4.6, 8 };

	*result = { -1,						 4.6, 8,
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setRow(0, matrixRow));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetColumn, setColumnExceptionNegativeColumnNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	EXPECT_THROW(matrix->setColumn(-1, matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnExceptionTooLargeColumnNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	EXPECT_THROW(matrix->setColumn(3, matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnExceptionTooSmallColumnVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1 };

	EXPECT_THROW(matrix->setColumn(1, matrixColumn), std::exception);
}

TEST(MatrixSetsSetColumn, setColumnExceptionTooLargeColumnVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4, 8 };

	EXPECT_THROW(matrix->setColumn(1, matrixColumn), std::exception);
}