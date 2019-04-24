#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixSpan, spanHolePositive)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1, 
				5, 3, 7, 4 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanHoleNegative)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1, -2, -3, -4,
				-4, -3, -2, -1,
				-5, -3, -7, -4 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanHoleMixed)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);
	 
	*matrix = { -1,  2, -3,  4,
				 4, -3,  2, -1,
				-5,  3,  7, -4 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanDecimalPositive)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1.5, 2.5, 3.5, 4.5,
				4.5, 3.5, 2.5, 1.5,
				5.5, 3.5, 7.5, 4.5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanDecimalNegative)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-4.5, -3.5, -2.5, -1.5,
				-5.5, -3.5, -7.5, -4.5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanDecimalMixed)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5,  2.5, -3.5,  4.5,
				 4.5, -3.5,  2.5, -1.5,
				-5.5,  3.5,  7.5, -4.5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanMixedPositive)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1,   2.5, 3,   4.5,
				4.5, 3,   2.5, 1,
				5.5, 3,   7,   4.5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanMixedNegative)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, -3,   -4.5,
				-4.5, -3,   -2.5, -1,
				-5.5, -3,   -7,   -4.5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanMixedMixed)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, 3,   4.5,
				4.5, -3,   -2.5, 1,
				5.5, 3,   -7,   -4.5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanZero)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, spanFullDependent)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				1, 2, 3, 4,
				1, 2, 3, 4 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

//Different sizes
TEST(VectorEngineGetMatrixSpan, span3x2)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				4, 8,
				3, 6};

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_TRUE(matrix->getColumn(1) == matrix->getColumn(0) * *buffer);
}

TEST(VectorEngineGetMatrixSpan, span3x3)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 1, 2, 8,
				4, 3, 17,
				5, 3, 19 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn(0) * buffer->getEntry(0, 0) + matrix->getColumn(1) * buffer->getEntry(1, 0));
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(2).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(2).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(2).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, span3x4)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				5, 3, 7, 4 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(3).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(3).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(3).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, span3x5)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 5);

	*matrix = { 1, 2, 3, 4, 1,
				4, 3, 2, 1, 1,
				5, 3, 7, 4, 5 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn({ 0, 1, 2, 3 }) * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(4).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(4).getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), matrix->getColumn(4).getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, span2x4)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1 };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_TRUE(matrix->getColumn(3) == matrix->getColumn({ 0, 1, 2 }) * *buffer);
}

TEST(VectorEngineGetMatrixSpan, span2x3)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 3);

	*matrix = { 1, 2, 3,
				4, 3, 2};

	EXPECT_NO_THROW(*buffer = GM.span(*matrix));
	EXPECT_NO_THROW(*buffer = matrix->getColumn(0) * buffer->getEntry(0, 0) + matrix->getColumn(1) * buffer->getEntry(1, 0));
	EXPECT_NEAR(buffer->getEntry(0, 0), matrix->getColumn(2).getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), matrix->getColumn(2).getEntry(1, 0), 0.0001);
}

//Exceptions
TEST(VectorEngineGetMatrixSpan, spanExceptionZero)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_THROW(*buffer = GM.span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, spanException3x1DontMatch)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1,
				4,
				5};

	EXPECT_THROW(*buffer = GM.span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, spanException3x2NotSameDimension)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				4, 3,
				5, 3 };

	EXPECT_THROW(*buffer = GM.span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, spanException3x4NotSameDimension)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				4, 3, 2, 4 };

	EXPECT_THROW(*buffer = GM.span(*matrix), std::exception);
}










//----------------double matrix---------------------

TEST(VectorEngineGetMatrixSpan, doubleSpanHolePositive)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				5, 3, 7, 4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanHoleNegative)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1, -2, -3, -4,
				-4, -3, -2, -1,
				-5, -3, -7, -4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanHoleMixed)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,  2, -3,  4,
				 4, -3,  2, -1,
				-5,  3,  7, -4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanDecimalPositive)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1.5, 2.5, 3.5, 4.5,
				4.5, 3.5, 2.5, 1.5,
				5.5, 3.5, 7.5, 4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanDecimalNegative)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5, -2.5, -3.5, -4.5,
				-4.5, -3.5, -2.5, -1.5,
				-5.5, -3.5, -7.5, -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanDecimalMixed)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1.5,  2.5, -3.5,  4.5,
				 4.5, -3.5,  2.5, -1.5,
				-5.5,  3.5,  7.5, -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanMixedPositive)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1,   2.5, 3,   4.5,
				4.5, 3,   2.5, 1,
				5.5, 3,   7,   4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanMixedNegative)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, -3,   -4.5,
				-4.5, -3,   -2.5, -1,
				-5.5, -3,   -7,   -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanMixedMixed)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { -1,   -2.5, 3,   4.5,
				4.5, -3,   -2.5, 1,
				5.5, 3,   -7,   -4.5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				4,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanZero)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 0,
				0,
				0, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}



//Different sizes
TEST(VectorEngineGetMatrixSpan, doubleSpan3x2Plus1)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1,
				4,
				3 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 2,
				8,
				6, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan3x2Plus1_2)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				4, 3,
				5, 3 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 8,
				17,
				19, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan3x3Plus1)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 1, 2, 3,
				4, 3, 2,
				5, 3, 7 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 4,
				1,
				4, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan3x4Plus1)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1,
				5, 3, 7, 4 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				1,
				5, };

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(2, 0), secMat->getEntry(2, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan2x4Plus1)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 4);

	*matrix = { 1, 2, 3, 4,
				4, 3, 2, 1 };

	Matrix *secMat = new Matrix(2, 1);
	secMat->setEntry(0, 0, 4);
	secMat->setEntry(1, 0, 2);

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
}

TEST(VectorEngineGetMatrixSpan, doubleSpan2x2Plus1)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(2, 2);

	*matrix = { 1, 2,
				4, 3 };

	Matrix *secMat = new Matrix(2, 1);
	secMat->setEntry(0, 0, 3);
	secMat->setEntry(1, 0, 2);

	EXPECT_NO_THROW(*buffer = GM.span(*matrix, *secMat));
	EXPECT_NO_THROW(*buffer = *matrix * *buffer);
	EXPECT_NEAR(buffer->getEntry(0, 0), secMat->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(buffer->getEntry(1, 0), secMat->getEntry(1, 0), 0.0001);
}

//Exceptions
TEST(VectorEngineGetMatrixSpan, doubleSpanExceptionZero)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				0,
				0, };

	EXPECT_THROW(*buffer = GM.span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanException3x1Plus1DontMatch)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1,
				4,
				5 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				1,
				5, };

	EXPECT_THROW(*buffer = GM.span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanException3x2Plus1NotSameDimension)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 2);

	*matrix = { 1, 2,
				3, 2,
				3, 2 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 3,
				1,
				5, };

	EXPECT_THROW(*buffer = GM.span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanException3x4Plus1NotSameDimension)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 1, 2, 3, 4,
				5, 4, 3, 2,
				5, 4, 3, 2 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 5,
				1,
				5, };

	EXPECT_THROW(*buffer = GM.span(*matrix, *secMat), std::exception);
}

TEST(VectorEngineGetMatrixSpan, SpanSpecialCaseException)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_THROW(*buffer = GM.span(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixSpan, doubleSpanSpecialCaseException)
{
	GetMatrix GM;
	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 1,
				0,
				0, };

	EXPECT_THROW(*buffer = GM.span(*matrix, *secMat), std::exception);
}

