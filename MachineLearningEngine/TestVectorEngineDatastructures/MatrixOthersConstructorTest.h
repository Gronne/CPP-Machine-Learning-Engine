#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixOthersConstructor, constructionNoExceptionNoParameters)
{
	EXPECT_NO_THROW(new Matrix());
}

TEST(MatrixOthersConstructor, constructionNoNullPtrNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_NE(nullptr, matrix);
}

TEST(MatrixOthersConstructor, constructorStack)
{
	EXPECT_NO_THROW(Matrix matrixA);
	EXPECT_NO_THROW(Matrix matrixB(1, 2));
}


TEST(MatrixOthersConstructor, constructionNoExceptionParameters)
{
	EXPECT_NO_THROW(new Matrix(1, 1));
	EXPECT_NO_THROW(new Matrix(5, 1));
	EXPECT_NO_THROW(new Matrix(1, 5));
}

TEST(MatrixOthersConstructor, constructionNoNullPtrParameters)
{
	Matrix *matrix = new Matrix(1, 1);
	EXPECT_NE(nullptr, matrix);
}


TEST(MatrixOthersConstructor, constructionExceptionOnlyRows)
{
	EXPECT_THROW(new Matrix(1, 0), std::exception);
	EXPECT_THROW(new Matrix(5, 0), std::exception);
}

TEST(MatrixOthersConstructor, constructionExceptionOnlyColumns)
{
	ASSERT_THROW(new Matrix(0, 1), std::exception);
	ASSERT_THROW(new Matrix(0, 5), std::exception);
}

TEST(MatrixOthersConstructor, constructionExceptionMinusRowsNoColumn)
{
	ASSERT_THROW(new Matrix(-1), std::exception);
}

TEST(MatrixOthersConstructor, constructionExceptionMinusRows)
{
	ASSERT_THROW(new Matrix(-1, 0), std::exception);
	ASSERT_THROW(new Matrix(-5, 0), std::exception);
}

TEST(MatrixOthersConstructor, constructionExceptionMinusColums)
{
	ASSERT_THROW(new Matrix(0, -1), std::exception);
	ASSERT_THROW(new Matrix(0, -5), std::exception);
}

TEST(MatrixOthersConstructor, constructionExceptionMinusRowsAndColumns)
{
	ASSERT_THROW(new Matrix(-1, -1), std::exception);
	ASSERT_THROW(new Matrix(-5, -1), std::exception);
	ASSERT_THROW(new Matrix(-1, -5), std::exception);
}
