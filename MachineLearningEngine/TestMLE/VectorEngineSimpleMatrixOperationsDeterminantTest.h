#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6, 
				-7, -8, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(-24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3, 
				 4, -5,  6, 
				-7,  8, -1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(-24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(0, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5, 
				7.5, 8.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5, 
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(-24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, additionDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5, 
				 4.5, -5.5,  6.5, 
				-7.5,  8.5, -1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(-24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, additionDecimalZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0,   0,   0, 
				4.5, 5.5, 6.5, 
				7.5, 8.5, 1.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(0, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, additionExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5 };

	EXPECT_THROW(SimpleMatrixOperations::determinant(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1.5, 2.5, 
				4.5, 5.5, 
				4.5, 1 };

	EXPECT_THROW(SimpleMatrixOperations::determinant(*matrix), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(1, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(-5, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(24, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(216, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2, 
				3,  4, 5,  6, -7 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(-16314, SimpleMatrixOperations::determinant(*matrix));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 1,
				0, 0, 0,
				0, 0, 0 };

	EXPECT_NO_THROW(SimpleMatrixOperations::determinant(*matrix));
	EXPECT_EQ(0, SimpleMatrixOperations::determinant(*matrix));
}