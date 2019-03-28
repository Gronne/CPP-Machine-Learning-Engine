#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, -1);
	matrixRow->setEntry(0, 1, -4);
	matrixRow->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1.4);
	matrixRow->setEntry(0, 1, 4.6);
	matrixRow->setEntry(0, 2, 8.8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, -1.4);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, -8.8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(-1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4.6);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, -1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixNotsetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	Matrix *matrixRow = new Matrix(1, 3);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(matrixRow->getEntry(0, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(matrixRow->getEntry(0, 1), matrix->getEntry(1, 1));
	EXPECT_EQ(matrixRow->getEntry(0, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixHolePositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixHoleNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, -1);
	matrixRow->setEntry(0, 1, -4);
	matrixRow->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixDecimalPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1.4);
	matrixRow->setEntry(0, 1, 4.6);
	matrixRow->setEntry(0, 2, 8.8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixDecimalNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, -1.4);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, -8.8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixNotsetColumnMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(matrixRow->getEntry(0, 0), matrix->getEntry(1, 0));
	EXPECT_EQ(matrixRow->getEntry(0, 1), matrix->getEntry(1, 1));
	EXPECT_EQ(matrixRow->getEntry(0, 2), matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMixedPositiveMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4.6);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMixedNegativeMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, -1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMixedMixedMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixHolePositiveMatrixTransposed)
{
	Matrix *matrix = new Matrix(3, 3);

	Matrix *matrixColumn = new Matrix(3, 1);
	matrixColumn->setEntry(0, 0, 1);
	matrixColumn->setEntry(1, 0, 2);
	matrixColumn->setEntry(2, 0, 3);

	matrixColumn->transpose();

	EXPECT_NO_THROW(matrix->setRow(1, *matrixColumn));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(2, matrix->getEntry(1, 1));
	EXPECT_EQ(3, matrix->getEntry(1, 2));
	EXPECT_EQ(matrix->getEntry(2, 0), matrix->getEntry(2, 0));
	EXPECT_EQ(matrix->getEntry(2, 1), matrix->getEntry(2, 1));
	EXPECT_EQ(matrix->getEntry(2, 2), matrix->getEntry(2, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixmatrixOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));

	Matrix *matrixRow2 = new Matrix(1, 3);
	matrixRow2->setEntry(0, 0, -1);
	matrixRow2->setEntry(0, 1, 4.6);
	matrixRow2->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow2));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMatrixNewRow)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));

	Matrix *matrixRow2 = new Matrix(1, 3);
	matrixRow2->setEntry(0, 0, -1);
	matrixRow2->setEntry(0, 1, 4.6);
	matrixRow2->setEntry(0, 2, -8);

	EXPECT_NO_THROW(matrix->setRow(0, *matrixRow2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(4.6, matrix->getEntry(0, 1));
	EXPECT_EQ(-8, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMatrixNewRowTransposed)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, -4.6);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_NO_THROW(matrix->setRow(1, *matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));

	Matrix *matrixRow2 = new Matrix(1, 2);
	matrixRow2->setEntry(0, 0, -1);
	matrixRow2->setEntry(0, 1, 4.6);
	matrixRow2->transpose();

	EXPECT_NO_THROW(matrix->setColumn(0, *matrixRow2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(4.6, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionNegativeRowNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_THROW(matrix->setRow(-1, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionTooLargeRowNumberMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 3);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4);
	matrixRow->setEntry(0, 2, 8);

	EXPECT_THROW(matrix->setRow(4, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionTooSmallRowMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 2);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4);

	EXPECT_THROW(matrix->setRow(1, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionTooLargeRowMatrix)
{
	Matrix *matrix = new Matrix(2, 3);

	Matrix *matrixRow = new Matrix(1, 4);
	matrixRow->setEntry(0, 0, 1);
	matrixRow->setEntry(0, 1, 4);
	matrixRow->setEntry(0, 2, 8);
	matrixRow->setEntry(0, 3, 16);

	EXPECT_THROW(matrix->setRow(1, *matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { -1, -4, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { 1.4, 4.6, 8.8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { -1.4, -4.6, -8.8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(-1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { 1, 4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { -1, -4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);

	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	std::vector<double> matrixRow = { 1, -4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixHolePositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixHoleNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { -1, -4, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixDecimalPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1.4, 4.6, 8.8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixDecimalNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { -1.4, -4.6, -8.8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1.4, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8.8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMixedPositiveVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, 4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMixedNegativeVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { -1, -4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixMixedMixedVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, -4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixVectorOverwritten)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, -4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));

	std::vector<double> matrixRow2 = { -1, 4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow2));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(-1, matrix->getEntry(1, 0));
	EXPECT_EQ(4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(-8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixVectorNewRow)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, -4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));

	std::vector<double> matrixRow2 = { -1, 4.6, -8 };

	EXPECT_NO_THROW(matrix->setRow(0, matrixRow2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(4.6, matrix->getEntry(0, 1));
	EXPECT_EQ(-8, matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowNotSetMatrixVectorNewRowTransposed)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, -4.6, 8 };

	EXPECT_NO_THROW(matrix->setRow(1, matrixRow));
	EXPECT_EQ(matrix->getEntry(0, 0), matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(1, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));

	std::vector<double> matrixRow2 = { -1, 4.6};

	EXPECT_NO_THROW(matrix->setColumn(0, matrixRow2));
	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), matrix->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(0, 2), matrix->getEntry(0, 2));
	EXPECT_EQ(4.6, matrix->getEntry(1, 0));
	EXPECT_EQ(-4.6, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionNegativeRowNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_THROW(matrix->setRow(-1, matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionTooLargeRowNumberVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, 4, 8 };

	EXPECT_THROW(matrix->setRow(4, matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionTooSmallRowVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1 };

	EXPECT_THROW(matrix->setRow(1, matrixRow), std::exception);
}

TEST(VectorEngineDatastructurMatrixsetRow, setRowExceptionTooLargeRowVector)
{
	Matrix *matrix = new Matrix(2, 3);

	std::vector<double> matrixRow = { 1, 4, 8, 16 };

	EXPECT_THROW(matrix->setRow(1, matrixRow), std::exception);
}