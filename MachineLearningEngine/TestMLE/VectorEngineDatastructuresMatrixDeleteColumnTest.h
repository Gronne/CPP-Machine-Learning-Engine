#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHolePositive)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(3, matrix->getEntry(0, 1));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(6, matrix->getEntry(1, 1));
	EXPECT_EQ(7, matrix->getEntry(2, 0));
	EXPECT_EQ(9, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHoleNegative)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(-3, matrix->getEntry(0, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 0));
	EXPECT_EQ(-6, matrix->getEntry(1, 1));
	EXPECT_EQ(-7, matrix->getEntry(2, 0));
	EXPECT_EQ(-9, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHoleMixed)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(-1, matrix->getEntry(0, 0));
	EXPECT_EQ(-3, matrix->getEntry(0, 1));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(6, matrix->getEntry(1, 1));
	EXPECT_EQ(-7, matrix->getEntry(2, 0));
	EXPECT_EQ(-9, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoublePositive)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(3.5, matrix->getEntry(0, 1));
	EXPECT_EQ(4.5, matrix->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix->getEntry(1, 1));
	EXPECT_EQ(7.5, matrix->getEntry(2, 0));
	EXPECT_EQ(9.5, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoubleNegative)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 1));
	EXPECT_EQ(-4.5, matrix->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix->getEntry(1, 1));
	EXPECT_EQ(-7.5, matrix->getEntry(2, 0));
	EXPECT_EQ(-9.5, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoubleMixed)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 1));
	EXPECT_EQ(4.5, matrix->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix->getEntry(1, 1));
	EXPECT_EQ(-7.5, matrix->getEntry(2, 0));
	EXPECT_EQ(-9.5, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnMixedPositive)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(3.5, matrix->getEntry(0, 1));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(6, matrix->getEntry(1, 1));
	EXPECT_EQ(7.5, matrix->getEntry(2, 0));
	EXPECT_EQ(9.5, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnMixedNegative)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 0));
	EXPECT_EQ(-6, matrix->getEntry(1, 1));
	EXPECT_EQ(-7.5, matrix->getEntry(2, 0));
	EXPECT_EQ(-9.5, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnMixedMixed)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(-1.5, matrix->getEntry(0, 0));
	EXPECT_EQ(-3.5, matrix->getEntry(0, 1));
	EXPECT_EQ(-4, matrix->getEntry(1, 0));
	EXPECT_EQ(-6, matrix->getEntry(1, 1));
	EXPECT_EQ(-7.5, matrix->getEntry(2, 0));
	EXPECT_EQ(-9.5, matrix->getEntry(2, 1));
}

//-------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnHoleZero)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(0, matrix->getEntry(0, 0));
	EXPECT_EQ(0, matrix->getEntry(0, 1));
	EXPECT_EQ(0, matrix->getEntry(1, 0));
	EXPECT_EQ(0, matrix->getEntry(1, 1));
	EXPECT_EQ(0, matrix->getEntry(2, 0));
	EXPECT_EQ(0, matrix->getEntry(2, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDecimalZero)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(0.0, matrix->getEntry(0, 0));
	EXPECT_EQ(0.0, matrix->getEntry(0, 1));
	EXPECT_EQ(0.0, matrix->getEntry(1, 0));
	EXPECT_EQ(0.0, matrix->getEntry(1, 1));
	EXPECT_EQ(0.0, matrix->getEntry(2, 0));
	EXPECT_EQ(0.0, matrix->getEntry(2, 1));
}

//------------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnDoubleDelete)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(7, matrix->getEntry(2, 0));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnTripleDelete)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 5);
	matrix->setEntry(1, 1, 6);
	matrix->setEntry(1, 2, 7);
	matrix->setEntry(1, 3, 8);
	matrix->setEntry(2, 0, 9);
	matrix->setEntry(2, 1, 10);
	matrix->setEntry(2, 2, 11);
	matrix->setEntry(2, 3, 12);

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(5, matrix->getEntry(1, 0));
	EXPECT_EQ(9, matrix->getEntry(2, 0));
}

//-------------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnException1)
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

	EXPECT_THROW(matrix->deleteColumn(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnException2)
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

	EXPECT_THROW(matrix->deleteColumn(matrix->getNumberOfColumns()), std::exception);
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumnExceptionDeleteMatrix)
{
	Matrix *matrix = new Matrix(3, 1);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(2, 0, 3);

	EXPECT_THROW(matrix->deleteColumn(0), std::exception);
}

//-----------

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(3, matrix->getEntry(0, 1));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(6, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(7, matrix->getEntry(2, 0));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn2x4)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(3, matrix->getEntry(0, 1));
	EXPECT_EQ(4, matrix->getEntry(0, 2));
	EXPECT_EQ(4, matrix->getEntry(1, 0));
	EXPECT_EQ(6, matrix->getEntry(1, 1));
	EXPECT_EQ(7, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrixDeleteColumn, deleteColumn4x2)
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

	EXPECT_NO_THROW(matrix->deleteColumn(1));
	EXPECT_EQ(4, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(1, 0));
	EXPECT_EQ(3, matrix->getEntry(2, 0));
	EXPECT_EQ(4, matrix->getEntry(3, 0));
}