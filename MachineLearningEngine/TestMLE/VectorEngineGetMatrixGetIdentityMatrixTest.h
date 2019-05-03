#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM1x1)
{
	GetMatrix GM;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = GM.getIdentityMatrix(1));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM2x2)
{
	Matrix *testMatrix = new Matrix(2, 2);
	*testMatrix = { 1, 0,
					0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(2));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(2));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM3x3)
{
	Matrix *testMatrix = new Matrix(3, 3);
	*testMatrix = { 1, 0, 0,
					0, 1, 0,
					0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(3));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(3));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM4x4)
{
	Matrix *testMatrix = new Matrix(4, 4);
	*testMatrix = { 1, 0, 0, 0,
					0, 1, 0, 0,
					0, 0, 1, 0,
					0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(4));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(4));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM5x5)
{
	Matrix *testMatrix = new Matrix(5, 5);
	*testMatrix = { 1, 0, 0, 0, 0,
					0, 1, 0, 0, 0,
					0, 0, 1, 0, 0,
					0, 0, 0, 1, 0,
					0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(5));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(5));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM6x6)
{
	Matrix *testMatrix = new Matrix(6, 6);
	*testMatrix = { 1, 0, 0, 0, 0, 0,
					0, 1, 0, 0, 0, 0,
					0, 0, 1, 0, 0, 0,
					0, 0, 0, 1, 0, 0,
					0, 0, 0, 0, 1, 0,
					0, 0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(6));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(6));
}

//-------ecxeption--------
TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMException1)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(0), std::exception);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMException2)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(-1), std::exception);
}

//---------------------

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble1x1)
{
	GetMatrix GM;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = GM.getIdentityMatrix(1, 1));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble2x2)
{
	Matrix *testMatrix = new Matrix(2, 2);
	*testMatrix = { 1, 0,
					0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(2, 2));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(2, 2));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble3x3)
{
	Matrix *testMatrix = new Matrix(3, 3);
	*testMatrix = { 1, 0, 0,
					0, 1, 0,
					0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(3, 3));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(3, 3));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble4x4)
{
	Matrix *testMatrix = new Matrix(4, 4);
	*testMatrix = { 1, 0, 0, 0,
					0, 1, 0, 0,
					0, 0, 1, 0,
					0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(4, 4));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(4, 4));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble5x5)
{
	Matrix *testMatrix = new Matrix(5, 5);
	*testMatrix = { 1, 0, 0, 0, 0,
					0, 1, 0, 0, 0,
					0, 0, 1, 0, 0,
					0, 0, 0, 1, 0,
					0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(5, 5));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(5, 5));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble6x6)
{
	Matrix *testMatrix = new Matrix(6, 6);
	*testMatrix = { 1, 0, 0, 0, 0, 0,
					0, 1, 0, 0, 0, 0,
					0, 0, 1, 0, 0, 0,
					0, 0, 0, 1, 0, 0,
					0, 0, 0, 0, 1, 0,
					0, 0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(6, 6));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(6, 6));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble1x3)
{
	Matrix *testMatrix = new Matrix(1, 3);
	*testMatrix = { 1, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(1, 3));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(1, 3));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble3x1)
{
	Matrix *testMatrix = new Matrix(3, 1);
	*testMatrix = { 1,
					0,
					0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(3, 1));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(3, 1));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble2x3)
{
	Matrix *testMatrix = new Matrix(2, 3);
	*testMatrix = { 1, 0, 0,
					0, 1, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(2, 3));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(2, 3));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble3x2)
{
	Matrix *testMatrix = new Matrix(3, 2);
	*testMatrix = { 1, 0,
					0, 1,
					0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(3, 2));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(3, 2));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble2x4)
{
	Matrix *testMatrix = new Matrix(2, 4);
	*testMatrix = { 1, 0, 0, 0,
					0, 1, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(2, 4));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(2, 4));
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDouble4x2)
{
	Matrix *testMatrix = new Matrix(4, 2);
	*testMatrix = { 1, 0,
					0, 1,
					0, 0,
					0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(GM.getIdentityMatrix(4, 2));
	EXPECT_TRUE(*testMatrix == GM.getIdentityMatrix(4, 2));
}

//-------Exception----------

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDoubleexception1)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(4, 0), std::exception);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDoubleexception2)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(0, 4), std::exception);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDoubleexception3)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(0, 0), std::exception);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDoubleexception4)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(4, -2), std::exception);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDoubleexception5)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(-2, 4), std::exception);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIMDoubleexception6)
{
	GetMatrix GM;
	EXPECT_THROW(GM.getIdentityMatrix(-1, -3), std::exception);
}

//--------Matrix as Input------------

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 0,
				0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(3, 3);
	*result = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(4, 4);
	*result = { 1, 0, 0, 0,
				0, 1, 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(1, 3);
	*result = { 1, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_3x1)
{
	Matrix *matrix = new Matrix(3, 1);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(3, 1);
	*result = { 1, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 0, 0,
				0, 1, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix(3, 2);
	*result = { 1, 0,
				0, 1, 
				0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}

TEST(VectorEngineGetMatrixGetIdentityMatrix, GIM_MatrixI_No)
{
	Matrix *matrix = new Matrix();
	int rows = matrix->getNumberOfRows();
	int cols = matrix->getNumberOfColumns();

	Matrix *result = new Matrix();
	result->setEntry(0, 0, 1);

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getIdentityMatrix(*matrix));
	EXPECT_EQ(matrix->getNumberOfColumns(), cols);
	EXPECT_EQ(matrix->getNumberOfRows(), rows);

	EXPECT_TRUE(*result == *matrix);
}