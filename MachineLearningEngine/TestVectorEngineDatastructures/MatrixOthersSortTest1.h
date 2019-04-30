#pragma once
#include "VectorEngineHeaders.h"


//-----------------0_0_0---------------------

//----------1x5------------

TEST(MatrixOthersSort1, Sort_0_0_0_PH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1, 2, 3, 4, 5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5, 3, 1, 2, 4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_NH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, -3, -1, -2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, -3, -1, -2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -4, -3, -2, -1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, -3, -1, -2, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_MH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, 3, -1, 2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, 3, -1, 2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -4, -1, 2, 3 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, 3, -1, 2, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_PD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1.5, 2.5, 3.5, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_ND_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -3.5, -2.5, -1.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_MD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -1.5, 2.5, 3.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_PM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1, 2.5, 3, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3, 1, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_NM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -3, -2.5, -1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3, -1, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_MM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -1, 2.5, 3 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3, -1, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//----------2x5------------

TEST(MatrixOthersSort1, Sort_0_0_0_PH_2x5)
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
	*result1 = { 2, 1, 4, 3, 5,
				 2, 4, 3, 5, 4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5, 4,
				 3, 5,
				 1, 4, 
				 2, 2,
				 4, 3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_NH_2x5)
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
	*result1 = { -5, -3, -4, -1, -2,
				 -4, -5, -3, -4, -2 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4, -5,
				 -5, -3,
				 -4, -1,
				 -2, -2,
				 -3, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_MH_2x5)
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
	*result1 = { -3, -5, -2,  4, 1,
				 -5,  4,  2, -3, 4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,  4,
				 -3, -5,
				  1,  4,
				 -2,  2,
				  4, -3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_PD_2x5)
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
	*result1 = { 2.5, 1.5, 4.5, 3.5, 5.5,
				 2.5, 4.5, 3.5, 5.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5.5, 4.5,
				 3.5, 5.5,
				 1.5, 4.5,
				 2.5, 2.5,
				 4.5, 3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_ND_2x5)
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
	*result1 = { -5.5, -3.5, -4.5, -1.5, -2.5,
				 -4.5, -5.5, -3.5, -4.5, -2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4.5, -5.5,
				 -5.5, -3.5,
				 -4.5, -1.5,
				 -2.5, -2.5,
				 -3.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_MD_2x5)
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
	*result1 = { -2.5,  3.5, -5.5,  4.5, 1.5,
				 -2.5, -5.5,  4.5, -3.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = {  4.5, -5.5,
				 -5.5,  3.5,
				  4.5,  1.5,
				 -2.5, -2.5,
				 -3.5,  4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_PM_2x5)
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
	*result1 = { 1, 2.5, 4,   3.5, 5,
				 4, 2.5, 3.5, 5.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5,   4.5,
				 3.5, 5.5,
				 1,   4,
				 2.5, 2.5,
				 4,   3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_NM_2x5)
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
	*result1 = { -5,   -3.5, -4,   -1, -2.5,
				 -4.5, -5.5, -3.5, -4, -2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4.5, -5,
				 -5.5, -3.5,
				 -4,   -1,
				 -2.5, -2.5,
				 -3.5, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_0_MM_2x5)
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
	*result1 = { -2.5,  1, -5,   4,   3.5,
				 -2.5, -4,  4.5, 3.5, 5.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,    4.5,
				  3.5,  5.5,
				  1,   -4,
				 -2.5, -2.5,
				  4,    3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//-----------------0_0_1---------------------

//----------1x5------------

TEST(MatrixOthersSort1, Sort_0_0_1_PH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1, 2, 3, 4, 5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5, 3, 1, 2, 4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_NH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, -3, -1, -2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, -3, -1, -2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -4, -3, -2, -1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, -3, -1, -2, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_MH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, 3, -1, 2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, 3, -1, 2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -4, -1, 2, 3 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, 3, -1, 2, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_PD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1.5, 2.5, 3.5, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_ND_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -3.5, -2.5, -1.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_MD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -1.5, 2.5, 3.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_PM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1, 2.5, 3, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3, 1, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_NM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -3, -2.5, -1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3, -1, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_MM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -1, 2.5, 3 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3, -1, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//----------2x5------------

TEST(MatrixOthersSort1, Sort_0_0_1_PH_2x5)
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
	*result1 = { 2, 1, 4, 5, 3,
				 2, 4, 3, 4, 5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5, 4,
				 3, 5,
				 1, 4,
				 2, 2,
				 4, 3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_NH_2x5)
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
	*result1 = { -5, -3, -4, -2, -1,
				 -4, -5, -3, -2, -4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4, -5,
				 -5, -3,
				 -4, -1,
				 -2, -2,
				 -3, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_MH_2x5)
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
	*result1 = { -3, -2, -5, 1,  4,
				 -5,  2,  4, 4, -3 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,  4,
				 -3, -5,
				  1,  4,
				 -2,  2,
				  4, -3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_PD_2x5)
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
	*result1 = { 2.5, 1.5, 4.5, 5.5, 3.5,
				 2.5, 4.5, 3.5, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5.5, 4.5,
				 3.5, 5.5,
				 1.5, 4.5,
				 2.5, 2.5,
				 4.5, 3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_ND_2x5)
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
	*result1 = { -5.5, -3.5, -4.5, -2.5, -1.5,
				 -4.5, -5.5, -3.5, -2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4.5, -5.5,
				 -5.5, -3.5,
				 -4.5, -1.5,
				 -2.5, -2.5,
				 -3.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_MD_2x5)
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
	*result1 = { -2.5,  3.5, -5.5, 1.5,  4.5,
				 -2.5, -5.5,  4.5, 4.5, -3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5.5,  4.5,
				  3.5, -5.5,
				  1.5,  4.5,
				 -2.5, -2.5,
				  4.5, -3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_PM_2x5)
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
	*result1 = { 2.5, 1, 4,   5,   3.5,
				 2.5, 4, 3.5, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5,   4.5,
				 3.5, 5.5,
				 1,   4,
				 2.5, 2.5,
				 4,   3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_NM_2x5)
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
	*result1 = { -5,   -3.5, -4,   -2.5, -1,
				 -4.5, -5.5, -3.5, -2.5, -4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4.5, -5,
				 -5.5, -3.5,
				 -4,   -1,
				 -2.5, -2.5,
				 -3.5, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_1_MM_2x5)
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
	*result1 = { -2.5,  1, 4,   -5,   3.5,
				 -2.5, -4, 3.5,  4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,    4.5,
				  3.5,  5.5,
				  1,   -4,
				 -2.5, -2.5,
				  4,    3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 1));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 1));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}


