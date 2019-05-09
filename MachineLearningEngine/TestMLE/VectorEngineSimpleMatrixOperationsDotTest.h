#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineSimpleMatrixOperationsDot, DotHolePositiveVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHolePositiveMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3, 
			 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHolePositiveMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 1, 
			 2, 3, 
			 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleNegativeVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { -1, -2, -3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { -1, -3, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleNegativeMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { -1, -2, -3, 
			 -1, -3, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleNegativeMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { -1, -1, 
			 -2, -3, 
			 -3, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleMixedVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { -1, -3, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(-10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleMixedMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = {  1,  2,  3, 
			 -1, -3, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(-10, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleMixedMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, -1, 
			 2, -3, 
			 3, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(-10, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalPositiveVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1.5, 2.5, 3.5 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1.5, 3.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(16.25, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalPositiveMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1.5, 2.5, 3.5, 
			 1.5, 3.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(16.25, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalPositiveMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1.5, 1.5, 
			 2.5, 3.5, 
			 3.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(16.25, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalNegativeVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { -1.5, -2.5, -3.5 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(16.25, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalNegativeMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { -1.5, -2.5, -3.5, 
			 -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(16.25, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalNegativeMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { -1.5, -1.5, 
			 -2.5, -3.5, 
			 -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(16.25, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalMixedVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1.5, 2.5, 3.5 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(-16.25, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalMixedMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = {  1.5,  2.5,  3.5, 
			 -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(-16.25, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotDecimalMixedMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1.5, -1.5, 
			 2.5, -3.5, 
			 3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(-16.25, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedPositiveVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1.5, 3.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(13, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedPositiveMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1,   2,   3, 
			 1.5, 3.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(13, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedPositiveMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 1.5, 
			 2, 3.5, 
			 3, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(13, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedNegativeVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { -1, -2, -3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(13, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedNegativeMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { -1,   -2,   -3, 
			 -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(13, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedNegativeMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { -1, -1.5, 
			 -2, -3.5, 
			 -3, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(13, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedMixedVector)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(-13, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedMixedMatrixRow)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = {  1,    2,    3, 
			 -1.5, -3.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(-13, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMixedMixedMatrixCol)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, -1.5, 
			 2, -3.5, 
			 3, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(-13, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector1x2)
{
	Matrix *vec1 = new Matrix(1, 1);
	vec1->setEntry(0, 0, 1);
	Matrix *vec2 = new Matrix(1, 1);
	vec2->setEntry(0, 0, 1);

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(1, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow1x2)
{
	Matrix *vec = new Matrix(2, 1);
	vec->setEntry(0, 0, 1);
	vec->setEntry(1, 0, 1);

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(1, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol1x2)
{
	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 1);
	vec->setEntry(0, 1, 1);

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(1, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector2x2)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	Matrix *vec2 = new Matrix(1, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(5, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow2x2)
{
	Matrix *vec = new Matrix(2, 2);
	*vec = { 1, 2, 
			 1, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(5, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol2x2)
{
	Matrix *vec = new Matrix(2, 2);
	*vec = { 1, 1, 
			 2, 2 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(5, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector3x2)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow3x2)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3, 
			 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol3x2)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 1,
			 2, 3, 
			 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector4x2)
{
	Matrix *vec1 = new Matrix(1, 4);
	*vec1 = { 1, 2, 3, 4 };

	Matrix *vec2 = new Matrix(1, 4);
	*vec2 = { 1, 2, 3, 4 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(30, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow4x2)
{
	Matrix *vec = new Matrix(2, 4);
	*vec = { 1, 2, 3, 4, 
			 1, 2, 3, 4 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(30, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol4x2)
{
	Matrix *vec = new Matrix(4, 2);
	*vec = { 1, 1, 
			 2, 2, 
			 3, 3, 
			 4, 4 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(30, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector5x2)
{
	Matrix *vec1 = new Matrix(1, 5);
	*vec1 = { 1, 2, 3, 4, 5 };

	Matrix *vec2 = new Matrix(1, 5);
	*vec2 = { 1, 2, 3, 4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(55, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow5x2)
{
	Matrix *vec = new Matrix(2, 5);
	*vec = { 1, 2, 3, 4, 5, 
			 1, 2, 3, 4, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(55, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol5x2)
{
	Matrix *vec = new Matrix(5, 2);
	*vec = { 1, 1, 
			 2, 2, 
			 3, 3, 
			 4, 4, 
			 5, 5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(55, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotHoleVector6x2)
{
	Matrix *vec1 = new Matrix(1, 6);
	*vec1 = { 1, 2, 3, 4, 5, 6 };

	Matrix *vec2 = new Matrix(1, 6);
	*vec2 = { 1, 2, 3, 4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(91, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixRow6x2)
{
	Matrix *vec = new Matrix(2, 6);
	*vec = { 1, 2, 3, 4, 5, 6, 
			 1, 2, 3, 4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1));
	EXPECT_EQ(91, SimpleMatrixOperations::dot(*vec, 0, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixCol6x2)
{
	Matrix *vec = new Matrix(6, 2);
	*vec = { 1, 1, 
			 2, 2, 
			 3, 3,
			 4, 4, 
			 5, 5, 
			 6, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 1, 1));
	EXPECT_EQ(91, SimpleMatrixOperations::dot(*vec, 0, 1, 1));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotRowRow)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotRowCol)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(3, 1);
	*vec2 = { 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotColRow)
{
	Matrix *vec1 = new Matrix(3, 1);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotColCol)
{
	Matrix *vec1 = new Matrix(3, 1);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(3, 1);
	*vec2 = { 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec1, *vec2));
	EXPECT_EQ(10, SimpleMatrixOperations::dot(*vec1, *vec2));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException1)
{
	Matrix *vec1 = new Matrix(1, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);

	Matrix *vec2 = new Matrix(1, 3);
	*vec2 = { 1, 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException2)
{
	Matrix *vec1 = new Matrix(1, 3);
	*vec1 = { 1, 2, 3 };

	Matrix *vec2 = new Matrix(1, 2);
	vec2->setEntry(0, 0, 1);
	vec2->setEntry(0, 1, 2);

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException3)
{
	Matrix *vec1 = new Matrix(2, 3);
	*vec1 = { 1, 2, 3, 
			  1, 2, 3 };

	Matrix *vec2 = new Matrix(2, 3);
	*vec2 = { 1, 2, 3,
			  1, 2, 3 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException4)
{
	Matrix *vec1 = new Matrix(2, 3);
	*vec1 = { 1, 2, 3, 
			  1, 2, 3 };

	Matrix *vec2 = new Matrix(3, 2);
	*vec2 = { 1, 2, 
			  1, 2, 
			  1, 2 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException5)
{
	Matrix *vec1 = new Matrix(3, 2);
	*vec1 = { 1, 2, 
			  1, 2, 
			  1, 2 };

	Matrix *vec2 = new Matrix(2, 3);
	*vec2 = { 1, 2, 3, 
			  1, 2, 3 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotVectorException6)
{
	Matrix *vec1 = new Matrix(3, 2);
	*vec1 = { 1, 2, 
			  1, 2, 
			  1, 2 };

	Matrix *vec2 = new Matrix(3, 2);
	*vec2 = { 1, 2,
			  1, 2,
			  1, 2 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec1, *vec2), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException1)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3, 
			 1, 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, -1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException2)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3, 
			 1, 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, 3, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException3)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3, 
			 1, 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, 0, -1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixException4)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3,
			 1, 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, 0, 3), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixNoException)
{
	Matrix *vec = new Matrix(2, 3);
	*vec = { 1, 2, 3,
			 1, 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 0));
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException1)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 2, 
			 3, 1, 
			 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, -1, 1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException2)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 2, 
			 3, 1, 
			 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, 3, 1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException3)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 2, 
			 3, 1, 
			 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, 0, -1, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColException4)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 2, 
			 3, 1, 
			 3, 1 };

	EXPECT_THROW(SimpleMatrixOperations::dot(*vec, 0, 3, 1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDot, DotMatrixColNoException)
{
	Matrix *vec = new Matrix(3, 2);
	*vec = { 1, 2, 
			 3, 1, 
			 3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::dot(*vec, 0, 0, 1));
}