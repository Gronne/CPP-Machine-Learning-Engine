#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsCross, crossHolePositiveVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-7, resultVec->getEntry(0, 0));
	EXPECT_EQ(2, resultVec->getEntry(0, 1));
	EXPECT_EQ(1, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleNegativeVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1);
	vec2->setEntry(0, 1, -3);
	vec2->setEntry(0, 2, -1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(7, resultVec->getEntry(0, 0));
	EXPECT_EQ(-2, resultVec->getEntry(0, 1));
	EXPECT_EQ(-1, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleMixedVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, -1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-11, resultVec->getEntry(0, 0));
	EXPECT_EQ(-2, resultVec->getEntry(0, 1));
	EXPECT_EQ(5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalPositiveVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1.5);
	vec2->setEntry(0, 1, 3.5);
	vec2->setEntry(0, 2, 1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-8.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(1.5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalNegativeVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(0, 1, -2.5);
	vec1->setEntry(0, 2, -3.5);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, -1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-8.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(1.5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalMixedVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, -3.5);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, 1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-8.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(-3, resultVec->getEntry(0, 1));
	EXPECT_EQ(1.5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedPositiveVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1.5);
	vec2->setEntry(0, 1, 3.5);
	vec2->setEntry(0, 2, 1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-7.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(0.5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedNegativeVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, -1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(7.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(-3, resultVec->getEntry(0, 1));
	EXPECT_EQ(-0.5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedMixedVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, -3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, 3.5);
	vec2->setEntry(0, 2, -1.5);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(7.5, resultVec->getEntry(0, 0));
	EXPECT_EQ(3, resultVec->getEntry(0, 1));
	EXPECT_EQ(-0.5, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossNotSetVectors)
{
	Matrix *vec1 = new Matrix(1, 3);
	Matrix *vec2 = new Matrix(1, 3);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector2x1)
{
	Matrix *vec1 = new Matrix(1, 1);
	vec1->setEntry(0, 0, 1);
	Matrix *vec2 = new Matrix(1, 1);
	vec2->setEntry(0, 0, 1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*resultVec = SMO.cross(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector2x2)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 0, 2);
	Matrix *vec2 = new Matrix(1, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 0, -2);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_THROW(*resultVec = SMO.cross(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector2x3)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-7, resultVec->getEntry(0, 0));
	EXPECT_EQ(2, resultVec->getEntry(0, 1));
	EXPECT_EQ(1, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector2x4)
{
	Matrix *vec1 = new Matrix(1, 4);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	Matrix *vec2 = new Matrix(1, 4);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);
	vec2->setEntry(0, 3, 3);

	Matrix *resultVec = new Matrix();
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(*resultVec = SMO.cross(*vec1, *vec2));
	EXPECT_EQ(-7, resultVec->getEntry(0, 0));
	EXPECT_EQ(2, resultVec->getEntry(0, 1));
	EXPECT_EQ(1, resultVec->getEntry(0, 2));
}

TEST(VectorEngineSimpleMatrixOperationsCross, crossVector2x5)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionVectorsVec1Matrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionVectorsVec2Matrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionVectorsBothMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionMatrixSmallColumn)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHolePositiveMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleNegativeMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleMixedMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalPositiveMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalNegativeMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalMixedMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedPositiveMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedNegativeMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedNegativeMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionMatrixSmallRow)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionMatrixSmallColumn)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionMatrixLargeRow)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossExceptionMatrixLargeColumn)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossNotSetMatrix)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix1x1)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix2x2)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix3x3)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix4x4)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix5x5)
{

}

//-----------------------

TEST(VectorEngineSimpleMatrixOperationsCross, crossHolePositiveMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleNegativeMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossHoleMixedMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalPositiveMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalNegativeMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossDecimalMixedMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedPositiveMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedNegativeMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMixedNegativeMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossNotSetMatrixTrans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix1x1Trans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix2x2Trans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix3x3Trans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix4x4Trans)
{

}

TEST(VectorEngineSimpleMatrixOperationsCross, crossMatrix5x5Trans)
{

}