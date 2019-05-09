#pragma once
#include "VectorEngineDatastructureHeader.h"

//No precision

TEST(VectorEngineTypeMatrixIsEqual, IE_E_NP_Positive)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_NP_Positive)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 2, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_NP_Negative)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_NP_Negative)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -2, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_NP_Mixed)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1,  2, -3,
				  4, -5,  6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_NP_Mixed)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}


//over precision

TEST(VectorEngineTypeMatrixIsEqual, IE_E_OP_Positive_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1.0001, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_OP_Positive_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 2, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_OP_Positive_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1.002, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_OP_Positive_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 3, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_OP_Negative_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1.0001, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_OP_Negative_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -2, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_OP_Negative_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1.002, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_OP_Negative_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -3, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_OP_Mixed_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1.0001, 2, -3,
				 4, -5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_OP_Mixed_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -2,  2, -3,
				  4, -5,  6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_OP_Mixed_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, 2, -3,
				 4, -5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1.002, 2, -3,
				 4, -5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_OP_Mixed_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, 2, -3,
				 4, -5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -3, 2, -3,
				 4, -5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

//under precision

TEST(VectorEngineTypeMatrixIsEqual, IE_E_UP_Positive_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 0.9999, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_UP_Positive_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 0, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_UP_Positive_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 0.998, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_UP_Positive_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { 1, 2, 3,
				 4, 5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -1, 2, 3,
				 4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_UP_Negative_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -0.9999, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_UP_Negative_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -0, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_UP_Negative_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -0.998, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_UP_Negative_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, -2, -3,
				 -4, -5, -6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, -2, -3,
				 -4, -5, -6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_UP_Mixed_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -0.9999, 2, -3,
				 4, -5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_E_UP_Mixed_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1,  2, -3,
				  4, -5,  6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 0,  2, -3,
				  4, -5,  6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_TRUE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_UP_Mixed_Small)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, 2, -3,
				 4, -5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -0.998, 2, -3,
				 4, -5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 0.001));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_EN_UP_Mixed_Big)
{
	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, 2, -3,
				 4, -5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { 1, 2, -3,
				 4, -5, 6 };

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB, 1));
}

//--------exceptions------------

TEST(VectorEngineTypeMatrixIsEqual, IE_NoException)
{
	Matrix *matrixA = new Matrix(2, 3);
	Matrix *matrixB = new Matrix(2, 3);

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, 0));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_ExceptionPrecision1)
{
	Matrix *matrixA = new Matrix(2, 3);
	Matrix *matrixB = new Matrix(2, 3);

	EXPECT_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, -1), std::exception);
}

TEST(VectorEngineTypeMatrixIsEqual, IE_ExceptionPrecision2)
{
	Matrix *matrixA = new Matrix(2, 3);
	Matrix *matrixB = new Matrix(2, 3);

	EXPECT_THROW(TypeMatrix::isEqual(*matrixA, *matrixB, -0.0001), std::exception);
}

TEST(VectorEngineTypeMatrixIsEqual, IE_ExceptionSize1)
{
	Matrix *matrixA = new Matrix(3, 3);
	Matrix *matrixB = new Matrix(2, 3);

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_ExceptionSize2)
{
	Matrix *matrixA = new Matrix(2, 3);
	Matrix *matrixB = new Matrix(3, 3);

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_ExceptionSize3)
{
	Matrix *matrixA = new Matrix(3, 3);
	Matrix *matrixB = new Matrix(2, 2);

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixA));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}

TEST(VectorEngineTypeMatrixIsEqual, IE_ExceptionSize4)
{
	Matrix *matrixA = new Matrix(2, 2);
	Matrix *matrixB = new Matrix(3, 3);

	EXPECT_NO_THROW(TypeMatrix::isEqual(*matrixA, *matrixB));
	EXPECT_FALSE(TypeMatrix::isEqual(*matrixA, *matrixB));
}