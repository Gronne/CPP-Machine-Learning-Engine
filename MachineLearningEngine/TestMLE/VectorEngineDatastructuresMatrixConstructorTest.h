#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixConstructor, constructionNoExceptionNoParameters)
{
	EXPECT_NO_THROW(new Matrix());
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionNoNullPtrNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_NE(nullptr, matrix);
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionNoExceptionParameters)
{
	EXPECT_NO_THROW(new Matrix(1, 1));
	EXPECT_NO_THROW(new Matrix(5, 1));
	EXPECT_NO_THROW(new Matrix(1, 5));
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionNoNullPtrParameters)
{
	Matrix *matrix = new Matrix(1, 1);
	EXPECT_NE(nullptr, matrix);
}


TEST(VectorEngineDatastructurMatrixConstructor, constructionExceptionOnlyRows)
{
	EXPECT_THROW(new Matrix(1, 0), std::exception);
	EXPECT_THROW(new Matrix(5, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionExceptionOnlyColumns)
{
	ASSERT_THROW(new Matrix(0, 1), std::exception);
	ASSERT_THROW(new Matrix(0, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionExceptionMinusRowsNoColumn)
{
	ASSERT_THROW(new Matrix(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionExceptionMinusRows)
{
	ASSERT_THROW(new Matrix(-1, 0), std::exception);
	ASSERT_THROW(new Matrix(-5, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionExceptionMinusColums)
{
	ASSERT_THROW(new Matrix(0, -1), std::exception);
	ASSERT_THROW(new Matrix(0, -5), std::exception);
}

TEST(VectorEngineDatastructurMatrixConstructor, constructionExceptionMinusRowsAndColumns)
{
	ASSERT_THROW(new Matrix(-1, -1), std::exception);
	ASSERT_THROW(new Matrix(-5, -1), std::exception);
	ASSERT_THROW(new Matrix(-1, -5), std::exception);
}