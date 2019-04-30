#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOthersDeconstructor, DeconstructDifferentRow)
{
	Matrix *matrix = new Matrix(4, 4);
	delete matrix;
	EXPECT_NE(4, matrix->getNumberOfRows());
}

TEST(MatrixOthersDeconstructor, DeconstructDifferentColumn)
{
	Matrix *matrix = new Matrix(4, 4);
	delete matrix;
	EXPECT_NE(4, matrix->getNumberOfColumns());
}