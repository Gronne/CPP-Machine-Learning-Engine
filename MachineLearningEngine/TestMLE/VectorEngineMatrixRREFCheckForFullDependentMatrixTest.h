#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHolePositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				1, 2, 3,
				1, 2, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHolePositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 2, 2, 3,
				1, 2, 3,
				1, 2, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3,
				-1, -2, -3,
				-1, -2, -3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2, -2, -3,
				-1, -2, -3, 
				-1, -2, -3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, 2, 3,
				-1, 2, 3, 
				-1, 2, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2, 2, 3, 
				-1, 2, 3, 
				-1, 2, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalPositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5,
				1.5, 2.5, 3.5, 
				1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalPositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 2.5, 2.5, 3.5, 
				1.5, 2.5, 3.5, 
				1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5, 
				-1.5, -2.5, -3.5 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5, 
				-1.5, 2.5, 3.5 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedPositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3, 
				1.5, 2.5, 3, 
				1.5, 2.5, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedPositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 2.5, 2.5, 3,
				1.5, 2.5, 3,
				1.5, 2.5, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3,
				-1.5, -2.5, -3,
				-1.5, -2.5, -3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, -2.5, -3,
				-1.5, -2.5, -3,
				-1.5, -2.5, -3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, 2.5, 3,
				-1.5, 2.5, 3,
				-1.5, 2.5, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -2.5, 2.5, 3,
				-1.5, 2.5, 3,
				-1.5, 2.5, 3 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

//-------Dependent different scaling-------
TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDependentSize1)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				2, 4, 6, 
				3, 6, 9 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDependentSize2)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = {  1,  2,  3, 
				-1, -2, -3, 
				 4,  8, 12 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDependentSize3)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_NO_THROW(MatrixRREF::checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(MatrixRREF::checkForFullDependentMatrix(*matrix));
}