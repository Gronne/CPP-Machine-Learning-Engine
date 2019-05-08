#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_true_1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_TRUE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_true_2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_TRUE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_2x2_1)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 0, 0,
				0, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_2x2_2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 2, 4,
				3, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_true_3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_TRUE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_3x3_1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 1, 0,
				0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_3x3_2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_true_3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 0, 0,
				0, 0,
				0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_TRUE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 0, 0,
				0, 1,
				0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_true_2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_TRUE(TM.isZeroMatrix(*matrix));
}

TEST(VectorEngineTypeMatrixIsZeroMatrix, IZM_false_2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 0, 0, 0,
				0, 1, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.isZeroMatrix(*matrix));
	EXPECT_FALSE(TM.isZeroMatrix(*matrix));
}