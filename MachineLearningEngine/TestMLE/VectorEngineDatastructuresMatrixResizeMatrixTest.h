#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixResizeMatrix, resizeMatrixRowNoException)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfRows());
	matrix->setMatrixSize(1, 1);
	EXPECT_EQ(1, matrix->getNumberOfRows());
	matrix->setMatrixSize(5, 1);
	EXPECT_EQ(5, matrix->getNumberOfRows());
	matrix->setMatrixSize(8, 1);
	EXPECT_EQ(8, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixResizeMatrix, resizeMatrixColumnNoException)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 1);
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 5);
	EXPECT_EQ(5, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 8);
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrixResizeMatrix, resizeMatrixRowAndColumnNoException)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 1);
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(5, 5);
	EXPECT_EQ(5, matrix->getNumberOfRows());
	EXPECT_EQ(5, matrix->getNumberOfColumns());
	matrix->setMatrixSize(8, 8);
	EXPECT_EQ(8, matrix->getNumberOfRows());
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrixResizeMatrix, resizeMatrixException)
{
	Matrix *matrix = new Matrix();
	EXPECT_THROW(matrix->setMatrixSize(1, 0), std::exception);


	Matrix *matrix2 = new Matrix(1, 1);
	EXPECT_THROW(matrix2->setMatrixSize(1, 0), std::exception);
}
