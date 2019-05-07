#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSetsSetMatrixSize, resizeMatrixRowNoException)
{
	Matrix *matrix = new Matrix();

	EXPECT_EQ(1, matrix->getNumberOfRows());

	EXPECT_NO_THROW(matrix->setMatrixSize(1, 1));
	EXPECT_EQ(1, matrix->getNumberOfRows());

	EXPECT_NO_THROW(matrix->setMatrixSize(5, 1));
	EXPECT_EQ(5, matrix->getNumberOfRows());

	EXPECT_NO_THROW(matrix->setMatrixSize(8, 1));
	EXPECT_EQ(8, matrix->getNumberOfRows());
}

TEST(MatrixSetsSetMatrixSize, resizeMatrixColumnNoException)
{
	Matrix *matrix = new Matrix();

	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_NO_THROW(matrix->setMatrixSize(1, 1));
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_NO_THROW(matrix->setMatrixSize(1, 5));
	EXPECT_EQ(5, matrix->getNumberOfColumns());

	EXPECT_NO_THROW(matrix->setMatrixSize(1, 8));
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(MatrixSetsSetMatrixSize, resizeMatrixRowAndColumnNoException)
{
	Matrix *matrix = new Matrix();

	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_NO_THROW(matrix->setMatrixSize(1, 1));
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	EXPECT_NO_THROW(matrix->setMatrixSize(5, 5));
	EXPECT_EQ(5, matrix->getNumberOfRows());
	EXPECT_EQ(5, matrix->getNumberOfColumns());

	EXPECT_NO_THROW(matrix->setMatrixSize(8, 8));
	EXPECT_EQ(8, matrix->getNumberOfRows());
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(MatrixSetsSetMatrixSize, resizeMatrixException)
{
	Matrix *matrix = new Matrix();
	EXPECT_THROW(matrix->setMatrixSize(1, 0), std::exception);

	Matrix *matrix2 = new Matrix(1, 1);
	EXPECT_THROW(matrix2->setMatrixSize(1, 0), std::exception);
}

//-----------With Matrix as Argument---------------

TEST(MatrixSetsSetMatrixSize, resizeMMatrixRowNoException)
{
	Matrix *matrix = new Matrix();
	Matrix *resizeMatrix = new Matrix();

	EXPECT_EQ(1, matrix->getNumberOfRows());

	resizeMatrix->setMatrixSize(1, 1);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(1, matrix->getNumberOfRows());

	resizeMatrix->setMatrixSize(5, 1);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(5, matrix->getNumberOfRows());

	resizeMatrix->setMatrixSize(8, 1);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(8, matrix->getNumberOfRows());
}

TEST(MatrixSetsSetMatrixSize, resizeMMatrixColumnNoException)
{
	Matrix *matrix = new Matrix();
	Matrix *resizeMatrix = new Matrix();

	EXPECT_EQ(1, matrix->getNumberOfColumns());

	resizeMatrix->setMatrixSize(1, 1);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	resizeMatrix->setMatrixSize(1, 5);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(5, matrix->getNumberOfColumns());

	resizeMatrix->setMatrixSize(1, 8);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(MatrixSetsSetMatrixSize, resizeMMatrixRowAndColumnNoException)
{
	Matrix *matrix = new Matrix();
	Matrix *resizeMatrix = new Matrix();

	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	resizeMatrix->setMatrixSize(1, 1);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());

	resizeMatrix->setMatrixSize(5, 5);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(5, matrix->getNumberOfRows());
	EXPECT_EQ(5, matrix->getNumberOfColumns());

	resizeMatrix->setMatrixSize(8, 8);
	EXPECT_NO_THROW(matrix->setMatrixSize(*resizeMatrix));
	EXPECT_EQ(8, matrix->getNumberOfRows());
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}
