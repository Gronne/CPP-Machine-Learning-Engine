#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = { 1, 4, 9,
				16, 25, 36 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,  4,  9, 
				16, 25, 36 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHoleMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1,  2, -3, 
				 4, -5,  6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  1,  4,  9, 
				16, 25, 36 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardHoleInv)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 3);
	*result = {  -1,  -4,  -9, 
				-16, -25, -36 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix * -1));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix * -1));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = {  2.25,  6.25, 12.25, 
				20.25, 30.25, 42.25 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2.25,   6.25, 12.25,
				20.25, 30.25, 42.25 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalMixed)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 2.25,   6.25, 12.25,
				20.25, 30.25, 42.25 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalInv)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { -2.25,   -6.25, -12.25,
				-20.25, -30.25, -42.25 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix * -1));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix * -1));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardDecimalZero)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5 };

	Matrix *result = new Matrix(2, 3);
	*result = { 0, 0, 0, 
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.hadamard(*matrix, *matrix * 0));
	EXPECT_TRUE(*result == SMO.hadamard(*matrix, *matrix * 0));
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 4);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRow1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 3);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRow2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 3);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRowCol1)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(3, 4);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix, *result), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsHadamard, hadamardExceptionDiffRowCol2)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(1, 2);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.hadamard(*matrix, *result), std::exception);
}