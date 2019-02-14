#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixDeconstructor, DeconstructDifferentRow)
{
	Matrix *matrix = new Matrix(4, 4);
	delete matrix;
	EXPECT_NE(4, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrixDeconstructor, DeconstructDifferentColumn)
{
	Matrix *matrix = new Matrix(4, 4);
	delete matrix;
	EXPECT_NE(4, matrix->getNumberOfColumns());
}