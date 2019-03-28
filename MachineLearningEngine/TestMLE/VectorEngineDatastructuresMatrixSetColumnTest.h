#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1.4);
	matrixColumn->setEntry(1, 0, 4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1.4);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixNotSetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixColumn = new Matrix(2, 1);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(matrixColumn->getEntry(0,0), matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(matrixColumn->getEntry(1, 0), matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1.4);
	matrixColumn->setEntry(1, 0, 4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1.4);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixNotSetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrixColumn->getEntry(0,0), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(matrixColumn->getEntry(1,0), matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, -1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHolePositiveMatrixTransposed)
{
	Matrix *matrix = new Matrix(3, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 2);
	matrixRow->setEntry(0, 2, 3);

	matrixRow->transpose();

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(2, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
	EXPECT_EQ(matrix->getEntry(2, 0), matrix->getEntry(2, 0));
	EXPECT_EQ(3, matrix->getEntry(2, 1));
	EXPECT_EQ(matrix->getEntry(2, 2), matrix->getEntry(2, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixVectorOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));

	Matrix *matrixColumn2 = new Matrix(2, 1);
	matrixColumn2->setEntry(0, 0, -1);
	matrixColumn2->setEntry(1, 0, 4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn2));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixVectorNewColumn)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));

	Matrix *matrixColumn2 = new Matrix(2, 1);
	matrixColumn2->setEntry(0, 0, -1);
	matrixColumn2->setEntry(1, 0, 4.6);

	EXPECT_NO_THROW(matrix->setColumn(0, *matrixColumn2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(4.6, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMatrixNewColumnTransposed)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixColumn = new Matrix(2, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, -4.6);

	EXPECT_NO_THROW(matrix->setColumn(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));

	Matrix *matrixColumn2 = new Matrix(3, 1);
	matrixColumn2->setEntry(0, 0, -1);
	matrixColumn2->setEntry(1, 0, 4.6);
	matrixColumn2->setEntry(2, 0, 8);
	matrixColumn2->transpose();

	EXPECT_NO_THROW(matrix->setRow(0, *matrixColumn2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(4.6, matrix->getEntry(0, 1));
	EXPECT_EQ(8, matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
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
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 4);
	matrixColumn->setEntry(2, 0, 8);

	EXPECT_THROW(matrix->setColumn(1, *matrixColumn), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { 1, 4 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { -1, -4 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { 1.4, 4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { -1.4, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { 1, 4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { -1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixColumn = { 1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(6, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1, -4 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1.4, 4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1.4, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1.4, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, 4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { -1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMatrixOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));

	std::vector<double> matrixColumn2 = { -1, 4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn2));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(-1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixMatrixNewColumn)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));

	std::vector<double> matrixColumn2 = { -1, 4.6 };

	EXPECT_NO_THROW(matrix->setColumn(0, matrixColumn2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(4.6, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixSetColumn, setColumnNotSetMatrixVectorNewColumnTransposed)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixColumn = { 1, -4.6 };

	EXPECT_NO_THROW(matrix->setColumn(1, matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(1, matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));

	std::vector<double> matrixRow = { -1, 4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(0, matrixRow));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(4.6, matrix->getEntry(0, 1));
	EXPECT_EQ(8, matrix->getEntry(0, 2));
	EXPECT_EQ(matrix->getEntry(1, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(matrix->getEntry(1, 2), matrix->getEntry(1, 2));
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