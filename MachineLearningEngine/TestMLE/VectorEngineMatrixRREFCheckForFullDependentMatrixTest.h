#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHolePositiveTrue)
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

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHolePositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 2);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleNegativeTrue)
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

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -2);
	matrix->setEntry(0, 1, -2);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -1);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, -3);
	matrix->setEntry(2, 0, -1);
	matrix->setEntry(2, 1, -2);
	matrix->setEntry(2, 2, -3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleMixedTrue)
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

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMHoleMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -2);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, -1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, -1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalPositiveTrue)
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

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalPositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 2.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3.5);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalNegativeTrue)
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

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -2.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, -3.5);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, -2.5);
	matrix->setEntry(2, 2, -3.5);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalMixedTrue)
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

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDecimalMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -2.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3.5);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3.5);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3.5);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedPositiveTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedPositiveFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 2.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedNegativeTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, -3);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, -2.5);
	matrix->setEntry(2, 2, -3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedNegativeFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -2.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, -3);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, -2.5);
	matrix->setEntry(2, 2, -3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedMixedTrue)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMMixedMixedFalse)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -2.5);
	matrix->setEntry(0, 1, 2.5);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, -1.5);
	matrix->setEntry(1, 1, 2.5);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, -1.5);
	matrix->setEntry(2, 1, 2.5);
	matrix->setEntry(2, 2, 3);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}

//-------Dependent different scaling-------
TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDependentSize1)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 4);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 3);
	matrix->setEntry(2, 1, 6);
	matrix->setEntry(2, 2, 9);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDependentSize2)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, -1);
	matrix->setEntry(1, 1, -2);
	matrix->setEntry(1, 2, -3);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 12);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_TRUE(RREF.checkForFullDependentMatrix(*matrix));
}

TEST(VectorEngineMatrixRREFCheckForFullDependentMatrix, CFFDMDependentSize3)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	MatrixRREF RREF;
	EXPECT_NO_THROW(RREF.checkForFullDependentMatrix(*matrix));
	EXPECT_FALSE(RREF.checkForFullDependentMatrix(*matrix));
}