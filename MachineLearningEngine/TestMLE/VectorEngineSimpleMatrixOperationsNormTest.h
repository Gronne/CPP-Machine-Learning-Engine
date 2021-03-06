#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineSimpleMatrixOperationsNorm, normHolePositiveCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normHolePositiveRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(17, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normHoleNegativeCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normHoleNegativeRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(17, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normHoleMixedCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normHoleMixedRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				 4, -5,  6,
				-7,  8, -2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(17, SimpleMatrixOperations::norm(*matrix, 0));
}

//-------------

TEST(VectorEngineSimpleMatrixOperationsNorm, normDecimalPositiveCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(16.5, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normDecimalPositiveRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(18.5, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normDecimalNegativeCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(16.5, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normDecimalNegativeRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(18.5, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normDecimalMixedCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(16.5, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normDecimalMixedRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(18.5, SimpleMatrixOperations::norm(*matrix, 0));
}

//----------------

TEST(VectorEngineSimpleMatrixOperationsNorm, normMixedPositiveCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15.5, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normMixedPositiveRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(18, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normMixedNegativeCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15.5, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normMixedNegativeRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				-4,   -5.5, -6,
				-7.5, -8,   -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(18, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normMixedMixedCol)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				4,   -5.5, 6,
				7.5, 8,   -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15.5, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, normMixedMixedRow)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2,   3.5,
				4,   -5.5, 6,
				7.5, 8,   -2.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(18, SimpleMatrixOperations::norm(*matrix, 0));
}

//-------different sizes------

TEST(VectorEngineSimpleMatrixOperationsNorm, norm1x1Col)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 8);

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(8, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm1x1Row)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 8);

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(8, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm2x2Col)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(7, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm2x2Row)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(9, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm3x3Col)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(15, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm3x3Row)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(17, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm4x4Col)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				4, 5, 6, 7,
				7, 8, 2, 9,
				4, 2, 7, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(25, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm4x4Row)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				4, 5, 6, 7,
				7, 8, 2, 9,
				4, 2, 7, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(26, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm3x1Col)
{
	Matrix *matrix = new Matrix(3, 1);
	*matrix = { 1,
				6,
				7 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(14, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm3x1Row)
{
	Matrix *matrix = new Matrix(3, 1);
	*matrix = { 1,
				6,
				7 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(7, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm1x3Col)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(3, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm1x3Row)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(6, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm3x2Col)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 6,
				7, 8 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(16, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm3x2Row)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				4, 6,
				7, 8 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(15, SimpleMatrixOperations::norm(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm2x3Col)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix));
	EXPECT_EQ(9, SimpleMatrixOperations::norm(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsNorm, norm2x3Row)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::norm(*matrix, 0));
	EXPECT_EQ(15, SimpleMatrixOperations::norm(*matrix, 0));
}