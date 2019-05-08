#pragma once
#include "VectorEngineDatastructureHeader.h"

//----------From smaller than to-----------

TEST(VectorEngineGetMatrixNumberSequence, NS_1__1__1_0)
{
	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	double from = 1;
	double to = 1;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_1__1__0_1)
{
	Matrix *result = new Matrix(1, 1);
	result->setEntry(0, 0, 1);

	double from = 1;
	double to = 1;
	double stepSize = 0.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_1__10__1_0)
{
	Matrix *result = new Matrix(1, 10);
	*result = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	double from = 1;
	double to = 10;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_1__2__0_1)
{
	Matrix *result = new Matrix(1, 11);
	*result = { 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0 };

	double from = 1;
	double to = 2;
	double stepSize = 0.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_Minus1__10__1_0)
{
	Matrix *result = new Matrix(1, 12);
	*result = { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	double from = -1;
	double to = 10;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_Minus1__0__0_1)
{
	Matrix *result = new Matrix(1, 11);
	*result = { -1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0.0 };

	double from = -1;
	double to = 0;
	double stepSize = 0.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_1_1__3_3__1_1)
{
	Matrix *result = new Matrix(1, 3);
	*result = { 1.1, 2.2, 3.3 };

	double from = 1.1;
	double to = 3.3;
	double stepSize = 1.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_1__2__1_0)
{
	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 1);
	result->setEntry(0, 1, 2);

	double from = 1;
	double to = 2;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_0__10__2_0)
{
	Matrix *result = new Matrix(1, 6);
	*result = { 0, 2, 4, 6, 8, 10 };

	double from = 0;
	double to = 10;
	double stepSize = 2;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

//----------From smaller than to-----------

TEST(VectorEngineGetMatrixNumberSequence, NS_10__1__1_0)
{
	Matrix *result = new Matrix(1, 10);
	*result = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	double from = 10;
	double to = 1;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_2__1__0_1)
{
	Matrix *result = new Matrix(1, 11);
	*result = { 2.0, 1.9, 1.8, 1.7, 1.6, 1.5, 1.4, 1.3, 1.2, 1.1, 1.0 };

	double from = 2;
	double to = 1;
	double stepSize = 0.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_10__Minus1__1_0)
{
	Matrix *result = new Matrix(1, 12);
	*result = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1 };

	double from = 10;
	double to = -1;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_0__Minus1__0_1)
{
	Matrix *result = new Matrix(1, 11);
	*result = { 0.0, -0.1, -0.2, -0.3, -0.4, -0.5, -0.6, -0.7, -0.8, -0.9, -1 };

	double from = 0;
	double to = -1;
	double stepSize = 0.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_3_3__1_1__1_1)
{
	Matrix *result = new Matrix(1, 3);
	*result = { 3.3, 2.2, 1.1 };

	double from = 3.3;
	double to = 1.1;
	double stepSize = 1.1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_2__1__1_0)
{
	Matrix *result = new Matrix(1, 2);
	result->setEntry(0, 0, 2);
	result->setEntry(0, 1, 1);

	double from = 2;
	double to = 1;
	double stepSize = 1;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_10__0__2_0)
{
	Matrix *result = new Matrix(1, 6);
	*result = { 10, 8, 6, 4, 2, 0 };

	double from = 10;
	double to = 0;
	double stepSize = 2;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

//--------Inbalance--------

TEST(VectorEngineGetMatrixNumberSequence, NS_0__10__3_0)
{
	Matrix *result = new Matrix(1, 4);
	*result = { 0, 3, 6, 9 };

	double from = 0;
	double to = 10;
	double stepSize = 3.0;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_0__1__0_3)
{
	Matrix *result = new Matrix(1, 4);
	*result = { 0, 0.3, 0.6, 0.9 };

	double from = 0;
	double to = 1;
	double stepSize = 0.3;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_10__0__3_0)
{
	Matrix *result = new Matrix(1, 4);
	*result = { 10, 7, 4, 1 };

	double from = 10;
	double to = 0;
	double stepSize = 3.0;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_1__0__0_3)
{
	Matrix *result = new Matrix(1, 4);
	*result = { 1.0, 0.7, 0.4, 0.1 };

	double from = 1;
	double to = 0;
	double stepSize = 0.3;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_0__Minus10__3_0)
{
	Matrix *result = new Matrix(1, 4);
	*result = { 0, -3, -6, -9 };

	double from = 0;
	double to = -10;
	double stepSize = 3.0;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_0__Minus1__0_3)
{
	Matrix *result = new Matrix(1, 4);
	*result = { 0, -0.3, -0.6, -0.9 };

	double from = 0;
	double to = -1;
	double stepSize = 0.3;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_Minus10__0__3_0)
{
	Matrix *result = new Matrix(1, 4);
	*result = { -10, -7, -4, -1 };

	double from = -10;
	double to = 0;
	double stepSize = 3.0;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

TEST(VectorEngineGetMatrixNumberSequence, NS_Minus1__0__0_3)
{
	Matrix *result = new Matrix(1, 4);
	*result = { -1.0, -0.7, -0.4, -0.1 };

	double from = -1;
	double to = 0;
	double stepSize = 0.3;

	EXPECT_NO_THROW(GetMatrix::numberSequence(from, to, stepSize));
	EXPECT_TRUE(TypeMatrix::isEqual(*result, GetMatrix::numberSequence(from, to, stepSize), 0.0001));
}

//--------Exceptions-------

TEST(VectorEngineGetMatrixNumberSequence, NS_0__10__Minus1)
{
	double from = 0;
	double to = 10;
	double stepSize = -1;

	EXPECT_THROW(GetMatrix::numberSequence(from, to, stepSize), std::exception);
}

TEST(VectorEngineGetMatrixNumberSequence, NS_0__10__Minus1_0)
{
	double from = 0;
	double to = 10;
	double stepSize = -0.1;

	EXPECT_THROW(GetMatrix::numberSequence(from, to, stepSize), std::exception);
}