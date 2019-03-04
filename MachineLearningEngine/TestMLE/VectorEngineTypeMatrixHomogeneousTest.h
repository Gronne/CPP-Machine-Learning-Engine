#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixHomogeneous, homogeneousFalse1)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 4);
	matrix->setEntry(1, 0, 5);
	matrix->setEntry(1, 1, 6);
	matrix->setEntry(1, 2, 7);
	matrix->setEntry(1, 3, 8);
	matrix->setEntry(2, 0, 9);
	matrix->setEntry(2, 1, 10);
	matrix->setEntry(2, 2, 11);
	matrix->setEntry(2, 3, 12);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_FALSE(TM.homogeneous(*matrix));
}

TEST(VectorEngineTypeMatrixHomogeneous, homogeneousFalse2)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(1, 0, 5);
	matrix->setEntry(1, 1, 6);
	matrix->setEntry(1, 2, 7);
	matrix->setEntry(1, 3, 0);
	matrix->setEntry(2, 0, 9);
	matrix->setEntry(2, 1, 10);
	matrix->setEntry(2, 2, 11);
	matrix->setEntry(2, 3, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_FALSE(TM.homogeneous(*matrix));
}

TEST(VectorEngineTypeMatrixHomogeneous, homogeneousFalse3)
{
	Matrix *matrix = new Matrix(3, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(0, 4, 0);
	matrix->setEntry(1, 0, 5);
	matrix->setEntry(1, 1, 6);
	matrix->setEntry(1, 2, 7);
	matrix->setEntry(1, 3, 0);
	matrix->setEntry(1, 4, 0);
	matrix->setEntry(2, 0, 9);
	matrix->setEntry(2, 1, 10);
	matrix->setEntry(2, 2, 11);
	matrix->setEntry(2, 3, 1);
	matrix->setEntry(2, 4, 4);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_FALSE(TM.homogeneous(*matrix));
}


TEST(VectorEngineTypeMatrixHomogeneous, homogeneousTrue1)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(1, 3, 0);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 9);
	matrix->setEntry(2, 3, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_TRUE(TM.homogeneous(*matrix));
}

TEST(VectorEngineTypeMatrixHomogeneous, homogeneousTrue2)
{
	Matrix *matrix = new Matrix(4, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 0);
	matrix->setEntry(3, 0, 3);
	matrix->setEntry(3, 1, 2);
	matrix->setEntry(3, 2, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_TRUE(TM.homogeneous(*matrix));
}

TEST(VectorEngineTypeMatrixHomogeneous, homogeneousTrue3)
{
	Matrix *matrix = new Matrix(3, 5);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(0, 4, 0);
	matrix->setEntry(1, 0, 5);
	matrix->setEntry(1, 1, 6);
	matrix->setEntry(1, 2, 7);
	matrix->setEntry(1, 3, 0);
	matrix->setEntry(1, 4, 0);
	matrix->setEntry(2, 0, 9);
	matrix->setEntry(2, 1, 10);
	matrix->setEntry(2, 2, 11);
	matrix->setEntry(2, 3, 1);
	matrix->setEntry(2, 4, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.homogeneous(*matrix));
	EXPECT_TRUE(TM.homogeneous(*matrix));
}