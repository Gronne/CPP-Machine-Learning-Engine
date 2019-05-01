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
TEST(MatrixOtherssort2, Sort_Size_1x1)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 5);

	Matrix *matrix2 = new Matrix(1, 1);
	matrix2->setEntry(0, 0, 5);

	Matrix *result1 = new Matrix(1, 1);
	result1->setEntry(0, 0, 5);

	Matrix *result2 = new Matrix(1, 1);
	result2->setEntry(0, 0, 5);


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOtherssort2, Sort_Size_2x2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 4, 1 };

	Matrix *matrix2 = new Matrix(2, 2);
	*matrix2 = { 1, 2,
				 4, 1 };

	Matrix *result1 = new Matrix(2, 2);
	*result1 = { 2, 1,
				 1, 4 };

	Matrix *result2 = new Matrix(2, 2);
	*result2 = { 1, 2,
				 4, 1 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOtherssort2, Sort_Size_3x3)
{
	Matrix *matrix1 = new Matrix(3, 3);
	*matrix1 = { 1, 2, 0,
				 4, 1, 2,
				 2, 6, 3 };

	Matrix *matrix2 = new Matrix(3, 3);
	*matrix2 = { 1, 2, 0,
				 4, 1, 2,
				 2, 6, 3 };

	Matrix *result1 = new Matrix(3, 3);
	*result1 = { 0, 1, 2,
				 2, 4, 1,
				 3, 2, 6 };

	Matrix *result2 = new Matrix(3, 3);
	*result2 = { 1, 2, 0,
				 4, 1, 2,
				 2, 6, 3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOtherssort2, Sort_Size_4x4)
{
	Matrix *matrix1 = new Matrix(4, 4);
	*matrix1 = { 1, 2, 0, 2,
				 4, 1, 2, 6,
				 2, 6, 3, 4,
				 6, 2, 5, 7 };

	Matrix *matrix2 = new Matrix(4, 4);
	*matrix2 = { 1, 2, 0, 2,
				 4, 1, 2, 6,
				 2, 6, 3, 4,
				 6, 2, 5, 7 };

	Matrix *result1 = new Matrix(4, 4);
	*result1 = { 0, 2, 1, 2,
				 2, 1, 4, 6,
				 3, 6, 2, 4,
				 5, 2, 6, 7 };

	Matrix *result2 = new Matrix(4, 4);
	*result2 = { 1, 2, 0, 2,
				 4, 1, 2, 6,
				 2, 6, 3, 4,
				 6, 2, 5, 7 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}


//--------Different initializations--------
TEST(MatrixOtherssort2, Sort_init_non)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 4, 1 };

	Matrix *result1 = new Matrix(2, 2);
	*result1 = { 2, 1,
				 1, 4 };


	EXPECT_NO_THROW(matrix1->sort());
	EXPECT_TRUE(*matrix1 == *result1);
}

TEST(MatrixOtherssort2, Sort_init_1_Param)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 4, 1 };

	Matrix *result1 = new Matrix(2, 2);
	*result1 = { 1, 2,
				 4, 1 };


	EXPECT_NO_THROW(matrix1->sort(1));
	EXPECT_TRUE(*matrix1 == *result1);
}

TEST(MatrixOtherssort2, Sort_init_2_Param)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 4, 1 };

	Matrix *result1 = new Matrix(2, 2);
	*result1 = { 1, 2,
				 4, 1 };


	EXPECT_NO_THROW(matrix1->sort(0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
}

TEST(MatrixOtherssort2, Sort_init_3_Param)
{
	Matrix *matrix1 = new Matrix(2, 2);
	*matrix1 = { 1, 2,
				 4, 1 };

	Matrix *result1 = new Matrix(2, 2);
	*result1 = { 2, 1,
				 1, 4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
}

//--------------- Exception ---------------

TEST(MatrixOtherssort2, Sort_Except_valueType_large)
{
	Matrix *matrix1 = new Matrix(2, 2);

	EXPECT_THROW(matrix1->sort(0, 0, 3), std::exception);
}

TEST(MatrixOtherssort2, Sort_Except_valueType_minus)
{
	Matrix *matrix1 = new Matrix(2, 2);

	EXPECT_THROW(matrix1->sort(0, 0, -1), std::exception);
}

TEST(MatrixOtherssort2, Sort_Except_sortType_large)
{
	Matrix *matrix1 = new Matrix(2, 2);

	EXPECT_THROW(matrix1->sort(2, 0, 0), std::exception);
}

TEST(MatrixOtherssort2, Sort_Except_sortType_minus)
{
	Matrix *matrix1 = new Matrix(2, 2);

	EXPECT_THROW(matrix1->sort(-1, 0, 0), std::exception);
}



