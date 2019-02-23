#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsDot, DotHolePositiveVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHolePositiveMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHolePositiveMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleNegativeVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(0, 1, -2);
	vec1->setEntry(0, 2, -3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1);
	vec2->setEntry(0, 1, -3);
	vec2->setEntry(0, 2, -1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleNegativeMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(0, 1, -2);
	vec1->setEntry(0, 2, -3);
	vec1->setEntry(1, 0, -1);
	vec1->setEntry(1, 1, -3);
	vec1->setEntry(1, 2, -1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleNegativeMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(1, 0, -2);
	vec1->setEntry(2, 0, -3);
	vec1->setEntry(0, 1, -1);
	vec1->setEntry(1, 1, -3);
	vec1->setEntry(2, 1, -1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleMixedVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1);
	vec2->setEntry(0, 1, -3);
	vec2->setEntry(0, 2, -1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(-10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleMixedMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, -1);
	vec1->setEntry(1, 1, -3);
	vec1->setEntry(1, 2, -1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(-10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleMixedMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, -1);
	vec1->setEntry(1, 1, -3);
	vec1->setEntry(2, 1, -1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(-10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalPositiveVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1.5);
	vec2->setEntry(0, 1, 3.5);
	vec2->setEntry(0, 2, 1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalPositiveMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	vec1->setEntry(1, 0, 1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(1, 2, 1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalPositiveMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(1, 0, 2.5);
	vec1->setEntry(2, 0, 3.5);
	vec1->setEntry(0, 1, 1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(2, 1, 1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalNegativeVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(0, 1, -2.5);
	vec1->setEntry(0, 2, -3.5);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalNegativeMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(0, 1, -2.5);
	vec1->setEntry(0, 2, -3.5);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalNegativeMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, -1.5);
	vec1->setEntry(1, 0, -2.5);
	vec1->setEntry(2, 0, -3.5);
	vec1->setEntry(0, 1, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(2, 1, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalMixedVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(-16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalMixedMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(-16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalMixedMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(1, 0, 2.5);
	vec1->setEntry(2, 0, 3.5);
	vec1->setEntry(0, 1, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(2, 1, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(-16.25, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedPositiveVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1.5);
	vec2->setEntry(0, 1, 3.5);
	vec2->setEntry(0, 2, 1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedPositiveMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(1, 2, 1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedPositiveMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1.5);
	vec1->setEntry(1, 1, 3.5);
	vec1->setEntry(2, 1, 1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedNegativeVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(0, 1, -2);
	vec1->setEntry(0, 2, -3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedNegativeMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(0, 1, -2);
	vec1->setEntry(0, 2, -3);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedNegativeMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, -1);
	vec1->setEntry(1, 0, -2);
	vec1->setEntry(2, 0, -3);
	vec1->setEntry(0, 1, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(2, 1, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedMixedVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, -1.5);
	vec2->setEntry(0, 1, -3.5);
	vec2->setEntry(0, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(-13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedMixedMatrixRow)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(1, 2, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(-13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedMixedMatrixCol)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, -1.5);
	vec1->setEntry(1, 1, -3.5);
	vec1->setEntry(2, 1, -1.5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(-13, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector1x2)
{
	Matrix *vec1 = new Matrix(1, 1);
	vec1->setEntry(0, 0, 1);
	Matrix *vec2 = new Matrix(1, 1);
	vec2->setEntry(0, 0, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(1, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow1x2)
{
	Matrix *vec1 = new Matrix(2, 1);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(1, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol1x2)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(1, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector2x2)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	Matrix *vec2 = new Matrix(1, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(5, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow2x2)
{
	Matrix *vec1 = new Matrix(2, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(5, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol2x2)
{
	Matrix *vec1 = new Matrix(2, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 2);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(5, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector3x2)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow3x2)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol3x2)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector4x2)
{
	Matrix *vec1 = new Matrix(1, 4);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	Matrix *vec2 = new Matrix(1, 4);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(0, 2, 3);
	vec2->setEntry(0, 3, 4);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(30, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow4x2)
{
	Matrix *vec1 = new Matrix(2, 4);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(1, 2, 3);
	vec1->setEntry(1, 3, 4);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(30, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol4x2)
{
	Matrix *vec1 = new Matrix(4, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(3, 0, 4);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(2, 1, 3);
	vec1->setEntry(3, 1, 4);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(30, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector5x2)
{
	Matrix *vec1 = new Matrix(1, 5);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(0, 4, 5);
	Matrix *vec2 = new Matrix(1, 5);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(0, 2, 3);
	vec2->setEntry(0, 3, 4);
	vec2->setEntry(0, 4, 5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(55, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow5x2)
{
	Matrix *vec1 = new Matrix(2, 5);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(0, 4, 5);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(1, 2, 3);
	vec1->setEntry(1, 3, 4);
	vec1->setEntry(1, 4, 5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(55, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol5x2)
{
	Matrix *vec1 = new Matrix(5, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(3, 0, 4);
	vec1->setEntry(4, 0, 5);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(2, 1, 3);
	vec1->setEntry(3, 1, 4);
	vec1->setEntry(4, 1, 5);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(55, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector6x2)
{
	Matrix *vec1 = new Matrix(1, 6);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(0, 4, 5);
	vec1->setEntry(0, 5, 6);
	Matrix *vec2 = new Matrix(1, 6);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(0, 2, 3);
	vec2->setEntry(0, 3, 4);
	vec2->setEntry(0, 4, 5);
	vec2->setEntry(0, 5, 6);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(91, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow6x2)
{
	Matrix *vec1 = new Matrix(2, 6);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(0, 3, 4);
	vec1->setEntry(0, 4, 5);
	vec1->setEntry(0, 5, 6);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(1, 2, 3);
	vec1->setEntry(1, 3, 4);
	vec1->setEntry(1, 4, 5);
	vec1->setEntry(1, 5, 6);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1));
	EXPECT_EQ(91, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol6x2)
{
	Matrix *vec1 = new Matrix(6, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(3, 0, 4);
	vec1->setEntry(4, 0, 5);
	vec1->setEntry(5, 0, 6);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(2, 1, 3);
	vec1->setEntry(3, 1, 4);
	vec1->setEntry(4, 1, 5);
	vec1->setEntry(5, 1, 6);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 1, 1));
	EXPECT_EQ(91, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotRowRow)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotRowCol)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(3, 1);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(1, 0, 3);
	vec2->setEntry(2, 0, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotColRow)
{
	Matrix *vec1 = new Matrix(3, 1);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotColCol)
{
	Matrix *vec1 = new Matrix(3, 1);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	Matrix *vec2 = new Matrix(3, 1);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(1, 0, 3);
	vec2->setEntry(2, 0, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, *vec2));
	EXPECT_EQ(10, resultValue);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException1)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	Matrix *vec2 = new Matrix(1, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 3);
	vec2->setEntry(0, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException2)
{
	Matrix *vec1 = new Matrix(1, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	Matrix *vec2 = new Matrix(1, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException3)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(1, 2, 3);
	Matrix *vec2 = new Matrix(2, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(0, 2, 3);
	vec2->setEntry(1, 0, 1);
	vec2->setEntry(1, 1, 2);
	vec2->setEntry(1, 2, 3);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException4)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(1, 2, 3);
	Matrix *vec2 = new Matrix(3, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(1, 0, 1);
	vec2->setEntry(1, 1, 2);
	vec2->setEntry(2, 0, 1);
	vec2->setEntry(2, 1, 2);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException5)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(2, 0, 1);
	vec1->setEntry(2, 1, 2);
	Matrix *vec2 = new Matrix(2, 3);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(0, 2, 3);
	vec2->setEntry(1, 0, 1);
	vec2->setEntry(1, 1, 2);
	vec2->setEntry(1, 2, 3);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException6)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 2);
	vec1->setEntry(2, 0, 1);
	vec1->setEntry(2, 1, 2);
	Matrix *vec2 = new Matrix(3, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(1, 0, 1);
	vec2->setEntry(1, 1, 2);
	vec2->setEntry(2, 0, 1);
	vec2->setEntry(2, 1, 2);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException1)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, -1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException2)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, 3, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException3)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, 0, -1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException4)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, 0, 3), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixNoException)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException1)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, -1, 1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException2)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, 3, 1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException3)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, 0, -1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException4)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(resultValue = SMO.dot(*vec1, 0, 3, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColNoException)
{
	Matrix *vec1 = new Matrix(3, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 2);
	vec1->setEntry(2, 0, 3);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(2, 1, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 0, 0, 1));
}