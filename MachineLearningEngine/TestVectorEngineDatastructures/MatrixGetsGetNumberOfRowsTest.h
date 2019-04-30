#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixGetsGetNumberOfRows, GetNumberOfRowsNoException)
{
	Matrix *matrix1 = new Matrix(1, 4);
	EXPECT_NO_THROW(matrix1->getNumberOfRows());
	EXPECT_EQ(1, matrix1->getNumberOfRows());

	Matrix *matrix2 = new Matrix(5, 4);
	EXPECT_NO_THROW(matrix1->getNumberOfRows());
	EXPECT_EQ(5, matrix2->getNumberOfRows());

	Matrix *matrix3 = new Matrix(8, 4);
	EXPECT_NO_THROW(matrix1->getNumberOfRows());
	EXPECT_EQ(8, matrix3->getNumberOfRows());
}

TEST(MatrixGetsGetNumberOfRows, GetNumberOfRowsNoExceptionNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_NO_THROW(matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfRows());
}