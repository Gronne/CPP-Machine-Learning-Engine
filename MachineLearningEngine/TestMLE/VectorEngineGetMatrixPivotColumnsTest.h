#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixPivotColumns, pivotColumns0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotColumns(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumns1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	Matrix *matrixResult = new Matrix(2, 1);
	matrixResult->setEntry(0, 0, 1);
	matrixResult->setEntry(1, 0, 2);

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumns2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	Matrix *matrixResult = new Matrix(2, 2);
	*matrixResult = { 1, 2,
					  5, 4 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumns0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotColumns(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumns1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *matrixResult = new Matrix(3, 1);
	*matrixResult = { 1, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumns2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	Matrix *matrixResult = new Matrix(3, 2);
	*matrixResult = { 1, 0,
					  0, 1,
					  0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumns3P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	Matrix *matrixResult = new Matrix(3, 3);
	*matrixResult = { 1, 0, 0,
					  0, 1, 0,
					  0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumnsZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0,
				0, 0, 0, 0, 1 };

	Matrix *matrixResult = new Matrix(4, 3);
	*matrixResult = { 0, 0, 0,
					  1, 0, 0,
					  0, 1, 0,
					  0, 0, 1};

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotColumns, pivotColumnsSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				0, 0, 6,
				0, 0, 6 };

	Matrix *matrixResult = new Matrix(3, 2);
	*matrixResult = { 1, 3,
					  0, 6,
					  0, 6 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotColumns(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}