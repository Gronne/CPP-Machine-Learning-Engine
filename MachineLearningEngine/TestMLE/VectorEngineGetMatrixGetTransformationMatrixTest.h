#pragma once
#include "VectorEngineDatastructureHeader.h"

//Different input types
TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHolePositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1, 2, 3,
				 3, 2, 1,
				 4, 2, 6};

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4, 5, 3,
				 3, 2, 4,
				 4, 2, 7 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR( 0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR( 1.7500, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR( 2.7500, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR( 0.4167, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR( 0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR( 0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR( 0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHoleNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1, -2, -3,
				 -3, -2, -1,
				 -4, -2, -6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4, -5, -3,
				 -3, -2, -4,
				 -4, -2, -7 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(1.7500, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.7500, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.4167, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHoleNegative_2)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1, -2, -3,
				 -3, -2, -1,
				 -4, -2, -6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4, 5, 3,
				 3, 2, 4,
				 4, 2, 7 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR( 0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR( 1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(-0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(-1.7500, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-2.7500, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-0.4167, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(-0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(-0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMHoleMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1,  2, -3,
				  3, -2,  1,
				 -4,  2, -6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4, 5, 3,
				 -3, 2, 4,
				 -4, -2, -7 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-1.7500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR( 2.9167, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR( 3.4167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(-0.2500, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR( 3.0833, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR( 3.0833, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR( 1.7500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.5833, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(-0.0833, buffer->getEntry(2, 2), 0.0001);
}

//----------------------------

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalPositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1.5, 2.5, 3.5,
				 3.5, 2.5, 1.5,
				 4.5, 2.5, 6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5.5, 3.5,
				 3.5, 2.5, 4.5,
				 4.5, 2.5, 7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(1.600, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.600, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.2667, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1.5, -2.5, -3.5,
				 -3.5, -2.5, -1.5,
				 -4.5, -2.5, -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4.5, -5.5, -3.5,
				 -3.5, -2.5, -4.5,
				 -4.5, -2.5, -7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(1.600, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.600, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.2667, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalNegative_2)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1.5, -2.5, -3.5,
				 -3.5, -2.5, -1.5,
				 -4.5, -2.5, -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5.5, 3.5,
				 3.5, 2.5, 4.5,
				 4.5, 2.5, 7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(-0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(-1.600, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-2.600, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-0.2667, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(-0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(-0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMDecimalMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1.5,  2.5, -3.5,
				  3.5, -2.5,  1.5,
				 -4.5,  2.5, -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4.5, 5.5, 3.5,
				 -3.5, 2.5, 4.5,
				 -4.5, -2.5, -7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-2.0000, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(3.3333, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(3.8333, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(-0.2000, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(3.2667, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(3.4667, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(2.0000, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.6667, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(-0.1667, buffer->getEntry(2, 2), 0.0001);
}

//-------------------------------------------------------------

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedPositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1.5, 2,   3.5,
				 3  , 2.5, 1,
				 4.5, 2  , 6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5,   3,
				 3.5, 2,   4,
				 4.5, 2.5, 7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.4722, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.5694, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(1.1806, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(1.7778, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.3889, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.0556, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.4722, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.7361, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.3194, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1.5, -2,   -3.5,
				 -3  , -2.5, -1,
				 -4.5, -2  , -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { -4.5, -5,   -3,
				 -3.5, -2,   -4,
				 -4.5, -2.5, -7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.4722, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.5694, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(1.1806, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(1.7778, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.3889, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.0556, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.4722, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.7361, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.3194, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedNegative_2)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1.5, -2,   -3.5,
				 -3  , -2.5, -1,
				 -4.5, -2  , -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4.5, 5,   3,
				 3.5, 2,   4,
				 4.5, 2.5, 7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(0.4722, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(1.5694, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(-1.1806, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(-1.7778, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(-2.3889, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(-0.0556, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(-0.4722, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.7361, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(-0.3194, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMMixedMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { -1.5, -2,    3.5,
				  3  , -2.5, -1,
				  4.5,  2  , -6.5 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = {  4.5,  5,   -3,
				 -3.5,  2,   -4,
				 -4.5, -2.5, 7.5 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(18.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(17.4583, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(16.6250, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(16.0000, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(13.5000, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(15.5000, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(18.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(16.6250, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(15.1250, buffer->getEntry(2, 2), 0.0001);
}



//Different sizes

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize1x1)
{
	Matrix *matrix1 = new Matrix();
	matrix1->setEntry(0, 0, 1);

	Matrix *matrix2 = new Matrix();
	matrix2->setEntry(0, 0, 5);

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(5, buffer->getEntry(0, 0), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize2x2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 3, 2  };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 4, 5,
				 3, 2 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.5000, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(2.2500, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(3.2500, buffer->getEntry(1, 1), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize3x3)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1, 2, 3,
				 3, 2, 1,
				 4, 2, 6 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 4, 5, 3,
				 3, 2, 4,
				 4, 2, 7 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-0.2500, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-1.2500, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(0.9167, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(1.7500, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.7500, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.4167, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(0.2500, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.4167, buffer->getEntry(2, 2), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize4x4)
{
	Matrix *matrix1 = new Matrix(4, 4);
	*matrix1 = { 1, 2, 3, 4,
				 3, 2, 1, 0,
				 4, 2, 6, 3,
				 1, 2, 6, 5};

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = { 4, 5, 3, 2,
				 3, 2, 4, 9,
				 4, 2, 7, 9,
				 6, 5, 4, 7};

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(-1.2222, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(-0.6667, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(1.1111, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(-2.3333, buffer->getEntry(0, 3), 0.0001);
	EXPECT_NEAR(2.8611, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(2.0833, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(0.1944, buffer->getEntry(1, 2), 0.0001);
	EXPECT_NEAR(6.4167, buffer->getEntry(1, 3), 0.0001);
	EXPECT_NEAR(0.9444, buffer->getEntry(2, 0), 0.0001);
	EXPECT_NEAR(-0.1667, buffer->getEntry(2, 1), 0.0001);
	EXPECT_NEAR(0.2778, buffer->getEntry(2, 2), 0.0001);
	EXPECT_NEAR(3.1667, buffer->getEntry(2, 3), 0.0001);
	EXPECT_NEAR(-0.8333, buffer->getEntry(3, 0), 0.0001);
	EXPECT_NEAR(0.5000, buffer->getEntry(3, 1), 0.0001);
	EXPECT_NEAR(0.1667, buffer->getEntry(3, 2), 0.0001);
	EXPECT_NEAR(-4.5000, buffer->getEntry(3, 3), 0.0001);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMSize2x2_2x3)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 3, 1 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1, 2, 3,
				 3, 2, 4};

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_NO_THROW(*buffer = GM.getTransformationMatrix(*matrix1, *matrix2));
	EXPECT_NEAR(1.0000, buffer->getEntry(0, 0), 0.0001);
	EXPECT_NEAR(0.4000, buffer->getEntry(0, 1), 0.0001);
	EXPECT_NEAR(1.0000, buffer->getEntry(0, 2), 0.0001);
	EXPECT_NEAR(0.0000, buffer->getEntry(1, 0), 0.0001);
	EXPECT_NEAR(0.8000, buffer->getEntry(1, 1), 0.0001);
	EXPECT_NEAR(1.0000, buffer->getEntry(1, 2), 0.0001);
}

//Exceptions
TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException1)
{
	Matrix *matrix1 = new Matrix(3, 2);
	*matrix1 = { 1, 2,
				 3, 1,
				 4, 2};

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1, 2, 3,
				 3, 2, 4 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException2)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 3, 1, 4 };

	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1, 2, 3,
				 3, 2, 4 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException3)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 3, 2, 4 };
	
	Matrix *matrix2 = new Matrix(3, 2);
	*matrix2 = { 1, 2,
				 3, 1,
				 4, 2 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException4)
{
	Matrix *matrix1 = new Matrix(3, 2);
	*matrix1 = { 1, 2,
				 3, 1,
				 4, 2 };

	Matrix *matrix2 = new Matrix(3, 2);
	*matrix2 = { 1, 2,
				 3, 1,
				 4, 2 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixGetTransformationMatrix, GTMException5)
{
	Matrix *matrix1 = new Matrix(2, 3);
	*matrix1 = { 1, 2, 3,
				 3, 2, 4 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 1, 2,
				 3, 1 };

	Matrix *buffer = new Matrix();

	GetMatrix GM;
	EXPECT_THROW(GM.getTransformationMatrix(*matrix1, *matrix2), std::exception);
}

//Special cases
