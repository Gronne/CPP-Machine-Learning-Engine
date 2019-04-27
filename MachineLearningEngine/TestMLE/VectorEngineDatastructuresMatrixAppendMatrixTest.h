#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2, 
				 2, 2 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1, 1, 2, 2, 
				1, 1, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2,
				 2, 2 };

	Matrix *result = new Matrix(4, 2);
	*result = { 1, 1,
				1, 1,
				2, 2,
				2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleNegativeRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2, -2,
				 -2, -2 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1, 1, -2, -2,
				1, 1, -2, -2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleNegativeCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2, -2,
				 -2, -2 };

	Matrix *result = new Matrix(4, 2);
	*result = {  1,  1,
				 1,  1,
				-2, -2, 
				-2, -2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleMixedRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1, 1,
				-1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2, 2,
				 -2, 2 };

	Matrix *result = new Matrix(2, 4);
	*result = { -1, 1, -2, 2,
				-1, 1, -2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHoleMixedCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1, 1,
				-1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2, 2,
				 -2, 2 };

	Matrix *result = new Matrix(4, 2);
	*result = { -1, 1,
				-1, 1,
				-2, 2,
				-2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalPositiveRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1.5, 1.5,
				1.5, 1.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2.5, 2.5,
				 2.5, 2.5 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1.5, 1.5, 2.5, 2.5,
				1.5, 1.5, 2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalPositiveCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1.5, 1.5,
				1.5, 1.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2.5, 2.5,
				 2.5, 2.5 };

	Matrix *result = new Matrix(4, 2);
	*result = { 1.5, 1.5,
				1.5, 1.5, 
				2.5, 2.5,
				2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalNegativeRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1.5, -1.5,
				-1.5, -1.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, -2.5,
				 -2.5, -2.5 };

	Matrix *result = new Matrix(2, 4);
	*result = { -1.5, -1.5, -2.5, -2.5,
				-1.5, -1.5, -2.5, -2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalNegativeCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1.5, -1.5,
				-1.5, -1.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, -2.5,
				 -2.5, -2.5 };

	Matrix *result = new Matrix(4, 2);
	*result = { -1.5, -1.5,
				-1.5, -1.5, 
				-2.5, -2.5,
				-2.5, -2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixDecimalMixedRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1.5, 1.5,
				-1.5, 1.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, 2.5,
				 -2.5, 2.5 };

	Matrix *result = new Matrix(2, 4);
	*result = { -1.5, 1.5, -2.5, 2.5,
				-1.5, 1.5, -2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixdecimalMixedCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1.5, 1.5,
				-1.5, 1.5 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, 2.5,
				 -2.5, 2.5 };

	Matrix *result = new Matrix(4, 2);
	*result = { -1.5, 1.5,
				-1.5, 1.5,
				-2.5, 2.5,
				-2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedPositiveRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2.5, 2.5,
				 2.5, 2.5 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1, 1, 2.5, 2.5,
				1, 1, 2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedPositiveCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2.5, 2.5,
				 2.5, 2.5 };

	Matrix *result = new Matrix(4, 2);
	*result = { 1,   1,
				1,   1, 
				2.5, 2.5,
				2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedNegativeRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1, -1,
				-1, -1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, -2.5,
				 -2.5, -2.5 };

	Matrix *result = new Matrix(2, 4);
	*result = { -1, -1, -2.5, -2.5,
				-1, -1, -2.5, -2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedNegativeCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1, -1,
				-1, -1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, -2.5,
				 -2.5, -2.5 };

	Matrix *result = new Matrix(4, 2);
	*result = { -1,   -1,
				-1,   -1, 
				-2.5, -2.5,
				-2.5, -2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedMixedRow)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1, 1,
				-1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, 2.5,
				 -2.5, 2.5 };

	Matrix *result = new Matrix(2, 4);
	*result = { -1, 1, -2.5, 2.5,
				-1, 1, -2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixMixedMixedCol)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { -1, 1,
				-1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { -2.5, 2.5,
				 -2.5, 2.5 };

	Matrix *result = new Matrix(4, 2);
	*result = { -1,   1, 
				-1,   1, 
				-2.5, 2.5,
				-2.5, 2.5 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//-----------1x1_2x2_3x3_4x4_5x5-----------

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendmatrixx1Row)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(2, matrix->getNumberOfColumns());
	EXPECT_EQ(1, matrix->getNumberOfRows());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(0, 1));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHole1x1Col)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 2);

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());

	EXPECT_EQ(1, matrix->getEntry(0, 0));
	EXPECT_EQ(2, matrix->getEntry(1, 0));
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHole2x2Row)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1, 
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2,
				 2, 2 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1, 1, 2, 2,
				1, 1, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendmatrix2x2Col)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2,
				2, 2 };

	Matrix *result = new Matrix(4, 2);
	*result = { 1, 1,
				1, 1,
				2, 2,
				2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix3x3Row)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 1, 1, 
				1, 1, 1, 
				1, 1, 1 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 2, 2, 2, 
				 2, 2, 2, 
				 2, 2, 2 };

	Matrix *result = new Matrix(3, 6);
	*result = { 1, 1, 1, 2, 2, 2,
				1, 1, 1, 2, 2, 2,
				1, 1, 1, 2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix3x3Col)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 1, 1,
				1, 1, 1,
				1, 1, 1 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 2, 2, 2,
				 2, 2, 2,
				 2, 2, 2 };

	Matrix *result = new Matrix(6, 3);
	*result = { 1, 1, 1,
				1, 1, 1,
				1, 1, 1,
				2, 2, 2,
				2, 2, 2,
				2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix4x4Row)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 1, 1, 1,
				1, 1, 1, 1,
				1, 1, 1, 1,
				1, 1, 1, 1 };

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = { 2, 2, 2, 2,
				 2, 2, 2, 2,
				 2, 2, 2, 2,
				 2, 2, 2, 2 };

	Matrix *result = new Matrix(4, 8);
	*result = { 1, 1, 1, 1, 2, 2, 2, 2,
				1, 1, 1, 1, 2, 2, 2, 2,
				1, 1, 1, 1, 2, 2, 2, 2,
				1, 1, 1, 1, 2, 2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix4x4Col)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 1, 1, 1,
				1, 1, 1, 1,
				1, 1, 1, 1,
				1, 1, 1, 1 };

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = { 2, 2, 2, 2,
				 2, 2, 2, 2,
				 2, 2, 2, 2,
				 2, 2, 2, 2 };

	Matrix *result = new Matrix(8, 4);
	*result = { 1, 1, 1, 1,
				1, 1, 1, 1,
				1, 1, 1, 1,
				1, 1, 1, 1, 
				2, 2, 2, 2,
				2, 2, 2, 2,
				2, 2, 2, 2,
				2, 2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix5x5Row)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1 };

	Matrix *matrix2 = new Matrix(5, 5);
	*matrix2 = { 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2 };

	Matrix *result = new Matrix(5, 10);
	*result = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
				1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
				1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
				1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
				1, 1, 1, 1, 1, 2, 2, 2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrix5x5Col)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1 };

	Matrix *matrix2 = new Matrix(5, 5);
	*matrix2 = { 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2,
				 2, 2, 2, 2, 2 };

	Matrix *result = new Matrix(10, 5);
	*result = { 1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				1, 1, 1, 1, 1,
				2, 2, 2, 2, 2, 
				2, 2, 2, 2, 2, 
				2, 2, 2, 2, 2, 
				2, 2, 2, 2, 2, 
				2, 2, 2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//-----------exception-------------

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixRowException1)
{
	Matrix *matrix = new Matrix(2, 2);
	Matrix *matrix2 = new Matrix(1, 1);

	EXPECT_THROW(matrix->appendMatrix(*matrix2, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixRowException2)
{
	Matrix *matrix = new Matrix(2, 2);
	Matrix *matrix2 = new Matrix(3, 3);

	EXPECT_THROW(matrix->appendMatrix(*matrix2, 1), std::exception);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixColException1)
{
	Matrix *matrix = new Matrix(2, 2);
	Matrix *matrix2 = new Matrix(1, 1);

	EXPECT_THROW(matrix->appendMatrix(*matrix2, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixColException2)
{
	Matrix *matrix = new Matrix(2, 2);
	Matrix *matrix2 = new Matrix(3, 3);

	EXPECT_THROW(matrix->appendMatrix(*matrix2, 1), std::exception);
}

//------Transposed test---------

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveTransposed1)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1, 
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2, 
				 2, 2 };

	Matrix *result = new Matrix(2, 4);
	*result = { 1, 1, 2, 2,
				1, 1, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(matrix2->transpose(), 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixHolePositiveTransposed2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 2, 2,
				 2, 2 };

	Matrix *result = new Matrix(4, 2);
	*result = { 1, 1, 
				1, 1, 
				2, 2,
				2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(matrix2->transpose(), 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

//---------Not initialized----------
TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotInitialized1)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1, 
				1, 1 };

	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotInitialized2)
{
	Matrix *matrix = new Matrix(2, 2);

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 1, 1, 
				 1, 1 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotInitialized3)
{
	Matrix *matrix = new Matrix(2, 2);
	Matrix *matrix2 = new Matrix(2, 2);

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(4, matrix->getNumberOfColumns());
	EXPECT_EQ(2, matrix->getNumberOfRows());
}



//---------Not square----------
TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotSquareRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 1, 1, 
				1, 1, 1 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 2, 2, 2, 
				 2, 2, 2 };

	Matrix *result = new Matrix(2, 6);
	*result = { 1, 1, 1, 2, 2, 2,
				1, 1, 1, 2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 0));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineDatastructurMatrixAppendMatrix, appendMatrixNotSquareCol)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 1, 1,
				1, 1, 1 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 2, 2, 2,
				 2, 2, 2 };

	Matrix *result = new Matrix(4, 3);
	*result = { 1, 1, 1,
				1, 1, 1, 
				2, 2, 2,
				2, 2, 2 };

	EXPECT_NO_THROW(matrix->appendMatrix(*matrix2, 1));
	EXPECT_EQ(result->getNumberOfColumns(), matrix->getNumberOfColumns());
	EXPECT_EQ(result->getNumberOfRows(), matrix->getNumberOfRows());
	EXPECT_TRUE(*result == *matrix);
}