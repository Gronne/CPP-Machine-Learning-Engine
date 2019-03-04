#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(7, matrix->getEntry(1, 0));
	EXPECT_EQ(8, matrix->getEntry(1, 1));
	EXPECT_EQ(9, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -4);
	matrix->setEntry(1, 1, -5);
	matrix->setEntry(1, 2, -6);
	matrix->setEntry(2, 0, -7);
	matrix->setEntry(2, 1, -8);
	matrix->setEntry(2, 2, -9);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(-2, matrix->getEntry(0, 1));
	EXPECT_EQ(-3, matrix->getEntry(0, 2));
	EXPECT_EQ(-7, matrix->getEntry(1, 0));
	EXPECT_EQ(-8, matrix->getEntry(1, 1));
	EXPECT_EQ(-9, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, -5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, -7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, -9);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(-3, matrix->getEntry(0, 2));
	EXPECT_EQ(-7, matrix->getEntry(1, 0));
	EXPECT_EQ(8, matrix->getEntry(1, 1));
	EXPECT_EQ(-9, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoublePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 4.5);
	matrix->setEntry(1, 1, 5.5);
	matrix->setEntry(1, 2, 6.5);
	matrix->setEntry(2, 0, 7.5);
	matrix->setEntry(2, 1, 8.5);
	matrix->setEntry(2, 2, 9.5);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(7.5, matrix->getEntry(1, 0));
	EXPECT_EQ(8.5, matrix->getEntry(1, 1));
	EXPECT_EQ(9.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoubleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -4.5);
	matrix->setEntry(1, 1, -5.5);
	matrix->setEntry(1, 2, -6.5);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, -8.5);
	matrix->setEntry(2, 2, -9.5);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(-7.5, matrix->getEntry(1, 0));
	EXPECT_EQ(-8.5, matrix->getEntry(1, 1));
	EXPECT_EQ(-9.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoubleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, 4.5);
	matrix->setEntry(1, 1, -5.5);
	matrix->setEntry(1, 2, 6.5);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, 8.5);
	matrix->setEntry(2, 2, -9.5);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(-7.5, matrix->getEntry(1, 0));
	EXPECT_EQ(8.5, matrix->getEntry(1, 1));
	EXPECT_EQ(-9.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5.5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7.5);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9.5);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(7.5, matrix->getEntry(1, 0));
	EXPECT_EQ(8, matrix->getEntry(1, 1));
	EXPECT_EQ(9.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -4);
	matrix->setEntry(1, 1, -5.5);
	matrix->setEntry(1, 2, -6);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, -8);
	matrix->setEntry(2, 2, -9.5);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-2, matrix->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(-7.5, matrix->getEntry(1, 0));
	EXPECT_EQ(-8, matrix->getEntry(1, 1));
	EXPECT_EQ(-9.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -4);
	matrix->setEntry(1, 1, 5.5);
	matrix->setEntry(1, 2, -6);
	matrix->setEntry(2, 0, -7.5);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, -9.5);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 2));
	EXPECT_EQ(-7.5, matrix->getEntry(1, 0));
	EXPECT_EQ(8, matrix->getEntry(1, 1));
	EXPECT_EQ(-9.5, matrix->getEntry(1, 2));
}

//-------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 0);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 0);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 0);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(0, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(0, 2));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(0, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDecimalZero)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 0.0);
	matrix->setEntry(0, 1, 0.0);
	matrix->setEntry(0, 2, 0.0);
	matrix->setEntry(1, 0, 0.0);
	matrix->setEntry(1, 1, 0.0);
	matrix->setEntry(1, 2, 0.0);
	matrix->setEntry(2, 0, 0.0);
	matrix->setEntry(2, 1, 0.0);
	matrix->setEntry(2, 2, 0.0);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(0.0, matrix->getEntry(0, 0));
	EXPECT_EQ(0.0, matrix->getEntry(0, 1));
	EXPECT_EQ(0.0, matrix->getEntry(0, 2));
	EXPECT_EQ(0.0, matrix->getEntry(1, 0));
	EXPECT_EQ(0.0, matrix->getEntry(1, 1));
	EXPECT_EQ(0.0, matrix->getEntry(1, 2));
}

//------------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowDoubleDelete)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowTripleDelete)
{
	Matrix *matrix = new Matrix(4, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);
	matrix->setEntry(3, 0, 10);
	matrix->setEntry(3, 1, 11);
	matrix->setEntry(3, 2, 12);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
}

//-------------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowException1)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);

	EXPECT_THROW(matrix->deleteRow(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowException2)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);

	EXPECT_THROW(matrix->deleteRow(matrix->getNumberOfRows()), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRowExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(1, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);

	EXPECT_THROW(matrix->deleteRow(0), std::exception);
}

//-----------

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(7, matrix->getEntry(1, 0));
	EXPECT_EQ(8, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(1, 3, 7);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(4, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
	EXPECT_EQ(3, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(0, 3));
}

TEST(VectorEngineDatastructurMatrixDeleteRow, deleteRow4x2)
{
	Matrix *matrix = new Matrix(4, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(3, 0, 4);
	matrix->setEntry(0, 1, 5);
	matrix->setEntry(1, 1, 6);
	matrix->setEntry(2, 1, 7);
	matrix->setEntry(3, 1, 8);

	EXPECT_NO_THROW(matrix->deleteRow(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(3, matrix->getEntry(1, 0));
	EXPECT_EQ(4, matrix->getEntry(2, 0));
	EXPECT_EQ(5, matrix->getEntry(0, 1));
	EXPECT_EQ(7, matrix->getEntry(1, 1));
	EXPECT_EQ(8, matrix->getEntry(2, 1));
}