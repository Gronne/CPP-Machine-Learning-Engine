#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(2, matrix1->getEntry(0, 2));
	EXPECT_EQ(2, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(1, 2));
	EXPECT_EQ(2, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());
	
	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(2, matrix1->getEntry(2, 0));
	EXPECT_EQ(2, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(2, 1));
	EXPECT_EQ(2, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleNegativeRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, -2);
	matrix2->setEntry(0, 1, -2);
	matrix2->setEntry(1, 0, -2);
	matrix2->setEntry(1, 1, -2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(-2, matrix1->getEntry(0, 2));
	EXPECT_EQ(-2, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2, matrix1->getEntry(1, 2));
	EXPECT_EQ(-2, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleNegativeCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, -2);
	matrix2->setEntry(0, 1, -2);
	matrix2->setEntry(1, 0, -2);
	matrix2->setEntry(1, 1, -2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(-2, matrix1->getEntry(2, 0));
	EXPECT_EQ(-2, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2, matrix1->getEntry(2, 1));
	EXPECT_EQ(-2, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleMixedRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, -2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, -2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(2, matrix1->getEntry(0, 2));
	EXPECT_EQ(-2, matrix1->getEntry(0, 3));
	EXPECT_EQ(-1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(1, 2));
	EXPECT_EQ(-2, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleMixedCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, -2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, -2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1, matrix1->getEntry(1, 0));
	EXPECT_EQ(2, matrix1->getEntry(2, 0));
	EXPECT_EQ(2, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2, matrix1->getEntry(2, 1));
	EXPECT_EQ(-2, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalPositiveRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 1.5);
	matrix1->setEntry(1, 0, 1.5);
	matrix1->setEntry(1, 1, 1.5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, 2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(1.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(2.5, matrix1->getEntry(0, 3));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(1, 2));
	EXPECT_EQ(2.5, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalPositiveCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 1.5);
	matrix1->setEntry(1, 0, 1.5);
	matrix1->setEntry(1, 1, 1.5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, 2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(2, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(3, 0));
	EXPECT_EQ(1.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(2, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalNegativeRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -1.5);
	matrix1->setEntry(1, 0, -1.5);
	matrix1->setEntry(1, 1, -1.5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, -2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, -2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(-1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(0, 3));
	EXPECT_EQ(-1.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(-1.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(1, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalNegativeCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -1.5);
	matrix1->setEntry(1, 0, -1.5);
	matrix1->setEntry(1, 1, -1.5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, -2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, -2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(-1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(-2.5, matrix1->getEntry(2, 0));
	EXPECT_EQ(-2.5, matrix1->getEntry(3, 0));
	EXPECT_EQ(-1.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(-1.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(2, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalMixedRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 1.5);
	matrix1->setEntry(1, 0, -1.5);
	matrix1->setEntry(1, 1, 1.5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(-1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(1.5,  matrix1->getEntry(0, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(-2.5,  matrix1->getEntry(0, 3));
	EXPECT_EQ(-1.5,  matrix1->getEntry(1, 0));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(2.5,  matrix1->getEntry(1, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixdecimalMixedCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 1.5);
	matrix1->setEntry(1, 0, -1.5);
	matrix1->setEntry(1, 1, 1.5);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(-1.5, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1.5, matrix1->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(2, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(3, 0));
	EXPECT_EQ(1.5, matrix1->getEntry(0, 1));
	EXPECT_EQ(1.5, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(2, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedPositiveRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, 2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(2.5, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(1, 2));
	EXPECT_EQ(2.5, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedPositiveCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, 2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, 2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(2, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(2, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedNegativeRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -1);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, -1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, -2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, -2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1, matrix1->getEntry(0, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(0, 3));
	EXPECT_EQ(-1, matrix1->getEntry(1, 0));
	EXPECT_EQ(-1, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(1, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedNegativeCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -1);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, -1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, -2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, -2.5);
	matrix2->setEntry(1, 1, -2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1, matrix1->getEntry(1, 0));
	EXPECT_EQ(-2.5, matrix1->getEntry(2, 0));
	EXPECT_EQ(-2.5, matrix1->getEntry(3, 0));
	EXPECT_EQ(-1, matrix1->getEntry(0, 1));
	EXPECT_EQ(-1, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(2, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedMixedRow)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(0, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(0, 3));
	EXPECT_EQ(-1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2.5, matrix1->getEntry(1, 2));
	EXPECT_EQ(-2.5, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedMixedCol)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2.5);
	matrix2->setEntry(0, 1, -2.5);
	matrix2->setEntry(1, 0, 2.5);
	matrix2->setEntry(1, 1, -2.5);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(-1, matrix1->getEntry(0, 0));
	EXPECT_EQ(-1, matrix1->getEntry(1, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(2, 0));
	EXPECT_EQ(2.5, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(2, 1));
	EXPECT_EQ(-2.5, matrix1->getEntry(3, 1));
}

//-----------1x1_2x2_3x3_4x4_5x5-----------

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix1x1Row)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(1, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(2, matrix1->getEntry(0, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHole1x1Col)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(1, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(2, matrix1->getEntry(1, 0));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHole2x2Row)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(2, matrix1->getEntry(0, 2));
	EXPECT_EQ(2, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(1, 2));
	EXPECT_EQ(2, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix2x2Col)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(2, matrix1->getEntry(2, 0));
	EXPECT_EQ(2, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(2, 1));
	EXPECT_EQ(2, matrix1->getEntry(3, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix3x3Row)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(2, 0, 1);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 1);

	Matrix *matrix2 = new Matrix(3, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);
	matrix2->setEntry(2, 0, 2);
	matrix2->setEntry(2, 1, 2);
	matrix2->setEntry(2, 2, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(6, matrix1->getNumberOfColumns());
	EXPECT_EQ(3, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(2, matrix1->getEntry(0, 3));
	EXPECT_EQ(2, matrix1->getEntry(0, 4));
	EXPECT_EQ(2, matrix1->getEntry(0, 5));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(2, matrix1->getEntry(1, 3));
	EXPECT_EQ(2, matrix1->getEntry(1, 4));
	EXPECT_EQ(2, matrix1->getEntry(1, 5));
	EXPECT_EQ(1, matrix1->getEntry(2, 0));
	EXPECT_EQ(1, matrix1->getEntry(2, 1));
	EXPECT_EQ(1, matrix1->getEntry(2, 2));
	EXPECT_EQ(2, matrix1->getEntry(2, 3));
	EXPECT_EQ(2, matrix1->getEntry(2, 4));
	EXPECT_EQ(2, matrix1->getEntry(2, 5));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix3x3Col)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(2, 0, 1);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 1);

	Matrix *matrix2 = new Matrix(3, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);
	matrix2->setEntry(2, 0, 2);
	matrix2->setEntry(2, 1, 2);
	matrix2->setEntry(2, 2, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(3, matrix1->getNumberOfColumns());
	EXPECT_EQ(6, matrix1->getNumberOfRows());
	
	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(2, 0));
	EXPECT_EQ(2, matrix1->getEntry(3, 0));
	EXPECT_EQ(2, matrix1->getEntry(4, 0));
	EXPECT_EQ(2, matrix1->getEntry(5, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(2, 1));
	EXPECT_EQ(2, matrix1->getEntry(3, 1));
	EXPECT_EQ(2, matrix1->getEntry(4, 1));
	EXPECT_EQ(2, matrix1->getEntry(5, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(1, matrix1->getEntry(2, 2));
	EXPECT_EQ(2, matrix1->getEntry(3, 2));
	EXPECT_EQ(2, matrix1->getEntry(4, 2));
	EXPECT_EQ(2, matrix1->getEntry(5, 2));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix4x4Row)
{
	Matrix *matrix1 = new Matrix(4, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(0, 3, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(2, 0, 1);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 1);
	matrix1->setEntry(2, 3, 1);
	matrix1->setEntry(3, 0, 1);
	matrix1->setEntry(3, 1, 1);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);

	Matrix *matrix2 = new Matrix(4, 4);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(0, 3, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);
	matrix2->setEntry(1, 3, 2);
	matrix2->setEntry(2, 0, 2);
	matrix2->setEntry(2, 1, 2);
	matrix2->setEntry(2, 2, 2);
	matrix2->setEntry(2, 3, 2);
	matrix2->setEntry(3, 0, 2);
	matrix2->setEntry(3, 1, 2);
	matrix2->setEntry(3, 2, 2);
	matrix2->setEntry(3, 3, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(8, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(1, matrix1->getEntry(0, 3));
	EXPECT_EQ(2, matrix1->getEntry(0, 4));
	EXPECT_EQ(2, matrix1->getEntry(0, 5));
	EXPECT_EQ(2, matrix1->getEntry(0, 6));
	EXPECT_EQ(2, matrix1->getEntry(0, 7));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(1, matrix1->getEntry(1, 3));
	EXPECT_EQ(2, matrix1->getEntry(1, 4));
	EXPECT_EQ(2, matrix1->getEntry(1, 5));
	EXPECT_EQ(2, matrix1->getEntry(1, 6));
	EXPECT_EQ(2, matrix1->getEntry(1, 7));
	EXPECT_EQ(1, matrix1->getEntry(2, 0));
	EXPECT_EQ(1, matrix1->getEntry(2, 1));
	EXPECT_EQ(1, matrix1->getEntry(2, 2));
	EXPECT_EQ(1, matrix1->getEntry(2, 3));
	EXPECT_EQ(2, matrix1->getEntry(2, 4));
	EXPECT_EQ(2, matrix1->getEntry(2, 5));
	EXPECT_EQ(2, matrix1->getEntry(2, 6));
	EXPECT_EQ(2, matrix1->getEntry(2, 7));
	EXPECT_EQ(1, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(3, 1));
	EXPECT_EQ(1, matrix1->getEntry(3, 2));
	EXPECT_EQ(1, matrix1->getEntry(3, 3));
	EXPECT_EQ(2, matrix1->getEntry(3, 4));
	EXPECT_EQ(2, matrix1->getEntry(3, 5));
	EXPECT_EQ(2, matrix1->getEntry(3, 6));
	EXPECT_EQ(2, matrix1->getEntry(3, 7));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix4x4Col)
{
	Matrix *matrix1 = new Matrix(4, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(0, 3, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(2, 0, 1);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 1);
	matrix1->setEntry(2, 3, 1);
	matrix1->setEntry(3, 0, 1);
	matrix1->setEntry(3, 1, 1);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);

	Matrix *matrix2 = new Matrix(4, 4);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(0, 3, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);
	matrix2->setEntry(1, 3, 2);
	matrix2->setEntry(2, 0, 2);
	matrix2->setEntry(2, 1, 2);
	matrix2->setEntry(2, 2, 2);
	matrix2->setEntry(2, 3, 2);
	matrix2->setEntry(3, 0, 2);
	matrix2->setEntry(3, 1, 2);
	matrix2->setEntry(3, 2, 2);
	matrix2->setEntry(3, 3, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(8, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(2, 0));
	EXPECT_EQ(1, matrix1->getEntry(3, 0));
	EXPECT_EQ(2, matrix1->getEntry(4, 0));
	EXPECT_EQ(2, matrix1->getEntry(5, 0));
	EXPECT_EQ(2, matrix1->getEntry(6, 0));
	EXPECT_EQ(2, matrix1->getEntry(7, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(2, 1));
	EXPECT_EQ(1, matrix1->getEntry(3, 1));
	EXPECT_EQ(2, matrix1->getEntry(4, 1));
	EXPECT_EQ(2, matrix1->getEntry(5, 1));
	EXPECT_EQ(2, matrix1->getEntry(6, 1));
	EXPECT_EQ(2, matrix1->getEntry(7, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(1, matrix1->getEntry(2, 2));
	EXPECT_EQ(1, matrix1->getEntry(3, 2));
	EXPECT_EQ(2, matrix1->getEntry(4, 2));
	EXPECT_EQ(2, matrix1->getEntry(5, 2));
	EXPECT_EQ(2, matrix1->getEntry(6, 2));
	EXPECT_EQ(2, matrix1->getEntry(7, 2));
	EXPECT_EQ(1, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 3));
	EXPECT_EQ(1, matrix1->getEntry(2, 3));
	EXPECT_EQ(1, matrix1->getEntry(3, 3));
	EXPECT_EQ(2, matrix1->getEntry(4, 3));
	EXPECT_EQ(2, matrix1->getEntry(5, 3));
	EXPECT_EQ(2, matrix1->getEntry(6, 3));
	EXPECT_EQ(2, matrix1->getEntry(7, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix5x5Row)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(0, 3, 1);
	matrix1->setEntry(0, 4, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(1, 4, 1);
	matrix1->setEntry(2, 0, 1);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 1);
	matrix1->setEntry(2, 3, 1);
	matrix1->setEntry(2, 4, 1);
	matrix1->setEntry(3, 0, 1);
	matrix1->setEntry(3, 1, 1);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);
	matrix1->setEntry(3, 4, 1);
	matrix1->setEntry(4, 0, 1);
	matrix1->setEntry(4, 1, 1);
	matrix1->setEntry(4, 2, 1);
	matrix1->setEntry(4, 3, 1);
	matrix1->setEntry(4, 4, 1);

	Matrix *matrix2 = new Matrix(5, 5);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(0, 3, 2);
	matrix2->setEntry(0, 4, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);
	matrix2->setEntry(1, 3, 2);
	matrix2->setEntry(1, 4, 2);
	matrix2->setEntry(2, 0, 2);
	matrix2->setEntry(2, 1, 2);
	matrix2->setEntry(2, 2, 2);
	matrix2->setEntry(2, 3, 2);
	matrix2->setEntry(2, 4, 2);
	matrix2->setEntry(3, 0, 2);
	matrix2->setEntry(3, 1, 2);
	matrix2->setEntry(3, 2, 2);
	matrix2->setEntry(3, 3, 2);
	matrix2->setEntry(3, 4, 2);
	matrix2->setEntry(4, 0, 2);
	matrix2->setEntry(4, 1, 2);
	matrix2->setEntry(4, 2, 2);
	matrix2->setEntry(4, 3, 2);
	matrix2->setEntry(4, 4, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(10, matrix1->getNumberOfColumns());
	EXPECT_EQ(5, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(1, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(0, 4));
	EXPECT_EQ(2, matrix1->getEntry(0, 5));
	EXPECT_EQ(2, matrix1->getEntry(0, 6));
	EXPECT_EQ(2, matrix1->getEntry(0, 7));
	EXPECT_EQ(2, matrix1->getEntry(0, 8));
	EXPECT_EQ(2, matrix1->getEntry(0, 9));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(1, matrix1->getEntry(1, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 4));
	EXPECT_EQ(2, matrix1->getEntry(1, 5));
	EXPECT_EQ(2, matrix1->getEntry(1, 6));
	EXPECT_EQ(2, matrix1->getEntry(1, 7));
	EXPECT_EQ(2, matrix1->getEntry(1, 8));
	EXPECT_EQ(2, matrix1->getEntry(1, 9));
	EXPECT_EQ(1, matrix1->getEntry(2, 0));
	EXPECT_EQ(1, matrix1->getEntry(2, 1));
	EXPECT_EQ(1, matrix1->getEntry(2, 2));
	EXPECT_EQ(1, matrix1->getEntry(2, 3));
	EXPECT_EQ(1, matrix1->getEntry(2, 4));
	EXPECT_EQ(2, matrix1->getEntry(2, 5));
	EXPECT_EQ(2, matrix1->getEntry(2, 6));
	EXPECT_EQ(2, matrix1->getEntry(2, 7));
	EXPECT_EQ(2, matrix1->getEntry(2, 8));
	EXPECT_EQ(2, matrix1->getEntry(2, 9));
	EXPECT_EQ(1, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(3, 1));
	EXPECT_EQ(1, matrix1->getEntry(3, 2));
	EXPECT_EQ(1, matrix1->getEntry(3, 3));
	EXPECT_EQ(1, matrix1->getEntry(3, 4));
	EXPECT_EQ(2, matrix1->getEntry(3, 5));
	EXPECT_EQ(2, matrix1->getEntry(3, 6));
	EXPECT_EQ(2, matrix1->getEntry(3, 7));
	EXPECT_EQ(2, matrix1->getEntry(3, 8));
	EXPECT_EQ(2, matrix1->getEntry(3, 9));
	EXPECT_EQ(1, matrix1->getEntry(4, 0));
	EXPECT_EQ(1, matrix1->getEntry(4, 1));
	EXPECT_EQ(1, matrix1->getEntry(4, 2));
	EXPECT_EQ(1, matrix1->getEntry(4, 3));
	EXPECT_EQ(1, matrix1->getEntry(4, 4));
	EXPECT_EQ(2, matrix1->getEntry(4, 5));
	EXPECT_EQ(2, matrix1->getEntry(4, 6));
	EXPECT_EQ(2, matrix1->getEntry(4, 7));
	EXPECT_EQ(2, matrix1->getEntry(4, 8));
	EXPECT_EQ(2, matrix1->getEntry(4, 9));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix5x5Col)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(0, 3, 1);
	matrix1->setEntry(0, 4, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(1, 4, 1);
	matrix1->setEntry(2, 0, 1);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 1);
	matrix1->setEntry(2, 3, 1);
	matrix1->setEntry(2, 4, 1);
	matrix1->setEntry(3, 0, 1);
	matrix1->setEntry(3, 1, 1);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);
	matrix1->setEntry(3, 4, 1);
	matrix1->setEntry(4, 0, 1);
	matrix1->setEntry(4, 1, 1);
	matrix1->setEntry(4, 2, 1);
	matrix1->setEntry(4, 3, 1);
	matrix1->setEntry(4, 4, 1);

	Matrix *matrix2 = new Matrix(5, 5);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(0, 3, 2);
	matrix2->setEntry(0, 4, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);
	matrix2->setEntry(1, 3, 2);
	matrix2->setEntry(1, 4, 2);
	matrix2->setEntry(2, 0, 2);
	matrix2->setEntry(2, 1, 2);
	matrix2->setEntry(2, 2, 2);
	matrix2->setEntry(2, 3, 2);
	matrix2->setEntry(2, 4, 2);
	matrix2->setEntry(3, 0, 2);
	matrix2->setEntry(3, 1, 2);
	matrix2->setEntry(3, 2, 2);
	matrix2->setEntry(3, 3, 2);
	matrix2->setEntry(3, 4, 2);
	matrix2->setEntry(4, 0, 2);
	matrix2->setEntry(4, 1, 2);
	matrix2->setEntry(4, 2, 2);
	matrix2->setEntry(4, 3, 2);
	matrix2->setEntry(4, 4, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(5, matrix1->getNumberOfColumns());
	EXPECT_EQ(10, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(2, 0));
	EXPECT_EQ(1, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(4, 0));
	EXPECT_EQ(2, matrix1->getEntry(5, 0));
	EXPECT_EQ(2, matrix1->getEntry(6, 0));
	EXPECT_EQ(2, matrix1->getEntry(7, 0));
	EXPECT_EQ(2, matrix1->getEntry(8, 0));
	EXPECT_EQ(2, matrix1->getEntry(9, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(2, 1));
	EXPECT_EQ(1, matrix1->getEntry(3, 1));
	EXPECT_EQ(1, matrix1->getEntry(4, 1));
	EXPECT_EQ(2, matrix1->getEntry(5, 1));
	EXPECT_EQ(2, matrix1->getEntry(6, 1));
	EXPECT_EQ(2, matrix1->getEntry(7, 1));
	EXPECT_EQ(2, matrix1->getEntry(8, 1));
	EXPECT_EQ(2, matrix1->getEntry(9, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(1, matrix1->getEntry(2, 2));
	EXPECT_EQ(1, matrix1->getEntry(3, 2));
	EXPECT_EQ(1, matrix1->getEntry(4, 2));
	EXPECT_EQ(2, matrix1->getEntry(5, 2));
	EXPECT_EQ(2, matrix1->getEntry(6, 2));
	EXPECT_EQ(2, matrix1->getEntry(7, 2));
	EXPECT_EQ(2, matrix1->getEntry(8, 2));
	EXPECT_EQ(2, matrix1->getEntry(9, 2));
	EXPECT_EQ(1, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 3));
	EXPECT_EQ(1, matrix1->getEntry(2, 3));
	EXPECT_EQ(1, matrix1->getEntry(3, 3));
	EXPECT_EQ(1, matrix1->getEntry(4, 3));
	EXPECT_EQ(2, matrix1->getEntry(5, 3));
	EXPECT_EQ(2, matrix1->getEntry(6, 3));
	EXPECT_EQ(2, matrix1->getEntry(7, 3));
	EXPECT_EQ(2, matrix1->getEntry(8, 3));
	EXPECT_EQ(2, matrix1->getEntry(9, 3));
	EXPECT_EQ(1, matrix1->getEntry(0, 4));
	EXPECT_EQ(1, matrix1->getEntry(1, 4));
	EXPECT_EQ(1, matrix1->getEntry(2, 4));
	EXPECT_EQ(1, matrix1->getEntry(3, 4));
	EXPECT_EQ(1, matrix1->getEntry(4, 4));
	EXPECT_EQ(2, matrix1->getEntry(5, 4));
	EXPECT_EQ(2, matrix1->getEntry(6, 4));
	EXPECT_EQ(2, matrix1->getEntry(7, 4));
	EXPECT_EQ(2, matrix1->getEntry(8, 4));
	EXPECT_EQ(2, matrix1->getEntry(9, 4));
}

//-----------exception-------------

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixRowException1)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_THROW(matrix1->appendMatrix(*matrix2, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixRowException2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(3, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);

	EXPECT_THROW(matrix1->appendMatrix(*matrix2, 1), std::exception);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixColException1)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_THROW(matrix1->appendMatrix(*matrix2, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixColException2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(3, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);

	EXPECT_THROW(matrix1->appendMatrix(*matrix2, 1), std::exception);
}

//------Transposed test---------

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveTransposed1)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->transpose();

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(2, matrix1->getEntry(0, 2));
	EXPECT_EQ(2, matrix1->getEntry(0, 3));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(1, 2));
	EXPECT_EQ(2, matrix1->getEntry(1, 3));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveTransposed2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->transpose();

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(2, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(2, matrix1->getEntry(2, 0));
	EXPECT_EQ(2, matrix1->getEntry(3, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(2, matrix1->getEntry(2, 1));
	EXPECT_EQ(2, matrix1->getEntry(3, 1));
}

//---------Not initialized----------
TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotInitialized1)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotInitialized2)
{
	Matrix *matrix1 = new Matrix(2, 2);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 1);
	matrix2->setEntry(0, 1, 1);
	matrix2->setEntry(1, 0, 1);
	matrix2->setEntry(1, 1, 1);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotInitialized3)
{
	Matrix *matrix1 = new Matrix(2, 2);
	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());
}



//---------Not square----------
TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotSquareRow)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 0));
	EXPECT_EQ(6, matrix1->getNumberOfColumns());
	EXPECT_EQ(2, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(2, matrix1->getEntry(0, 3));
	EXPECT_EQ(2, matrix1->getEntry(0, 4));
	EXPECT_EQ(2, matrix1->getEntry(0, 5));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(2, matrix1->getEntry(1, 3));
	EXPECT_EQ(2, matrix1->getEntry(1, 4));
	EXPECT_EQ(2, matrix1->getEntry(1, 5));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotSquareCol)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 1);
	matrix1->setEntry(0, 2, 1);
	matrix1->setEntry(1, 0, 1);
	matrix1->setEntry(1, 1, 1);
	matrix1->setEntry(1, 2, 1);

	Matrix *matrix2 = new Matrix(2, 3);
	matrix2->setEntry(0, 0, 2);
	matrix2->setEntry(0, 1, 2);
	matrix2->setEntry(0, 2, 2);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(1, 1, 2);
	matrix2->setEntry(1, 2, 2);

	EXPECT_NO_THROW(matrix1->appendMatrix(*matrix2, 1));
	EXPECT_EQ(3, matrix1->getNumberOfColumns());
	EXPECT_EQ(4, matrix1->getNumberOfRows());

	EXPECT_EQ(1, matrix1->getEntry(0, 0));
	EXPECT_EQ(1, matrix1->getEntry(0, 1));
	EXPECT_EQ(1, matrix1->getEntry(0, 2));
	EXPECT_EQ(1, matrix1->getEntry(1, 0));
	EXPECT_EQ(1, matrix1->getEntry(1, 1));
	EXPECT_EQ(1, matrix1->getEntry(1, 2));
	EXPECT_EQ(2, matrix1->getEntry(2, 0));
	EXPECT_EQ(2, matrix1->getEntry(2, 1));
	EXPECT_EQ(2, matrix1->getEntry(2, 2));
	EXPECT_EQ(2, matrix1->getEntry(3, 0));
	EXPECT_EQ(2, matrix1->getEntry(3, 1));
	EXPECT_EQ(2, matrix1->getEntry(3, 2));
}