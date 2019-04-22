#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHolePositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHoleNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedMixedMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixNotSetColumnMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHolePositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHoleNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixNotSetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrixColumn = new Matrix(2, 1);

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), matrixColumn->getEntry(0, 0), matrix->getEntry(0, 2),
				matrix->getEntry(1, 0), matrixColumn->getEntry(1, 0), matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedPositiveMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedNegativeMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedMixedMatrix)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHolePositiveMatrixTransposed)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixVectorOverwritten)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixVectorNewColumn)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMatrixNewColumnTransposed)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionNegativeColumnNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	EXPECT_THROW(matrix->setColumn(-1, *matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionTooLargeColumnNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	EXPECT_THROW(matrix->setColumn(3, *matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionTooSmallColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(1, 1);
	matrixColumn->setEntry(0, 0, 1);

	EXPECT_THROW(matrix->setColumn(1, *matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionTooLargeColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(3, 1);
	*matrixColumn = { 1, 4, 8 };

	EXPECT_THROW(matrix->setColumn(1, *matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHolePositiveVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHoleNegativeVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalPositiveVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalNegativeVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedPositiveVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedNegativeVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedMixedVector)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), 4, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1, -4 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1.4, 4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1.4, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1.4, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1.4, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), 4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 1, matrix->getEntry(1, 2),
				matrix->getEntry(1, 0), -4.6, matrix->getEntry(1, 2) };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMatrixOverwritten)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMatrixNewColumn)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixVectorNewColumnTransposed)
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

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionNegativeColumnNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	EXPECT_THROW(matrix->setColumn(-1, matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionTooLargeColumnNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	EXPECT_THROW(matrix->setColumn(3, matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionTooSmallColumnVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1 };

	EXPECT_THROW(matrix->setColumn(1, matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnExceptionTooLargeColumnVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4, 8 };

	EXPECT_THROW(matrix->setColumn(1, matrixColumn), std::exception);
}