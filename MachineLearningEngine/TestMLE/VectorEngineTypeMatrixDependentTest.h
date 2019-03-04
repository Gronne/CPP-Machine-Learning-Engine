#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixDependent, dependentHolePositiveDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHolePositiveIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleNegativeDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -1);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, -3);
	matrix->setEntry(2, 0, -1);
	matrix->setEntry(2, 1, -2);
	matrix->setEntry(2, 2, -3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleNegativeIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -2);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, -3);
	matrix->setEntry(2, 0, -3);
	matrix->setEntry(2, 1, -2);
	matrix->setEntry(2, 2, -1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleMixedDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, -1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, -1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentHoleMixedIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, -3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalPositiveDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalPositiveIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 2.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 3.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 1.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalNegativeDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, -3.5);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, -2.5);
	matrix->setEntry(2, 2, -3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalNegativeIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -2.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, -3.5);
	matrix->setEntry(2, 0, -3.5);
	matrix->setEntry(2, 1, -2.5);
	matrix->setEntry(2, 2, -1.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalMixedDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalMixedIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, -3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedPositiveDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedPositiveIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 2.5);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 3.5);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 1.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedNegativeDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, -3.5);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, -2);
	matrix->setEntry(2, 2, -3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedNegativeIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -2.5);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, -3.5);
	matrix->setEntry(2, 0, -3.5);
	matrix->setEntry(2, 1, -2);
	matrix->setEntry(2, 2, -1.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedMixedDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentMixedMixedIndependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, -3.5);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_FALSE(TM.dependent(*matrix));
}

//-------------

TEST(VectorEngineTypeMatrixDependent, dependentHoleZeroDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 0);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 0);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

TEST(VectorEngineTypeMatrixDependent, dependentDecimalZeroDependent)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 0.0);
	matrix->setEntry(0, 1, 0.0);
	matrix->setEntry(0, 2, 0.0);
	matrix->setEntry(1, 0, 0.0);
	matrix->setEntry(1, 1, 0.0);
	matrix->setEntry(1, 2, 0.0);
	matrix->setEntry(2, 0, 0.0);
	matrix->setEntry(2, 1, 0.0);
	matrix->setEntry(2, 2, 0.0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}

//---------------

TEST(VectorEngineTypeMatrixDependent, dependentException1)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);

	TypeMatrix TM;
	EXPECT_THROW(TM.dependent(*matrix), std::exception);
}

TEST(VectorEngineTypeMatrixDependent, dependentException2)
{
	Matrix *matrix = new Matrix(3, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 4);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 6);

	TypeMatrix TM;
	EXPECT_THROW(TM.dependent(*matrix), std::exception);
}

//----------
TEST(VectorEngineTypeMatrixDependent, dependentOtherCase1)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.dependent(*matrix));
	EXPECT_TRUE(TM.dependent(*matrix));
}