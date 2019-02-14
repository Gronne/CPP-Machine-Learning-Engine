#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetNumberOfRows, GetNumberOfRowsNoException)
{
	Matrix *matrix1 = new Matrix(1, 4);
	EXPECT_EQ(1, matrix1->getNumberOfRows());

	Matrix *matrix2 = new Matrix(5, 4);
	EXPECT_EQ(5, matrix2->getNumberOfRows());

	Matrix *matrix3 = new Matrix(8, 4);
	EXPECT_EQ(8, matrix3->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixGetNumberOfRows, GetNumberOfRowsNoExceptionNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfRows());
}