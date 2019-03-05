#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse1)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 5);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 4);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse2)
{
	Matrix *matrix = new Matrix(2, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 2);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse3)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse4)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 6);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse5)
{
	Matrix *matrix = new Matrix(3, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(1, 3, 1);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 6);
	matrix->setEntry(2, 3, 3);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse6)
{
	Matrix *matrix = new Matrix(2, 4);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(0, 3, 3);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 3);
	matrix->setEntry(1, 3, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse7)
{
	Matrix *matrix = new Matrix(4, 2);
	matrix->setEntry(0, 0, 5);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(2, 0, 7);
	matrix->setEntry(3, 0, 8);
	matrix->setEntry(0, 1, 3);
	matrix->setEntry(1, 1, 7);
	matrix->setEntry(2, 1, 4);
	matrix->setEntry(3, 1, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse8)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 1);
	matrix->setEntry(2, 2, 0);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalFalse9)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 2);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_FALSE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue1)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 1);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_TRUE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue2)
{
	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 0);
	matrix->setEntry(0, 1, 1);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 0);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(2, 0, 0);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_TRUE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue3)
{
	Matrix *matrix = new Matrix(2, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_TRUE(TM.orthogonal(*matrix));
}

TEST(VectorEngineTypeMatrixOrthogonal, orthogonalTrue4)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.orthogonal(*matrix));
	EXPECT_TRUE(TM.orthogonal(*matrix));
}