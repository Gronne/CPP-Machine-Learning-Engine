#pragma once
#include "VectorEngineDatastructureHeader.h"

//------------------Type 1---------------------

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentTypesRow)
{
	Matrix *matrix = new Matrix(1, 3);

	*matrix = { 1, 2, 3 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { -1, -2, -3 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { 1.5, 2.5, 3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.555216, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { -1.5, -2.5, -3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.555216, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { 1.5, 2, 3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.301162, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { -1.5, 2, -3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.301162, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentTypesColumn)
{
	Matrix *matrix = new Matrix(3, 1);

	*matrix = { 1, 2, 3 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { -1, -2, -3 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { 1.5, 2.5, 3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.555216, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { -1.5, -2.5, -3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.555216, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { 1.5, 2, 3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.301162, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	*matrix = { -1.5, 2, -3.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(4.301162, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentLengthsRow)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(1, 1);
	matrix->setEntry(0, 0, 5);
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(1, 2);
	matrix->setEntry(0, 0, 3);
	matrix->setEntry(0, 1, 4);
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(1, 3);
	*matrix = { 1, 2, 3 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(1, 4);
	*matrix = { 1, 2, 3, 4 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(5.477225, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(1, 5);
	*matrix = { 1, 2, 3, 4, 5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(7.416198, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentLengthsColumn)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(1, 1);
	matrix->setEntry(0, 0, 5);
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(2, 1);
	matrix->setEntry(0, 0, 3);
	matrix->setEntry(1, 0, 4);
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(3, 1);
	*matrix = { 1, 2, 3 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(4, 1);
	*matrix = { 1, 2, 3, 4 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(5.477225, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);

	matrix->setMatrixSize(5, 1);
	*matrix = { 1, 2, 3, 4, 5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(7.416198, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVSpecialCase)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(1, 3);
	*matrix = { 0, 0, 0 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix));
	EXPECT_NEAR(0, SimpleMatrixOperations::lengthOfVector(*matrix), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVExceptions)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(2, 2);
	EXPECT_THROW(SimpleMatrixOperations::lengthOfVector(*matrix), std::exception);
}

//------------------Type 2---------------------
TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentTypesRowType2)
{
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9};
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(8.774964, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(8.774964, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(9.630680, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(9.630680, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(9.069178, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	*matrix = { -1.5, -2,   3.5,
				-4,   -5.5, 6,
				-7.5, -8,   9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(9.069178, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentTypesColumnType2)
{
	Matrix *matrix = new Matrix(3, 3);

	*matrix = { 1, 2, 3,
				4, 5, 6,
				7, 8, 9 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(9.643650, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	*matrix = { -1, -2, -3,
				-4, -5, -6,
				-7, -8, -9 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(9.643650, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	*matrix = { 1.5, 2.5, 3.5,
				4.5, 5.5, 6.5,
				7.5, 8.5, 9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(10.428326, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(10.428326, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	*matrix = { 1.5, 2,   3.5,
				4,   5.5, 6,
				7.5, 8,   9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(9.912113, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	*matrix = { -1.5, -2,    3.5,
				-4,   -5.5,  6,
				7.5,   8,   -9.5 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(9.912113, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentLengthsRowType2)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(2, 1);
	matrix->setEntry(0, 0, 5);
	matrix->setEntry(1, 0, 5);
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	matrix->setMatrixSize(2, 2);
	*matrix = { 3, 4, 
				3, 4 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	matrix->setMatrixSize(2, 3);
	*matrix = { 1, 2, 3,
				1, 2, 3};
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	matrix->setMatrixSize(2, 4);
	*matrix = { 1, 2, 3, 4,
				1, 2, 3, 4};
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(5.477225, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	matrix->setMatrixSize(2, 5);
	*matrix = { 1, 2, 3, 4, 5,
				1, 2, 3, 4, 5};
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(7.416198, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVDifferentLengthsColumnType2)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(1, 2);
	matrix->setEntry(0, 0, 5);
	matrix->setEntry(0, 1, 5);
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	matrix->setMatrixSize(2, 2);
	*matrix = { 3, 3, 
				4, 4 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(5, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	matrix->setMatrixSize(3, 2);
	*matrix = { 1, 1,
				2, 2, 
				3, 3};
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(3.741657, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	matrix->setMatrixSize(4, 2);
	*matrix = { 1, 1,
				2, 2,
				3, 3,
				4, 4 };
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(5.477225, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);

	matrix->setMatrixSize(5, 2);
	*matrix = { 1, 1,
				2, 2,
				3, 3,
				4, 4,
				5, 5};
	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(7.416198, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVSpecialCaseType2)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0};

	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1));
	EXPECT_NEAR(0, SimpleMatrixOperations::lengthOfVector(*matrix, 1, 1), 0.00001);

	EXPECT_NO_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1));
	EXPECT_NEAR(0, SimpleMatrixOperations::lengthOfVector(*matrix, 0, 1), 0.00001);
}

TEST(VectorEngineSimpleMatrixOperationsLengthOfVector, LOVExceptionsType2)
{
	Matrix *matrix = new Matrix();

	matrix->setMatrixSize(2, 2);

	EXPECT_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, -1), std::exception);
	EXPECT_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 1, 2), std::exception);

	EXPECT_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, -1), std::exception);
	EXPECT_THROW(SimpleMatrixOperations::lengthOfVector(*matrix, 0, 2), std::exception);
}