#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixPivotRows, pivotRows0P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotRows(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRows1P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 1,
				2, 2 };

	Matrix *matrixResult = new Matrix(1, 2);
	matrixResult->setEntry(0, 0, 1);
	matrixResult->setEntry(0, 1, 1);

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRows2P2x2M)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				5, 4 };

	Matrix *matrixResult = new Matrix(2, 2);
	*matrixResult = { 1, 2,
					  5, 4 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRows0P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	GetMatrix GM;
	EXPECT_THROW(GM.pivotRows(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRows1P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *matrixResult = new Matrix(1, 3);
	*matrixResult = { 1, 0, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRows2P3x3M)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	Matrix *matrixResult = new Matrix(2, 3);
	*matrixResult = { 1, 0, 0,
					  0, 1, 0 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRows3P3x3M)
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
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRowsZeroSpecial)
{
	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 0, 0, 0, 0, 0,
				0, 1, 0, 0, 0,
				0, 0, 0, 1, 0,
				0, 0, 0, 0, 1 };

	Matrix *matrixResult = new Matrix(3, 5);
	*matrixResult = { 0, 1, 0, 0, 0,
					  0, 0, 0, 1, 0, 
					  0, 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRowsSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				0, 0, 6,
				0, 0, 6 };

	Matrix *matrixResult = new Matrix(2, 3);
	*matrixResult = { 1, 2, 3,
					  0, 0, 6};

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}

TEST(VectorEngineGetMatrixPivotRows, pivotRowsSpecialCase2)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	Matrix *matrixResult = new Matrix(1, 4);
	*matrixResult = { 0, 0, 0, 1 };

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.pivotRows(*matrix));
	EXPECT_TRUE(*matrixResult == *matrix);
}
