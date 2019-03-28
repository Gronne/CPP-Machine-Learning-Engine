#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineTypeMatrixBasis, basisTrue1)
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
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_TRUE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisTrue2)
{
	Matrix *matrix = new Matrix(2, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 1);

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_TRUE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse1)
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
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse2)
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
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse3)
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
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse4)
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
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}

TEST(VectorEngineTypeMatrixBasis, basisFalse5)
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
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}


TEST(VectorEngineTypeMatrixBasis, basisSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	TypeMatrix TM;
	EXPECT_NO_THROW(TM.basis(*matrix));
	EXPECT_FALSE(TM.basis(*matrix));
}