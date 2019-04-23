#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructuresMatrixTranspose, transposeGetNormalRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeGetTransposedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeGetTransposedColumns)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeGetTransposedRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeGetTransposed2RowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeSetTransposeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(4, 3);
	EXPECT_EQ(4, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeSetTransposeColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(3, 4);
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(4, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructuresMatrixTranspose, transposeSetTransposeRowAndColumn)
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