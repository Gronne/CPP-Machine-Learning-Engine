#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixForbeniusNorm, FPSHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.2915, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.2915, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-3, -2, -1 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.2915, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.2915, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 3, -2,  1 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.2915, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.2915, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				3.5, 2.5, 1.5 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(6.44205, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(6.44205, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-3.5, -2.5, -1.5 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(6.44205, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(6.44205, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 3.5, -2.5,  1.5 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(6.44205, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(6.44205, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSMixedPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				3.5, 2,   1.5 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.89491, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.89491, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-3.5, -2,   -1.5 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.89491, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.89491, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5,  3,
				 3.5,  2,   -1.5 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.89491, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.89491, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

//-----Different Sizes------

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(3.74166, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(3.74166, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes1x4)
{
	Matrix *matrix = new Matrix(1, 4);
	*matrix = { 1, 2, 3, 4 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.47723, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.47723, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(5.47723, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.47723, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(9.53939, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(9.53939, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(14.2829, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(14.2829, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(9.53939, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(9.53939, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(16.8819, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(16.8819, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1,  2,  3,  4,
				5,  6,  7,  8,
				9, 10, 11, 12 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(25.4951, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(25.4951, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x1)
{
	Matrix *matrix = new Matrix(4, 1);
	*matrix = { 1, 2, 3, 1 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(3.87298, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(3.87298, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x2)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6,
				7, 8 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(14.2829, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(14.2829, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1,  2,  3,
				 4,  5,  6,
				 7,  8,  9,
				10, 11, 12 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(25.4951, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(25.4951, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1,  2,  3,  4,
				 5,  6,  7,  8,
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	//Single
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix));
	EXPECT_NEAR(38.6782, GetMatrix::frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(38.6782, GetMatrix::frobeniusNorm(*matrix, *matrix), 0.0001);
}

//--------Exception---------

TEST(VectorEngineGetMatrixForbeniusNorm, FPSException1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 1, 2,
				 3, 2 };

	EXPECT_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSException2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 1, 2, 3, 4,
				 3, 2, 5, 6 };

	EXPECT_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSException3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(1, 3);
	*matrix2 = { 1, 2, 3 };

	EXPECT_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSException4)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	EXPECT_THROW(GetMatrix::frobeniusNorm(*matrix, *matrix2), std::exception);
}