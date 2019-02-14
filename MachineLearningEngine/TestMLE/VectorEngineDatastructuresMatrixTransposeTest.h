#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrix, transposeGetNormalRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposedColumns)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposedRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposed2RowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeSetTransposeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(4, 3);
	EXPECT_EQ(4, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeSetTransposeColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(3, 4);
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(4, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeSetTransposeRowAndColumn)
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