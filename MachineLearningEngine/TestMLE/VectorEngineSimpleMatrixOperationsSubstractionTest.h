#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2,  -4,  -6, 
				-8, -10, -12 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2, 4, 6, 
				8, 10, 12 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3, 
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2, -4,   6, 
				-8, 10, -12 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix * -1));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix * -1));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -3,  -5,  -7, 
				-9, -11, -13 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3,  5,  7, 
				9, 11, 13 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5, 
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = {  3, -5,   7, 
				-9, 11, -13 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction((*matrix * -1), *matrix * -1));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction((*matrix * -1), *matrix * -1));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 4);

	EXPECT_THROW(SimpleMatrixOperations::substraction(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 2);

	EXPECT_THROW(SimpleMatrixOperations::substraction(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRow1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 3);

	EXPECT_THROW(SimpleMatrixOperations::substraction(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRow2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 3);

	EXPECT_THROW(SimpleMatrixOperations::substraction(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRowCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 4);

	EXPECT_THROW(SimpleMatrixOperations::substraction(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionExceptionDiffRowCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 2);

	EXPECT_THROW(SimpleMatrixOperations::substraction(*matrix, *result), std::exception);
}

//-----------------

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDoubleHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1, 0, 1, 
				 2, 3, 4 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction(*matrix, 2));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction(*matrix, 2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDoubleHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3, 4, 5, 
				6, 7, 8 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction(*matrix, -2));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction(*matrix, -2));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDoubleHoleZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3,
				4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction(*matrix, 0));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction(*matrix, 0));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDoubleDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { -1.5, -0.5, 0.5, 
				 1.5,  2.5, 3.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction(*matrix, 2.5));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction(*matrix, 2.5));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDoubleDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 3.5, 4.5, 5.5, 
				6.5, 7.5, 8.5 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction(*matrix, -2.5));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction(*matrix, -2.5));
}

TEST(VectorEngineSimpleMatrixOperationsSubstraction, substractionDoubleDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 2, 3, 
				4, 5, 6 };

	EXPECT_NO_THROW(SimpleMatrixOperations::substraction(*matrix, 0.0));
	EXPECT_TRUE(*result == SimpleMatrixOperations::substraction(*matrix, 0.0));
}