//-----------------0_0_2---------------------

//----------1x5------------

TEST(MatrixOthersSort1, Sort_0_0_2_PH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1, 2, 3, 4, 5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5, 3, 1, 2, 4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_NH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, -3, -1, -2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, -3, -1, -2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -4, -3, -2, -1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, -3, -1, -2, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_MH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, 3, -1, 2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, 3, -1, 2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -4, -1, 2, 3 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, 3, -1, 2, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_PD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1.5, 2.5, 3.5, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_ND_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -3.5, -2.5, -1.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_MD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -1.5, 2.5, 3.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_PM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 1, 2.5, 3, 4.5, 5.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 5.5, 3, 1, 2.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_NM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -3, -2.5, -1 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -3, -1, -2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_MM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -4.5, -1, 2.5, 3 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, 3, -1, 2.5, -4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//----------2x5------------

TEST(MatrixOthersSort1, Sort_0_0_2_PH_2x5)
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
	*result1 = { 1, 2, 3, 4, 5,
				 4, 2, 5, 3, 4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5, 4,
				 3, 5,
				 1, 4,
				 2, 2,
				 4, 3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_NH_2x5)
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
	*result1 = { -5, -3, -1, -4, -2,
				 -4, -5, -4, -3, -2 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5, -4,
				 -3, -5,
				 -1, -4,
				 -2, -2,
				 -4, -3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_MH_2x5)
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
	*result1 = { -5, -3,  4, -2, 1,
				  4, -5, -3,  2, 4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,  4,
				 -3, -5,
				  1,  4,
				 -2,  2,
				  4, -3 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_PD_2x5)
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
	*result1 = { 1.5, 2.5, 3.5, 4.5, 5.5,
				 4.5, 2.5, 5.5, 3.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5.5, 4.5,
				 3.5, 5.5,
				 1.5, 4.5,
				 2.5, 2.5,
				 4.5, 3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_ND_2x5)
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
	*result1 = { -5.5, -3.5, -1.5, -4.5, -2.5,
				 -4.5, -5.5, -4.5, -3.5, -2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5.5, -4.5,
				 -3.5, -5.5,
				 -1.5, -4.5,
				 -2.5, -2.5,
				 -4.5, -3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_MD_2x5)
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
	*result1 = { -5.5,  3.5,  4.5, -2.5, 1.5,
				  4.5, -5.5, -3.5, -2.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5.5,  4.5,
				  3.5, -5.5,
				  1.5,  4.5,
				 -2.5, -2.5,
				  4.5, -3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_PM_2x5)
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
	*result1 = { 1, 2.5, 3.5,   4,   5,
				 4, 2.5, 5.5, 3.5, 4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 5,   4.5,
				 3.5, 5.5,
				 1,   4,
				 2.5, 2.5,
				 4,   3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_NM_2x5)
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
	*result1 = { -3.5,   -5, -1,   -4, -2.5,
				 -5.5, -4.5, -4, -3.5, -2.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -4.5, -5,
				 -5.5, -3.5,
				 -4,   -1,
				 -2.5, -2.5,
				 -3.5, -4 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_0_2_MM_2x5)
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
	*result1 = {  -5,  1, -2.5, 3.5,   4,
				 4.5, -4, -2.5, 5.5, 3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,    4.5,
				  3.5,  5.5,
				  1,   -4,
				 -2.5, -2.5,
				  4,    3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 0, 2));
	EXPECT_NO_THROW(matrix2->sort(0, 0, 2));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}


