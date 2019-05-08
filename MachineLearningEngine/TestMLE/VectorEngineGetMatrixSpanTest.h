#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixSpan, spanHolePositive)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1, 
				5, 3, 7, 4 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanHoleNegative)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1, -2, -3, -4,
				-4, -3, -2, -1,
				-5, -3, -7, -4 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanHoleMixed)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);
	 
	*matrix = { -1,  2, -3,  4,
				 4, -3,  2, -1,
				-5,  3,  7, -4 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanDecimalPositive)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1.5, 2.5, 3.5, 4.5,
				4.5, 3.5, 2.5, 1.5,
				5.5, 3.5, 7.5, 4.5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanDecimalNegative)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-4.5, -3.5, -2.5, -1.5,
				-5.5, -3.5, -7.5, -4.5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanDecimalMixed)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5,  2.5, -3.5,  4.5,
				 4.5, -3.5,  2.5, -1.5,
				-5.5,  3.5,  7.5, -4.5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanMixedPositive)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1,   2.5, 3,   4.5,
				4.5, 3,   2.5, 1,
				5.5, 3,   7,   4.5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanMixedNegative)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, -3,   -4.5,
				-4.5, -3,   -2.5, -1,
				-5.5, -3,   -7,   -4.5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanMixedMixed)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, 3,   4.5,
				4.5, -3,   -2.5, 1,
				5.5, 3,   -7,   -4.5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanZero)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanFullDependent)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				1, 2, 3, 4,
				1, 2, 3, 4 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

//Different sizes
TEST(VectorEngineGetMatrixSpan, span3x2)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				4, 8,
				3, 6};

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_TRUE(matrix->getColumn(1) == matrix->getColumn(0) * *buffer);
}

TEST(VectorEngineGetMatrixSpan, span3x3)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 1, 2, 8,
				4, 3, 17,
				5, 3, 19 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn(0) * buffer->getEntry(0, 0) + matrix->getColumn(1) * buffer->getEntry(1, 0));
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(2).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(2).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(2).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, span3x4)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				5, 3, 7, 4 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, span3x5)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 5);

	*matrix = { 1, 2, 3, 4, 1,
				4, 3, 2, 1, 1,
				5, 3, 7, 4, 5 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2, 3 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(4).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(4).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(4).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, span2x4)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1 };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_TRUE(matrix->getColumn(3) == matrix->getColumn({ 0, 1, 2 }) * *buffer);
}

TEST(VectorEngineGetMatrixSpan, span2x3)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 3);

	*matrix = { 1, 2, 3,
				4, 3, 2};

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn(0) * buffer->getEntry(0, 0) + matrix->getColumn(1) * buffer->getEntry(1, 0));
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(2).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(2).getEntry(1, 0), 0.0001);
}

//Exceptions
TEST(VectorEngineGetMatrixSpan, spanExceptionZero)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, spanException3x1DontMatch)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1,
				4,
				5};

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, spanException3x2NotSameDimension)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				4, 3,
				5, 3 };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, spanException3x4NotSameDimension)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				4, 3, 2, 4 };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix), std::exception);
}


//----------------double matrix---------------------

TEST(VectorEngineGetMatrixSpan, doubleSpanHolePositive)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				5, 3, 7, 4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanHoleNegative)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1, -2, -3, -4,
				-4, -3, -2, -1,
				-5, -3, -7, -4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanHoleMixed)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,  2, -3,  4,
				 4, -3,  2, -1,
				-5,  3,  7, -4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanDecimalPositive)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1.5, 2.5, 3.5, 4.5,
				4.5, 3.5, 2.5, 1.5,
				5.5, 3.5, 7.5, 4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanDecimalNegative)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-4.5, -3.5, -2.5, -1.5,
				-5.5, -3.5, -7.5, -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanDecimalMixed)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5,  2.5, -3.5,  4.5,
				 4.5, -3.5,  2.5, -1.5,
				-5.5,  3.5,  7.5, -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanMixedPositive)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1,   2.5, 3,   4.5,
				4.5, 3,   2.5, 1,
				5.5, 3,   7,   4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanMixedNegative)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, -3,   -4.5,
				-4.5, -3,   -2.5, -1,
				-5.5, -3,   -7,   -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanMixedMixed)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, 3,   4.5,
				4.5, -3,   -2.5, 1,
				5.5, 3,   -7,   -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanZero)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 0,
				0,
				0, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}



//Different sizes
TEST(VectorEngineGetMatrixSpan, doubleSpan3x2Plus1)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1,
				4,
				3 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 2,
				8,
				6, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan3x2Plus1_2)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				4, 3,
				5, 3 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 8,
				17,
				19, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan3x3Plus1)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 1, 2, 3,
				4, 3, 2,
				5, 3, 7 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				1,
				4, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan3x4Plus1)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				5, 3, 7, 4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				1,
				5, };

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan2x4Plus1)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1 };

	Matrix *secMat = new Matrix(2, 1);
	secMat->setEntry(0, 0, 4);
	secMat->setEntry(1, 0, 2);

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan2x2Plus1)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 2);

	*matrix = { 1, 2,
				4, 3 };

	Matrix *secMat = new Matrix(2, 1);
	secMat->setEntry(0, 0, 3);
	secMat->setEntry(1, 0, 2);

	EXPECT_NO_THROW(*buffer = GetMatrix::span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
}

//Exceptions
TEST(VectorEngineGetMatrixSpan, doubleSpanExceptionZero)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				0,
				0, };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanException3x1Plus1DontMatch)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1,
				4,
				5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				1,
				5, };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanException3x2Plus1NotSameDimension)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				3, 2,
				3, 2 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 3,
				1,
				5, };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanException3x4Plus1NotSameDimension)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				5, 4, 3, 2,
				5, 4, 3, 2 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 5,
				1,
				5, };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, SpanSpecialCaseException)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanSpecialCaseException)
{
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				0,
				0, };

	EXPECT_THROW(*buffer = GetMatrix::span(*matrix, *secMat), std::exception);
}

