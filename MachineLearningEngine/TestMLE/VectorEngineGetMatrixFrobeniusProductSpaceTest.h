#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.2915*5.2915, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.2915*5.2915, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-3, -2, -1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.2915*5.2915, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.2915*5.2915, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3,
				 3, -2,  1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.2915*5.2915, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.2915*5.2915, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				3.5, 2.5, 1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(6.44205*6.44205, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(6.44205*6.44205, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-3.5, -2.5, -1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(6.44205*6.44205, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(6.44205*6.44205, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 3.5, -2.5,  1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(6.44205*6.44205, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(6.44205*6.44205, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSMixedPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1,   2.5, 3,
				3.5, 2,   1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.89491*5.89491, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.89491*5.89491, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSMixedNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5, -3,
				-3.5, -2,   -1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.89491*5.89491, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.89491*5.89491, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSMixedMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,   -2.5,  3,
				 3.5,  2,   -1.5 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.89491*5.89491, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.89491*5.89491, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

//-----Different Sizes------

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes1x3)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3};

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(3.74166*3.74166, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(3.74166*3.74166, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes1x4)
{
	Matrix *matrix = new Matrix(1, 4);
	*matrix = { 1, 2, 3, 4 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.47723*5.47723, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.47723*5.47723, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 4};

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(5.47723*5.47723, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(5.47723*5.47723, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6};

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(9.53939*9.53939, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(9.53939*9.53939, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(204, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(204, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes3x2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(9.53939*9.53939, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(9.53939*9.53939, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(285, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(285, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes3x4)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1,  2,  3,  4,
				5,  6,  7,  8,
				9, 10, 11, 12};

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(650, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(650, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes4x1)
{
	Matrix *matrix = new Matrix(4, 1);
	*matrix = { 1, 2, 3, 1 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(3.87298*3.87298, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(3.87298*3.87298, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes4x2)
{
	Matrix *matrix = new Matrix(4, 2);
	*matrix = { 1, 2,
				3, 4,
				5, 6,
				7, 8 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(204, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(204, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes4x3)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = {  1,  2,  3,
				 4,  5,  6,
				 7,  8,  9,
				10, 11, 12};

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(650, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(650, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSSizes4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = {  1,  2,  3,  4,
				 5,  6,  7,  8, 
				 9, 10, 11, 12,
				13, 14, 15, 16 };

	GetMatrix GM;

	//Single
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix));
	EXPECT_NEAR(1496, GM.frobeniusProductSpace(*matrix), 0.0001);

	//Double
	EXPECT_NO_THROW(GM.frobeniusProductSpace(*matrix, *matrix));
	EXPECT_NEAR(1496, GM.frobeniusProductSpace(*matrix, *matrix), 0.0001);
}

//--------Exception---------

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSException1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 1, 2,
				 3, 2 };

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusProductSpace(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSException2)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(2, 4);
	*matrix2 = { 1, 2, 3, 4,
				 3, 2, 5, 6 };

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusProductSpace(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSException3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(1, 3);
	*matrix2 = { 1, 2, 3 };

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusProductSpace(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixForbeniusProductSpace, FPSException4)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 1, 2, 3,
				 4, 5, 6,
				 7, 8, 9 };

	GetMatrix GM;
	EXPECT_THROW(GM.frobeniusProductSpace(*matrix, *matrix2), std::exception);
}