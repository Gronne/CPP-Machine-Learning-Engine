#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsCross, crossHolePositive)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-7, resultVec->getEntry(0, 0));
	EXPECT_EQ(2, resultVec->getEntry(0, 1));
	EXPECT_EQ(1, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleNegative)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, -1);
	vec1->setEntry(1, 1, -3);
	vec1->setEntry(1, 2, -1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(7, resultVec->getEntry(0, 0));
	EXPECT_EQ(-2, resultVec->getEntry(0, 1));
	EXPECT_EQ(-1, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleMixed)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, -1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, -1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-11, resultVec->getEntry(0, 0));
	EXPECT_EQ(-2, resultVec->getEntry(0, 1));
	EXPECT_EQ(5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalPositive)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	vec1->setEntry(1, 0, 1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(1, 2, 1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-8.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(1.5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalNegative)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(0, 1, -2.5);
	vec1->setEntry(0, 2, -3.5);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, -1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-8.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(1.5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalMixed)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, -3.5);
	vec1->setEntry(1, 0, 1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, 1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-8.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(-3, resultVec->getEntry(0, 1));
	EXPECT_EQ(1.5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedPositive)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(1, 2, 1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-7.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(0.5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedNegative)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, -1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(7.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(-3, resultVec->getEntry(0, 1));
	EXPECT_EQ(-0.5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedMixed)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, -3);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(1, 2, -1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(7.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(-0.5, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossNotSet)
{
	Matrix *vec1 = new Matrix(2, 3);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector1x2)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 2);
	vec1->setEntry(0, 1, 8);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(8, resultVec->getEntry(0, 0));
	EXPECT_EQ(-2, resultVec->getEntry(0, 1));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector2x3)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);   

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-7, resultVec->getEntry(0, 0));
	EXPECT_EQ(2, resultVec->getEntry(0, 1));
	EXPECT_EQ(1, resultVec->getEntry(0, 2));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector3x4)
{
	Matrix *vec1 = new Matrix(3, 4);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);
	vec1->setEntry(1, 3, 3);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(2, 1, 1);
	vec1->setEntry(2, 2, 3);
	vec1->setEntry(2, 3, 1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(16, resultVec->getEntry(0, 0));
	EXPECT_EQ(-16, resultVec->getEntry(0, 1));
	EXPECT_EQ(-16, resultVec->getEntry(0, 2));
	EXPECT_EQ(16, resultVec->getEntry(0, 3));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	resultValue += resultVec->getEntry(0, 3) * vec1->getEntry(0, 3);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector4x5)
{
	Matrix *vec1 = new Matrix(4, 5);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(0, 4, 5);
	vec1->setEntry(1, 0, 5);
	vec1->setEntry(1, 1, 4);
	vec1->setEntry(1, 2, -3);
	vec1->setEntry(1, 3, 2);
	vec1->setEntry(1, 4, 1);
	vec1->setEntry(2, 0, 1);
	vec1->setEntry(2, 1, 3);
	vec1->setEntry(2, 2, 1);
	vec1->setEntry(2, 3, 3);
	vec1->setEntry(2, 4, 1);
	vec1->setEntry(3, 0, 3);
	vec1->setEntry(3, 1, 1);
	vec1->setEntry(3, 2, -3);
	vec1->setEntry(3, 3, 1);
	vec1->setEntry(3, 4, 3);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1));
	EXPECT_EQ(-48, resultVec->getEntry(0, 0));
	EXPECT_EQ(96, resultVec->getEntry(0, 1));
	EXPECT_EQ(0, resultVec->getEntry(0, 2));
	EXPECT_EQ(-96, resultVec->getEntry(0, 3));
	EXPECT_EQ(48, resultVec->getEntry(0, 4));

	double resultValue = resultVec->getEntry(0, 0) * vec1->getEntry(0, 0);
	resultValue += resultVec->getEntry(0, 1) * vec1->getEntry(0, 1);
	resultValue += resultVec->getEntry(0, 2) * vec1->getEntry(0, 2);
	resultValue += resultVec->getEntry(0, 3) * vec1->getEntry(0, 3);
	resultValue += resultVec->getEntry(0, 4) * vec1->getEntry(0, 4);
	EXPECT_EQ(0, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossException1x1)
{
	Matrix *vec1 = new Matrix(1, 1);
	vec1->setEntry(0, 0, 2);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*resultVec = SMO.cross(*vec1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossException2x2)
{
	Matrix *vec1 = new Matrix(2, 2);
	vec1->setEntry(0, 0, 2);
	vec1->setEntry(0, 1, -2);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(1, 1, 2);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*resultVec = SMO.cross(*vec1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossException3x3)
{
	Matrix *vec1 = new Matrix(3, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);
	vec1->setEntry(2, 0, -4);
	vec1->setEntry(2, 1, 2);
	vec1->setEntry(2, 2, 3);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*resultVec = SMO.cross(*vec1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossException3x2)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(2, 1, 1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*resultVec = SMO.cross(*vec1), std::exception);
}