//-----------------0_1_0---------------------

//----------1x5------------

TEST(MatrixOthersSort1, Sort_0_1_0_PH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5, 3, 1, 2, 4 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 1, 2, 3, 4, 5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_NH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, -3, -1, -2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, -3, -1, -2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, -3, -1, -2, -4 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, -4, -3, -2, -1 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_MH_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5, 3, -1, 2, -4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5, 3, -1, 2, -4 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5, 3, -1, 2, -4 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5, -4, -1, 2, 3 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_PD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5.5, 3.5, 1.5, 2.5, 4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 1.5, 2.5, 3.5, 4.5, 5.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_ND_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -4.5, -3.5, -2.5, -1.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_MD_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, 3.5, -1.5, 2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -4.5, -1.5, 2.5, 3.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_PM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { 5.5, 3, 1, 2.5, 4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { 1, 2.5, 3, 4.5, 5.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_NM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, -3, -1, -2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -4.5, -3, -2.5, -1 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_MM_1x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result1 = new Matrix(1, 5);
	*result1 = { -5.5, 3, -1, 2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 1);
	*result2 = { -5.5, -4.5, -1, 2.5, 3 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

//----------2x5------------

TEST(MatrixOthersSort1, Sort_0_1_0_PH_2x5)
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
	*result1 = { 5, 3, 1, 2, 4,
				 4, 5, 4, 2, 3 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 2, 2,
				 1, 4,
				 4, 3,
				 3, 5,
				 5, 4 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_NH_2x5)
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
	*result1 = { -4, -5, -4, -2, -3,
				 -5, -3, -1, -2, -4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5, -4,
				 -3, -5,
				 -4, -3,
				 -1, -4,
				 -2, -2 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_MH_2x5)
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
	*result1 = { -5, -3, 1, -2,  4,
				  4, -5, 4,  2, -3 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -3, -5,
				 -5,  4,
				 -2,  2,
				  4, -3,
				  1,  4 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_PD_2x5)
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
	*result1 = { 5.5, 3.5, 1.5, 2.5, 4.5,
				 4.5, 5.5, 4.5, 2.5, 3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 2.5, 2.5,
				 1.5, 4.5,
				 4.5, 3.5,
				 3.5, 5.5,
				 5.5, 4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_ND_2x5)
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
	*result1 = { -4.5, -5.5, -4.5, -2.5, -3.5,
				 -5.5, -3.5, -1.5, -2.5, -4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5.5, -4.5,
				 -3.5, -5.5,
				 -4.5, -3.5,
				 -1.5, -4.5,
				 -2.5, -2.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_MD_2x5)
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
	*result1 = {  4.5, -5.5, 4.5, -2.5, -3.5,
				 -5.5,  3.5, 1.5, -2.5,  4.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -2.5, -2.5,
				  3.5, -5.5,
				 -5.5,  4.5,
				  4.5, -3.5,
				  1.5,  4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_PM_2x5)
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
	*result1 = { 5,   3.5, 1, 2.5, 4,
				 4.5, 5.5, 4, 2.5, 3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { 1,   4,
				 2.5, 2.5,
				 4,   3.5, 
				 3.5, 5.5,
				 5,   4.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_NM_2x5)
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
	*result1 = { -4.5, -5.5, -4, -2.5, -3.5,
				   -5, -3.5, -1, -2.5, -4 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -5,   -4.5,
				 -3.5, -5.5,
				 -4,   -3.5,
				 -1,   -4,
				 -2.5, -2.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

TEST(MatrixOthersSort1, Sort_0_1_0_MM_2x5)
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
	*result1 = { -5, 3.5,  1, -2.5,  4,
				4.5, 5.5, -4, -2.5, 3.5 };

	Matrix *result2 = new Matrix(5, 2);
	*result2 = { -2.5, -2.5,
				    1, -4,
				   -5,  4.5,
				    4,  3.5,
				  3.5,    5.5 };


	EXPECT_NO_THROW(matrix1->sort(0, 1, 0));
	EXPECT_NO_THROW(matrix2->sort(0, 1, 0));
	EXPECT_TRUE(*matrix1 == *result1);
	EXPECT_TRUE(*matrix2 == *result2);
}

