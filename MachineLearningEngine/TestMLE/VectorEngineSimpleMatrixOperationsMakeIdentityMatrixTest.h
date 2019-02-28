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
	SimpleMatrixOperations SMO;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = SMO.makeIdentityMatrix(2));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
	EXPECT_EQ(0, testMatrix->getEntry(0, 1));
	EXPECT_EQ(0, testMatrix->getEntry(1, 0));
	EXPECT_EQ(1, testMatrix->getEntry(1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix3x3)
{
	SimpleMatrixOperations SMO;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = SMO.makeIdentityMatrix(3));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
	EXPECT_EQ(0, testMatrix->getEntry(0, 1));
	EXPECT_EQ(0, testMatrix->getEntry(0, 2));
	EXPECT_EQ(0, testMatrix->getEntry(1, 0));
	EXPECT_EQ(1, testMatrix->getEntry(1, 1));
	EXPECT_EQ(0, testMatrix->getEntry(1, 2));
	EXPECT_EQ(0, testMatrix->getEntry(2, 0));
	EXPECT_EQ(0, testMatrix->getEntry(2, 1));
	EXPECT_EQ(1, testMatrix->getEntry(2, 2));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix4x4)
{
	SimpleMatrixOperations SMO;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = SMO.makeIdentityMatrix(4));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
	EXPECT_EQ(0, testMatrix->getEntry(0, 1));
	EXPECT_EQ(0, testMatrix->getEntry(0, 2));
	EXPECT_EQ(0, testMatrix->getEntry(0, 3));
	EXPECT_EQ(0, testMatrix->getEntry(1, 0));
	EXPECT_EQ(1, testMatrix->getEntry(1, 1));
	EXPECT_EQ(0, testMatrix->getEntry(1, 2));
	EXPECT_EQ(0, testMatrix->getEntry(1, 3));
	EXPECT_EQ(0, testMatrix->getEntry(2, 0));
	EXPECT_EQ(0, testMatrix->getEntry(2, 1));
	EXPECT_EQ(1, testMatrix->getEntry(2, 2));
	EXPECT_EQ(0, testMatrix->getEntry(2, 3));
	EXPECT_EQ(0, testMatrix->getEntry(3, 0));
	EXPECT_EQ(0, testMatrix->getEntry(3, 1));
	EXPECT_EQ(0, testMatrix->getEntry(3, 2));
	EXPECT_EQ(1, testMatrix->getEntry(3, 3));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix5x5)
{
	SimpleMatrixOperations SMO;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = SMO.makeIdentityMatrix(5));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
	EXPECT_EQ(0, testMatrix->getEntry(0, 1));
	EXPECT_EQ(0, testMatrix->getEntry(0, 2));
	EXPECT_EQ(0, testMatrix->getEntry(0, 3));
	EXPECT_EQ(0, testMatrix->getEntry(0, 4));
	EXPECT_EQ(0, testMatrix->getEntry(1, 0));
	EXPECT_EQ(1, testMatrix->getEntry(1, 1));
	EXPECT_EQ(0, testMatrix->getEntry(1, 2));
	EXPECT_EQ(0, testMatrix->getEntry(1, 3));
	EXPECT_EQ(0, testMatrix->getEntry(1, 4));
	EXPECT_EQ(0, testMatrix->getEntry(2, 0));
	EXPECT_EQ(0, testMatrix->getEntry(2, 1));
	EXPECT_EQ(1, testMatrix->getEntry(2, 2));
	EXPECT_EQ(0, testMatrix->getEntry(2, 3));
	EXPECT_EQ(0, testMatrix->getEntry(2, 4));
	EXPECT_EQ(0, testMatrix->getEntry(3, 0));
	EXPECT_EQ(0, testMatrix->getEntry(3, 1));
	EXPECT_EQ(0, testMatrix->getEntry(3, 2));
	EXPECT_EQ(1, testMatrix->getEntry(3, 3));
	EXPECT_EQ(0, testMatrix->getEntry(3, 4));
	EXPECT_EQ(0, testMatrix->getEntry(4, 0));
	EXPECT_EQ(0, testMatrix->getEntry(4, 1));
	EXPECT_EQ(0, testMatrix->getEntry(4, 2));
	EXPECT_EQ(0, testMatrix->getEntry(4, 3));
	EXPECT_EQ(1, testMatrix->getEntry(4, 4));
}

TEST(VectorEngineSimpleMatrixOperationsMakeIdentityMatrix, makeIdentityMatrix6x6)
{
	SimpleMatrixOperations SMO;
	Matrix *testMatrix = new Matrix();

	EXPECT_NO_THROW(*testMatrix = SMO.makeIdentityMatrix(6));
	EXPECT_EQ(1, testMatrix->getEntry(0, 0));
	EXPECT_EQ(0, testMatrix->getEntry(0, 1));
	EXPECT_EQ(0, testMatrix->getEntry(0, 2));
	EXPECT_EQ(0, testMatrix->getEntry(0, 3));
	EXPECT_EQ(0, testMatrix->getEntry(0, 4));
	EXPECT_EQ(0, testMatrix->getEntry(0, 5));
	EXPECT_EQ(0, testMatrix->getEntry(1, 0));
	EXPECT_EQ(1, testMatrix->getEntry(1, 1));
	EXPECT_EQ(0, testMatrix->getEntry(1, 2));
	EXPECT_EQ(0, testMatrix->getEntry(1, 3));
	EXPECT_EQ(0, testMatrix->getEntry(1, 4));
	EXPECT_EQ(0, testMatrix->getEntry(1, 5));
	EXPECT_EQ(0, testMatrix->getEntry(2, 0));
	EXPECT_EQ(0, testMatrix->getEntry(2, 1));
	EXPECT_EQ(1, testMatrix->getEntry(2, 2));
	EXPECT_EQ(0, testMatrix->getEntry(2, 3));
	EXPECT_EQ(0, testMatrix->getEntry(2, 4));
	EXPECT_EQ(0, testMatrix->getEntry(2, 5));
	EXPECT_EQ(0, testMatrix->getEntry(3, 0));
	EXPECT_EQ(0, testMatrix->getEntry(3, 1));
	EXPECT_EQ(0, testMatrix->getEntry(3, 2));
	EXPECT_EQ(1, testMatrix->getEntry(3, 3));
	EXPECT_EQ(0, testMatrix->getEntry(3, 4));
	EXPECT_EQ(0, testMatrix->getEntry(3, 5));
	EXPECT_EQ(0, testMatrix->getEntry(4, 0));
	EXPECT_EQ(0, testMatrix->getEntry(4, 1));
	EXPECT_EQ(0, testMatrix->getEntry(4, 2));
	EXPECT_EQ(0, testMatrix->getEntry(4, 3));
	EXPECT_EQ(1, testMatrix->getEntry(4, 4));
	EXPECT_EQ(0, testMatrix->getEntry(4, 5));
	EXPECT_EQ(0, testMatrix->getEntry(5, 0));
	EXPECT_EQ(0, testMatrix->getEntry(5, 1));
	EXPECT_EQ(0, testMatrix->getEntry(5, 2));
	EXPECT_EQ(0, testMatrix->getEntry(5, 3));
	EXPECT_EQ(0, testMatrix->getEntry(5, 4));
	EXPECT_EQ(1, testMatrix->getEntry(5, 5));
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