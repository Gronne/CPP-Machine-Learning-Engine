#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM1x1)
{
	Matrix *matrix = new Matrix();
	int rows = 1;
	int cols = 1;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM2x2)
{
	Matrix *matrix = new Matrix();
	int rows = 2;
	int cols = 2;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM3x3)
{
	Matrix *matrix = new Matrix();
	int rows = 3;
	int cols = 3;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM4x4)
{
	Matrix *matrix = new Matrix();
	int rows = 4;
	int cols = 4;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM5x5)
{
	Matrix *matrix = new Matrix();
	int rows = 5;
	int cols = 5;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM1x3)
{
	Matrix *matrix = new Matrix();
	int rows = 1;
	int cols = 3;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM3x1)
{
	Matrix *matrix = new Matrix();
	int rows = 3;
	int cols = 1;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM3x2)
{
	Matrix *matrix = new Matrix();
	int rows = 3;
	int cols = 2;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM2x3)
{
	Matrix *matrix = new Matrix();
	int rows = 2;
	int cols = 3;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM4x7)
{
	Matrix *matrix = new Matrix();
	int rows = 4;
	int cols = 7;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM7x4)
{
	Matrix *matrix = new Matrix();
	int rows = 7;
	int cols = 4;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM1x7)
{
	Matrix *matrix = new Matrix();
	int rows = 1;
	int cols = 7;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM7x1)
{
	Matrix *matrix = new Matrix();
	int rows = 7;
	int cols = 1;

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getZeroMatrix(rows, cols));

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			EXPECT_EQ(0, matrix->getEntry(row, col));
}

//-----------Exception-----------

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM_Exception_rowMinus)
{
	Matrix *matrix = new Matrix();
	int rows = -1;
	int cols = 1;

	GetMatrix GM;
	EXPECT_THROW(*matrix = GM.getZeroMatrix(rows, cols), std::exception);
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM_Exception_colMinus)
{
	Matrix *matrix = new Matrix();
	int rows = 1;
	int cols = -1;

	GetMatrix GM;
	EXPECT_THROW(*matrix = GM.getZeroMatrix(rows, cols), std::exception);
}

TEST(VectorEngineGetMatrixGetZeroMatrix, GZM_Exception_bothMinus)
{
	Matrix *matrix = new Matrix();
	int rows = -1;
	int cols = -1;

	GetMatrix GM;
	EXPECT_THROW(*matrix = GM.getZeroMatrix(rows, cols), std::exception);
}