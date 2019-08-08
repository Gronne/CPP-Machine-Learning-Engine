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

TEST(MatrixOthersConstructor, constructRefMatrix3x3NoInstiantion)
{
	Matrix *matrix = new Matrix(3, 3);

	EXPECT_NO_THROW(new Matrix(*matrix));
}

TEST(MatrixOthersConstructor, constructRefMatrix3x3Instiantion)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_NO_THROW(new Matrix(*matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(new Matrix(*matrix), matrix));
}

TEST(MatrixOthersConstructor, constructRefMatrix1x1NoInstiantion)
{
	Matrix *matrix = new Matrix();

	EXPECT_NO_THROW(new Matrix(*matrix));
}

TEST(MatrixOthersConstructor, constructRefMatrix2x3NoInstiantion)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(new Matrix(*matrix));
}

TEST(MatrixOthersConstructor, constructRefMatrix3x2NoInstiantion)
{
	Matrix *matrix = new Matrix(3, 2);

	EXPECT_NO_THROW(new Matrix(*matrix));
}

TEST(MatrixOthersConstructor, constructRefMatrixMultiplication)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_NO_THROW(*matrix * (new Matrix(*matrix)));
}


TEST(MatrixOthersConstructor, constructPointerMatrix3x3NoInstiantion)
{
	Matrix *matrix = new Matrix(3, 3);

	EXPECT_NO_THROW(new Matrix(matrix));
}

TEST(MatrixOthersConstructor, constructPointerMatrix3x3Instiantion)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_NO_THROW(new Matrix(matrix));
	EXPECT_TRUE(TypeMatrix::isEqual(new Matrix(matrix), matrix));
}

TEST(MatrixOthersConstructor, constructPointerMatrix1x1NoInstiantion)
{
	Matrix *matrix = new Matrix();

	EXPECT_NO_THROW(new Matrix(matrix));
}

TEST(MatrixOthersConstructor, constructPointerMatrix2x3NoInstiantion)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(new Matrix(matrix));
}

TEST(MatrixOthersConstructor, constructPointerMatrix3x2NoInstiantion)
{
	Matrix *matrix = new Matrix(3, 2);

	EXPECT_NO_THROW(new Matrix(matrix));
}

TEST(MatrixOthersConstructor, constructPointerMatrixMultiplication)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	EXPECT_NO_THROW(*matrix * (new Matrix(matrix)));
}