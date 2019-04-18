#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix1x1)
{
	SimpleMatrixOperations SMO;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = SMO.makeIdentityMatrix(1));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix2x2)
{
	Matrix *testMatrix = new Matrix(2, 2);
	*testMatrix = { 1, 0, 
					0, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.makeIdentityMatrix(2));
	EXPECT_TRUE(*testMatrix == SMO.makeIdentityMatrix(2));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix3x3)
{
	Matrix *testMatrix = new Matrix(3, 3);
	*testMatrix = { 1, 0, 0,
					0, 1, 0,
					0, 0, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.makeIdentityMatrix(3));
	EXPECT_TRUE(*testMatrix == SMO.makeIdentityMatrix(3));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix4x4)
{
	Matrix *testMatrix = new Matrix(4, 4);
	*testMatrix = { 1, 0, 0, 0,
					0, 1, 0, 0,
					0, 0, 1, 0,
					0, 0, 0, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.makeIdentityMatrix(4));
	EXPECT_TRUE(*testMatrix == SMO.makeIdentityMatrix(4));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix5x5)
{
	Matrix *testMatrix = new Matrix(5, 5);
	*testMatrix = { 1, 0, 0, 0, 0,
					0, 1, 0, 0, 0,
					0, 0, 1, 0, 0,
					0, 0, 0, 1, 0,
					0, 0, 0, 0, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.makeIdentityMatrix(5));
	EXPECT_TRUE(*testMatrix == SMO.makeIdentityMatrix(5));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix6x6)
{
	Matrix *testMatrix = new Matrix(6, 6);
	*testMatrix = { 1, 0, 0, 0, 0, 0,
					0, 1, 0, 0, 0, 0,
					0, 0, 1, 0, 0, 0,
					0, 0, 0, 1, 0, 0,
					0, 0, 0, 0, 1, 0,
					0, 0, 0, 0, 0, 1 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.makeIdentityMatrix(6));
	EXPECT_TRUE(*testMatrix == SMO.makeIdentityMatrix(6));
}

//-------ecxeption--------
TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrixException1)
{
	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.makeIdentityMatrix(0), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrixException2)
{
	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.makeIdentityMatrix(-1), std::exception);
}