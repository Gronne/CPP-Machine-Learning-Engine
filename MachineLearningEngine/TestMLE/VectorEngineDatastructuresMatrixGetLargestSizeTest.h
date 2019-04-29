#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_1_1)
{
	Matrix *matrix = new Matrix(1, 1);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(1, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_1_1_default)
{
	Matrix *matrix = new Matrix();

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(1, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_1_2)
{
	Matrix *matrix = new Matrix(1, 2);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(2, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_2_1)
{
	Matrix *matrix = new Matrix(2, 1);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(2, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_1_10)
{
	Matrix *matrix = new Matrix(1, 10);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(10, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_10_1)
{
	Matrix *matrix = new Matrix(10, 1);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(10, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_3_5)
{
	Matrix *matrix = new Matrix(3, 5);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(5, matrix->getLargestSize());
}

TEST(VectorEngineDatastructurMatrixGetLargestSize, GLS_5_3)
{
	Matrix *matrix = new Matrix(5, 3);

	EXPECT_NO_THROW(matrix->getLargestSize());
	EXPECT_EQ(5, matrix->getLargestSize());
}