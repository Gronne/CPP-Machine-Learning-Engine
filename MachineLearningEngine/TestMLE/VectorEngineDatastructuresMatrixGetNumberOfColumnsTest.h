#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetNumberOfColumn, GetNumberOfColumnsNoException)
{
	Matrix *matrix1 = new Matrix(4, 1);
	EXPECT_EQ(1, matrix1->getNumberOfColumns());

	Matrix *matrix2 = new Matrix(4, 5);
	EXPECT_EQ(5, matrix2->getNumberOfColumns());

	Matrix *matrix3 = new Matrix(4, 8);
	EXPECT_EQ(8, matrix3->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrixGetNumberOfColumn, GetNumberOfColumnsNoExceptionNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfColumns());
}
