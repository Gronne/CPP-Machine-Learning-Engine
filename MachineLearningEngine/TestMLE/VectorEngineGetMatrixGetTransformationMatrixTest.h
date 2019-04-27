#pragma once
#include "VectorEngineDatastructureHeader.h"

//Different input types
TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				 3, 2, 1,
				 4, 2, 6};

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4, 5, 3,
				 3, 2, 4,
				 4, 2, 7 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.2500, -1.2500, 0.9167,
				 1.7500,  2.7500, 0.4167,
				 0.2500,  0.2500, 0.4167 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				 -3, -2, -1,
				 -4, -2, -6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4, -5, -3,
				 -3, -2, -4,
				 -4, -2, -7 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.2500, -1.2500, 0.9167,
				 1.7500,  2.7500, 0.4167,
				 0.2500,  0.2500, 0.4167 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHoleNegative_2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				 -3, -2, -1,
				 -4, -2, -6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4, 5, 3,
				 3, 2, 4,
				 4, 2, 7 };

	Matrix *result = new Matrix(3, 3);
	*result = {  0.2500,  1.2500, -0.9167,
				-1.7500, -2.7500, -0.4167,
				-0.2500, -0.2500, -0.4167 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3,
				  3, -2,  1,
				 -4,  2, -6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4, 5, 3,
				 -3, 2, 4,
				 -4, -2, -7 };

	Matrix *result = new Matrix(3, 3);
	*result = { -1.7500,  2.9167,  3.4167, 
				-0.2500,  3.0833,  3.0833,
				 1.7500, -0.5833, -0.0833 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

//----------------------------

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				 3.5, 2.5, 1.5,
				 4.5, 2.5, 6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5.5, 3.5,
				 3.5, 2.5, 4.5,
				 4.5, 2.5, 7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.2500, -1.2500,  0.9166,
				 1.6000,  2.6000,  0.2666,
				 0.2500,  0.2500,  0.4166 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				 -3.5, -2.5, -1.5,
				 -4.5, -2.5, -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4.5, -5.5, -3.5,
				 -3.5, -2.5, -4.5,
				 -4.5, -2.5, -7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.2500, -1.2500,  0.9167,
				 1.6000,  2.6000,  0.2667,
				 0.2500,  0.2500,  0.4167 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalNegative_2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				 -3.5, -2.5, -1.5,
				 -4.5, -2.5, -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5.5, 3.5,
				 3.5, 2.5, 4.5,
				 4.5, 2.5, 7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = {  0.2500,  1.2500, -0.9167,
				-1.6000, -2.6000, -0.2667,
				-0.2500, -0.2500, -0.4167 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				  3.5, -2.5,  1.5,
				 -4.5,  2.5, -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4.5, 5.5, 3.5,
				 -3.5, 2.5, 4.5,
				 -4.5, -2.5, -7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -2.0000,  3.3333,  3.8333,
				-0.2000,  3.2667,  3.4667,
				 2.0000, -0.6667, -0.1667 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

//-------------------------------------------------------------

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2,   3.5,
				 3  , 2.5, 1,
				 4.5, 2  , 6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5,   3,
				 3.5, 2,   4,
				 4.5, 2.5, 7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.4722, -1.5694, 1.1806,
				 1.7778,  2.3889, 0.0556,
				 0.4722,  0.7361, 0.3194 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				 -3  , -2.5, -1,
				 -4.5, -2  , -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4.5, -5,   -3,
				 -3.5, -2,   -4,
				 -4.5, -2.5, -7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.4722, -1.5694, 1.1806,
				 1.7778,  2.3889, 0.0556,
				 0.4722,  0.7361, 0.3194 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedNegative_2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,   -3.5,
				 -3  , -2.5, -1,
				 -4.5, -2  , -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5,   3,
				 3.5, 2,   4,
				 4.5, 2.5, 7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = {  0.4722,   1.5694, -1.1806,
				-1.7778,  -2.3889, -0.0556,
				-0.4722,  -0.7361, -0.3194 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2,    3.5,
				  3  , -2.5, -1,
				  4.5,  2  , -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = {  4.5,  5,   -3,
				 -3.5,  2,   -4,
				 -4.5, -2.5, 7.5 };

	Matrix *result = new Matrix(3, 3);
	*result = { 18.2500, 17.4583, 16.6250,
				16.0000, 13.5000, 15.5000,
				18.2500, 16.6250, 15.1250 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}



//Different sizes

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize1x1)
{
	Matrix *matrix = new Matrix();
	matrix->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix();
	matrix2->setEntry(0, 0, 5);

	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_NEAR(5, matrix->getEntry(0, 0), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				 3, 2  };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 4, 5,
				 3, 2 };

	Matrix *result = new Matrix(2, 2);
	*result = { -0.5000, -1.5000,
				 2.2500,  3.2500 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				 3, 2, 1,
				 4, 2, 6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4, 5, 3,
				 3, 2, 4,
				 4, 2, 7 };

	Matrix *result = new Matrix(3, 3);
	*result = { -0.2500, -1.2500, 0.9167,
				 1.7500,  2.7500, 0.4167,
				 0.2500,  0.2500, 0.4167 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4,
				 3, 2, 1, 0,
				 4, 2, 6, 3,
				 1, 2, 6, 5};

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = { 4, 5, 3, 2,
				 3, 2, 4, 9,
				 4, 2, 7, 9,
				 6, 5, 4, 7};

	Matrix *result = new Matrix(4, 4);
	*result = { -1.2222, -0.6667, 1.1111, -2.3333,
				 2.8611,  2.0833, 0.1944,  6.4167,
				 0.9444, -0.1667, 0.2778,  3.1667,
				-0.8333,  0.5000, 0.1667, -4.5000 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize2x2_2x3)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				 3, 1 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1, 2, 3,
				 3, 2, 4};

	Matrix *result = new Matrix(2, 3);
	*result = { 1.0000, 0.4000, 1.0000,
				0.0000, 0.8000, 1.0000 };

	TypeMatrix TM;
	GetMatrix GM;
	EXPECT_NO_THROW(*matrix = GM.getTransformationMatrix(*matrix, *matrix2));
	EXPECT_TRUE(TM.isEqual(*matrix, *result, 0.0001));
}

//Exceptions
TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException1)
{
	Matrix *matrix = new Matrix(3, 2);
	Matrix *matrix2 = new Matrix(2, 3);

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException3)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 2);

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException4)
{
	Matrix *matrix = new Matrix(3, 2);
	Matrix *matrix2 = new Matrix(3, 2);

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException5)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 2);

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix, *matrix2), std::exception);
}

//Special cases
