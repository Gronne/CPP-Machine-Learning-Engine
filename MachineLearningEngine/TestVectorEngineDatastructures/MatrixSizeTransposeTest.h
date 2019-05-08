#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSizeTranspose, transposeGetNormalRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeGetTransposedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeGetTransposedColumns)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeGetTransposedRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeGetTransposed2RowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeSetTransposeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(4, 3);
	EXPECT_EQ(4, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeSetTransposeColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(3, 4);
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(4, matrix->getNumberOfColumns());
}

TEST(MatrixSizeTranspose, transposeSetTransposeRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(3, 5);
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(5, matrix->getNumberOfColumns());
	matrix->setMatrixSize(5, 3);
	EXPECT_EQ(5, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

//---------------return transposed matrix------------------

TEST(MatrixSizeTranspose, transposedReturnEQSize0)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(matrix->getNumberOfColumns(), matrix->transpose().getNumberOfColumns());
	EXPECT_EQ(matrix->getNumberOfRows(), matrix->transpose().getNumberOfRows());
}

TEST(MatrixSizeTranspose, transposedReturnEQSize1)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(matrix->getNumberOfColumns(), matrix->transpose(false).getNumberOfColumns());
	EXPECT_EQ(matrix->getNumberOfRows(), matrix->transpose(false).getNumberOfRows());
}

TEST(MatrixSizeTranspose, transposedReturnEQSize2)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	EXPECT_EQ(matrix->getNumberOfRows(), matrix->transpose(true).getNumberOfColumns());
	EXPECT_EQ(matrix->getNumberOfColumns(), matrix->transpose(true).getNumberOfRows());
}

TEST(MatrixSizeTranspose, transposedReturnEQSize3)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());

	const_cast<const Matrix*>(matrix)->transpose();

	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}
