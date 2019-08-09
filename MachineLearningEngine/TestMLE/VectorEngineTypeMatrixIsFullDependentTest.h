#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMHolePositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				1, 2, 3,
				1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMHolePositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 2, 2, 3,
				1, 2, 3,
				1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMHoleNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-1, -2, -3,
				-1, -2, -3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMHoleNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2, -2, -3,
				-1, -2, -3, 
				-1, -2, -3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMHoleMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, 3,
				-1, 2, 3, 
				-1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMHoleMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2, 2, 3, 
				-1, 2, 3, 
				-1, 2, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDecimalPositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				1.5, 2.5, 3.5, 
				1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDecimalPositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 2.5, 2.5, 3.5, 
				1.5, 2.5, 3.5, 
				1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDecimalNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDecimalNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDecimalMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDecimalMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMMixedPositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3, 
				1.5, 2.5, 3, 
				1.5, 2.5, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMMixedPositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 2.5, 2.5, 3,
				1.5, 2.5, 3,
				1.5, 2.5, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMMixedNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3,
				-1.5, -2.5, -3,
				-1.5, -2.5, -3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMMixedNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, -2.5, -3,
				-1.5, -2.5, -3,
				-1.5, -2.5, -3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMMixedMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, 3,
				-1.5, 2.5, 3,
				-1.5, 2.5, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMMixedMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, 2.5, 3,
				-1.5, 2.5, 3,
				-1.5, 2.5, 3 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

//-------Dependent different scaling-------
TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDependentSize1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 4, 6, 
				3, 6, 9 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDependentSize2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = {  1,  2,  3, 
				-1, -2, -3, 
				 4,  8, 12 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_TRUE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMDependentSize3)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}

TEST(VectorEngineTypeMatrixIsFullDependent, CFFDMSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(TypeMatrix::isFullDependent(*matrix));
	EXPECT_FALSE(TypeMatrix::isFullDependent(*matrix));
}