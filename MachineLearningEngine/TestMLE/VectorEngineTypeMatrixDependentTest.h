#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixDependent, dependentHolePositiveDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				1, 2, 3, 
				1, 2, 3 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHolePositiveIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				2, 2, 3, 
				3, 2, 1 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleNegativeDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3, 
				-1, -2, -3, 
				-1, -2, -3 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleNegativeIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3, 
				-2, -2, -3, 
				-3, -2, -1 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleMixedDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, 3, 
				-1, 2, 3, 
				-1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleMixedIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2,   3, 
				 1, -2,   3, 
				 1,  2,  -3 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalPositiveDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				1.5, 2.5, 3.5, 
				1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalPositiveIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				2.5, 2.5, 3.5, 
				3.5, 2.5, 1.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalNegativeDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalNegativeIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5, 
				-2.5, -2.5, -3.5, 
				-3.5, -2.5, -1.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalMixedDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalMixedIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5,  3.5, 
				 1.5, -2.5,  3.5, 
				 1.5,  2.5, -3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedPositiveDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2, 3.5, 
				1.5, 2, 3.5, 
				1.5, 2, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedPositiveIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2, 3.5, 
				2.5, 2, 3.5, 
				3.5, 2, 1.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedNegativeDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2, -3.5,
				-1.5, -2, -3.5,
				-1.5, -2, -3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedNegativeIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2, -3.5,
				-2.5, -2, -3.5,
				-3.5, -2, -1.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedMixedDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2, 3.5, 
				-1.5, 2, 3.5, 
				-1.5, 2, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedMixedIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2,  3.5, 
				 1.5, -2,  3.5, 
				 1.5,  2, -3.5 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_FALSE(TypeMatrix::dependent(*matrix));
}

//-------------

TEST(VectorEngineTypeMatrixDependent, dependentHoleZeroDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalZeroDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0.0, 0.0, 0.0,
				0.0, 0.0, 0.0,
				0.0, 0.0, 0.0 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

//---------------

TEST(VectorEngineTypeMatrixDependent, dependentException1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix), std::exception);
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentException2)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 2, 
				3, 4, 
				5, 6 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix), std::exception);
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

//----------
TEST(VectorEngineTypeMatrixDependent, dependentOtherCase1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 2, 3, 
				1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));

	matrix->deleteColumn(3);
	EXPECT_NO_THROW(TypeMatrix::dependent(*matrix));
	EXPECT_TRUE(TypeMatrix::dependent(*matrix));
}