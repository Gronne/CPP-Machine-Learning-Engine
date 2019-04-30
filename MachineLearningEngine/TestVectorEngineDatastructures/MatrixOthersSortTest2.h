#pragma once
#include "VectorEngineHeaders.h"

//-----------------1_0_0---------------------

//----------1x5------------

TEST(MatrixOthersSort2, Sort_1_0_0_PH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5, 4, 3, 2, 1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5, 3, 1, 2, 4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_NH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, -3, -1, -2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, -3, -1, -2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -1, -2, -3, -4, -5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, -3, -1, -2, -4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_MH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, 3, -1, 2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, 3, -1, 2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 3, 2, -1, -4, -5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, 3, -1, 2, -4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_PD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5.5, 4.5, 3.5, 2.5, 1.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_ND_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -1.5, -2.5, -3.5, -4.5, -5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_MD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 3.5, 2.5, -1.5, -4.5, -5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_PM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5.5, 4.5, 3, 2.5, 1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3, 1, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_NM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -1, -2.5, -3, -4.5, -5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3, -1, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_MM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 3, 2.5, -1, -4.5, -5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3, -1, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//----------2x5------------

TEST(MatrixOthersSort2, Sort_1_0_0_PH_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5, 3, 1, 2, 4,
				 4, 5, 4, 2, 3 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { 5, 4,
				 3, 5,
				 1, 4,
				 2, 2,
				 4, 3 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 5, 3, 4, 1, 2,
				 4, 5, 3, 4, 2 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 4, 5,
				 5, 3,
				 4, 1,
				 2, 2,
				 3, 4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_NH_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5, -3, -1, -2, -4,
				 -4, -5, -4, -2, -3 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5, -4,
				 -3, -5,
				 -1, -4,
				 -2, -2,
				 -4, -3 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -2, -1, -4, -3, -5,
				 -2, -4, -3, -5, -4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5, -4,
				 -3, -5,
				 -1, -4,
				 -2, -2,
				 -4, -3 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_MH_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5, -3, 1, -2,  4,
				  4, -5, 4,  2, -3 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5,  4,
				 -3, -5,
				  1,  4,
				 -2,  2,
				  4, -3 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 1,  4, -2, -5, -3,
				 4, -3,  2,  4, -5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 4, -5,
				 -5, -3,
				  4,  1,
				 2, -2,
				 -3,  4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_PD_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5,
				 4.5, 5.5, 4.5, 2.5, 3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { 5.5, 4.5,
				 3.5, 5.5,
				 1.5, 4.5,
				 2.5, 2.5,
				 4.5, 3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 5.5, 3.5, 4.5, 1.5, 2.5,
				 4.5, 5.5, 3.5, 4.5, 2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 4.5, 5.5,
				 5.5, 3.5,
				 4.5, 1.5,
				 2.5, 2.5,
				 3.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_ND_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5,
				 -4.5, -5.5, -4.5, -2.5, -3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5.5, -4.5,
				 -3.5, -5.5,
				 -1.5, -4.5,
				 -2.5, -2.5,
				 -4.5, -3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -2.5, -1.5, -4.5, -3.5, -5.5,
				 -2.5, -4.5, -3.5, -5.5, -4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5.5, -4.5,
				 -3.5, -5.5,
				 -1.5, -4.5,
				 -2.5, -2.5,
				 -4.5, -3.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_MD_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5.5,  3.5, 1.5, -2.5,  4.5,
				  4.5, -5.5, 4.5, -2.5, -3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5.5,  4.5,
				  3.5, -5.5,
				  1.5,  4.5,
				 -2.5, -2.5,
				  4.5, -3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 1.5,  4.5, -5.5,  3.5, -2.5,
				 4.5, -3.5,  4.5, -5.5, -2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5.5,  4.5,
				  3.5, -5.5,
				  1.5,  4.5,
				 -2.5, -2.5,
				  4.5, -3.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_PM_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5,   3.5, 1, 2.5, 4,
				 4.5, 5.5, 4, 2.5, 3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { 5  , 4.5,
				 3.5, 5.5,
				 1,   4,
				 2.5, 2.5,
				 4,   3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 5,   3.5, 4,   1, 2.5,
				 4.5, 5.5, 3.5, 4, 2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 4.5, 5,
				 5.5, 3.5,
				 4,   1,
				 2.5, 2.5,
				 3.5, 4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_NM_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5,   -3.5, -1, -2.5, -4,
				 -4.5, -5.5, -4, -2.5, -3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5  , -4.5,
				 -3.5, -5.5,
				 -1,   -4,
				 -2.5, -2.5,
				 -4,   -3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -1, -2.5, -4,   -3.5, -5,
				 -4, -2.5, -3.5, -5.5, -4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,   -4.5,
				 -3.5, -5.5,
				 -1,   -4,
				 -2.5, -2.5,
				 -4,   -3.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_0_0_MM_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5,  3.5,  1, -2.5, 4,
				 4.5, 5.5, -4, -2.5, 3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5  ,  4.5,
				  3.5,  5.5,
				  1,   -4,
				 -2.5, -2.5,
				  4,    3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 3.5,   4, -5,    1, -2.5,
				 5.5, 3.5,  4.5, -4, -2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 4.5,  -5,
				 5.5,   3.5,
				 -4,    1,
				 -2.5, -2.5,
				  3.5,  4 };


	EXPECT_NO_THROW(matrix1->sort(1, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//-----------------1_1_0---------------------

//----------1x5------------

TEST(MatrixOthersSort2, Sort_1_1_0_PH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5, 3, 1, 2, 4 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5, 4, 3, 2, 1 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_NH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, -3, -1, -2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, -3, -1, -2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -3, -1, -2, -4 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -1, -2, -3, -4, -5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_MH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, 3, -1, 2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, 3, -1, 2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, 3, -1, 2, -4 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 3, 2, -1, -4, -5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_PD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 4.5, 3.5, 2.5, 1.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_ND_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -1.5, -2.5, -3.5, -4.5, -5.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_MD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 3.5, 2.5, -1.5, -4.5, -5.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_PM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 4.5, 3, 2.5, 1 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_NM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -1, -2.5, -3, -4.5, -5.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_MM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 3, 2.5, -1, -4.5, -5.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//----------2x5------------

TEST(MatrixOthersSort2, Sort_1_1_0_PH_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5, 3, 1, 2, 4,
				 4, 5, 4, 2, 3 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { 5, 4,
				 3, 5,
				 1, 4,
				 2, 2,
				 4, 3 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 4, 5, 4, 2, 3,
				 5, 3, 1, 2, 4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5, 4,
				 3, 5,
				 4, 3,
				 1, 4,
				 2, 2 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_NH_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5, -3, -1, -2, -4,
				 -4, -5, -4, -2, -3 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5, -4,
				 -3, -5,
				 -1, -4,
				 -2, -2,
				 -4, -3 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -5, -3, -1, -2, -4,
				 -4, -5, -4, -2, -3 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -2, -2,
				 -1, -4,
				 -4, -3,
				 -3, -5,
				 -5, -4 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_MH_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5, -3, 1, -2,  4,
				  4, -5, 4,  2, -3 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5,  4,
				 -3, -5,
				  1,  4,
				 -2,  2,
				  4, -3 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 4, -5, 4,  2, -3,
				 -5, -3, 1, -2,  4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 1,  4,
				  4, -3,
				 -2,  2,
				 -5,  4,
				 -3, -5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_PD_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5,
				 4.5, 5.5, 4.5, 2.5, 3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { 5.5, 4.5,
				 3.5, 5.5,
				 1.5, 4.5,
				 2.5, 2.5,
				 4.5, 3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 4.5, 5.5, 4.5, 2.5, 3.5,
				 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5.5, 4.5,
				 3.5, 5.5,
				 4.5, 3.5,
				 1.5, 4.5,
				 2.5, 2.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_ND_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5,
				 -4.5, -5.5, -4.5, -2.5, -3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5.5, -4.5,
				 -3.5, -5.5,
				 -1.5, -4.5,
				 -2.5, -2.5,
				 -4.5, -3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -5.5, -3.5, -1.5, -2.5, -4.5,
				 -4.5, -5.5, -4.5, -2.5, -3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -2.5, -2.5,
				 -1.5, -4.5,
				 -4.5, -3.5,
				 -3.5, -5.5,
				 -5.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_MD_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5.5,  3.5, 1.5, -2.5,  4.5,
				  4.5, -5.5, 4.5, -2.5, -3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5.5,  4.5,
				  3.5, -5.5,
				  1.5,  4.5,
				 -2.5, -2.5,
				  4.5, -3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -5.5,  3.5, 1.5, -2.5,  4.5,
				  4.5, -5.5, 4.5, -2.5, -3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 1.5,  4.5,
				  4.5, -3.5,
				 -5.5,  4.5,
				  3.5, -5.5,
				 -2.5, -2.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_PM_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5,   3.5, 1, 2.5, 4,
				 4.5, 5.5, 4, 2.5, 3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { 5  , 4.5,
				 3.5, 5.5,
				 1,   4,
				 2.5, 2.5,
				 4,   3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 4.5, 5.5, 4, 2.5, 3.5,
				   5, 3.5, 1, 2.5, 4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5,   4.5,
				 3.5, 5.5,
				 4,   3.5,
				 1,   4,
				 2.5, 2.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_NM_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5,   -3.5, -1, -2.5, -4,
				 -4.5, -5.5, -4, -2.5, -3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5  , -4.5,
				 -3.5, -5.5,
				 -1,   -4,
				 -2.5, -2.5,
				 -4,   -3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { -5,   -3.5, -1, -2.5, -4,
				 -4.5, -5.5, -4, -2.5, -3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -1,   -4,
				 -2.5, -2.5,
				 -4,   -3.5,
				 -3.5, -5.5,
				   -5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort2, Sort_1_1_0_MM_2x5)
{
	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { -5,  3.5,  1, -2.5, 4,
				 4.5, 5.5, -4, -2.5, 3.5 };

	Matrix *matrix2 = new Matrix(5, 2);
	*matrix2 = { -5  ,  4.5,
				  3.5,  5.5,
				  1,   -4,
				 -2.5, -2.5,
				  4,    3.5 };

	Matrix *result1 = new Matrix(2, 5);
	*result1 = { 4.5, 5.5, -4, -2.5, 3.5,
				  -5, 3.5,  1, -2.5,   4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = {  3.5,  5.5,
					4,  3.5,
				   -5,  4.5,
					1,   -4,
				  -2.5, -2.5 };


	EXPECT_NO_THROW(matrix1->sort(1, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(1, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}



//-------------Different sizes-------------


//--------Different initializations--------


//--------------- Exception ---------------

