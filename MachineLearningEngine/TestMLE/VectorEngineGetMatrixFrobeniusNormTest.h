#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixForbeniusNorm, FPSHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.2915, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.2915, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-3, -2, -1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.2915, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.2915, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 3, -2,  1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.2915, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.2915, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				3.5, 2.5, 1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(6.44205, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(6.44205, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-3.5, -2.5, -1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(6.44205, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(6.44205, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 3.5, -2.5,  1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(6.44205, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(6.44205, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSMixedPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				3.5, 2,   1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.89491, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.89491, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-3.5, -2,   -1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.89491, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.89491, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5,  3,
				 3.5,  2,   -1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.89491, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.89491, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

//-----Different Sizes------

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(3.74166, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(3.74166, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes1x4)
{
	Matrix *matrix = new Matrix(1, 4);
	*matrix = { 1, 2, 3, 4 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.47723, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.47723, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(5.47723, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(5.47723, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(9.53939, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(9.53939, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(14.2829, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(14.2829, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(9.53939, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(9.53939, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(16.8819, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(16.8819, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1,  2,  3,  4,
				5,  6,  7,  8,
				9, 10, 11, 12 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(25.4951, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(25.4951, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x1)
{
	Matrix *matrix = new Matrix(4, 1);
	*matrix = { 1, 2, 3, 1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(3.87298, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(3.87298, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x2)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6,
				7, 8 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(14.2829, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(14.2829, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1,  2,  3,
				 4,  5,  6,
				 7,  8,  9,
				10, 11, 12 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(25.4951, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(25.4951, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSSizes4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1,  2,  3,  4,
				 5,  6,  7,  8,
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix));
	EXPECT_NEAR(38.6782, GM.frobeniusNorm(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusNorm(*matrix, *matrix));
	EXPECT_NEAR(38.6782, GM.frobeniusNorm(*matrix, *matrix), 0.0001);
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

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusNorm(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSException2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 1, 2, 3, 4,
				 3, 2, 5, 6 };

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusNorm(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusNorm, FPSException3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(1, 3);
	*matrix2 = { 1, 2, 3 };

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusNorm(*matrix, *matrix2), std::exception);
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

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusNorm(*matrix, *matrix2), std::exception);
}