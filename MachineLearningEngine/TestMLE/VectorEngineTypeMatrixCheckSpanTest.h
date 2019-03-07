#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixCheckSpan, checkSpanNotSpan)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 4);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(3, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);
	spanMatrix->setEntry(2, 0, 5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanException1)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(4, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);
	spanMatrix->setEntry(2, 0, 5);
	spanMatrix->setEntry(3, 0, 5);

	TypeMatrix TM;
	EXPECT_THROW(TM.checkSpan(*matrix, *spanMatrix), std::exception);
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanException2)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(2, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);

	TypeMatrix TM;
	EXPECT_THROW(TM.checkSpan(*matrix, *spanMatrix), std::exception);
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanSpanRow)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(3, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);
	spanMatrix->setEntry(2, 0, 5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanSpanCol)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(1, 3);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(0, 1, 3);
	spanMatrix->setEntry(0, 2, 5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanSpanMatrixRow)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(2, 3);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(0, 1, 3);
	spanMatrix->setEntry(0, 2, 5);
	spanMatrix->setEntry(1, 0, 1);
	spanMatrix->setEntry(1, 1, 3);
	spanMatrix->setEntry(1, 2, 5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanSpanMatrixCol)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(3, 2);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);
	spanMatrix->setEntry(2, 0, 5);
	spanMatrix->setEntry(0, 1, 1);
	spanMatrix->setEntry(1, 1, 3);
	spanMatrix->setEntry(2, 1, 5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanSpan1DimensionTrue)
{
	Matrix *matrix = new Matrix(2, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 4);

	Matrix *spanMatrix = new Matrix(2, 2);
	spanMatrix->setEntry(0, 0, 3);
	spanMatrix->setEntry(0, 1, 6);
	spanMatrix->setEntry(1, 0, 4);
	spanMatrix->setEntry(1, 1, 8);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_TRUE(TM.checkSpan(*matrix, *spanMatrix));
}

TEST(VectorEngineTypeMatrixCheckpan, checkSpanSpan1DimensionFalse)
{
	Matrix *matrix = new Matrix(2, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 4);

	Matrix *spanMatrix = new Matrix(2, 2);
	spanMatrix->setEntry(0, 0, 3);
	spanMatrix->setEntry(0, 1, 6);
	spanMatrix->setEntry(1, 0, 3);
	spanMatrix->setEntry(1, 1, 8);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.checkSpan(*matrix, *spanMatrix));
	EXPECT_FALSE(TM.checkSpan(*matrix, *spanMatrix));
}