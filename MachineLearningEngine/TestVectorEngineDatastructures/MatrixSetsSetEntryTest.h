#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixSetsSetEntry, setEntryNoExceptionHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 5,	matrix->getEntry(0, 2),
				5,						5,	5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryNoExceptionDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), 5.5,	matrix->getEntry(0, 2),
				5.5,					5.5,	5.5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5.5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryNoExceptionHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -5,	matrix->getEntry(0, 2),
				-5,						-5,	-5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryNoExceptionDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix(2, 3);
	*result = { matrix->getEntry(0, 0), -5.5,	matrix->getEntry(0, 2),
				-5.5,					-5.5,	-5.5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5.5));
	EXPECT_TRUE(*result == *matrix);
}


TEST(MatrixSetsSetEntry, setEntryNoExceptionTransposedHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();

	Matrix *result = new Matrix(3, 2);
	*result = { matrix->getEntry(0, 0), 5,
				5,						5,
				matrix->getEntry(2, 0),	5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, 5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryNoExceptionTransposedDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();

	Matrix *result = new Matrix(3, 2);
	*result = { matrix->getEntry(0, 0), 5.5,
				5.5,					5.5,
				matrix->getEntry(2, 0),	5.5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, 5.5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryNoExceptionTransposedHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();

	Matrix *result = new Matrix(3, 2);
	*result = { matrix->getEntry(0, 0), -5,
				-5,						-5,
				matrix->getEntry(2, 0),	-5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, -5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryNoExceptionTransposedDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();

	Matrix *result = new Matrix(3, 2);
	*result = { matrix->getEntry(0, 0), -5.5,
				-5.5,					-5.5,
				matrix->getEntry(2, 0),	-5.5 };

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, -5.5));
	EXPECT_TRUE(*result == *matrix);
}

TEST(MatrixSetsSetEntry, setEntryExceptionRowPostive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(2, 1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionRowNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, 1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(1, 3, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(1, -1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionRowAndColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(2, 3, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionRowAndColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, -1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionRowAndColumnBoth1)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, 3, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionRowAndColumnBoth2)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(3, -1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedRowPostive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(3, 1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedRowNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, 1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(1, 3, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(1, -1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedRowAndColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(2, 3, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedRowAndColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, -1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedRowAndColumnBoth1)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, 3, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptionTransposedRowAndColumnBoth2)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(3, -1, 5), std::exception);
}

TEST(MatrixSetsSetEntry, setEntryExceptions)
{
	Matrix *matrix = new Matrix(2, 3);

	//To Small Row
	EXPECT_THROW(matrix->setEntry(-1, 1, 0), std::exception);
	//To Small Row
	EXPECT_THROW(matrix->setEntry(-2, 1, 0), std::exception);
	//To Large Row
	EXPECT_THROW(matrix->setEntry(2, 1, 0), std::exception);
	//To Large Row
	EXPECT_THROW(matrix->setEntry(3, 1, 0), std::exception);


	//To Small Col
	EXPECT_THROW(matrix->setEntry(1, -1, 0), std::exception);
	//To Small Col
	EXPECT_THROW(matrix->setEntry(1, -2, 0), std::exception);
	//To Large Col
	EXPECT_THROW(matrix->setEntry(1, 3, 0), std::exception);
	//To Large Col
	EXPECT_THROW(matrix->setEntry(1, 4, 0), std::exception);


	//To Small
	EXPECT_THROW(matrix->setEntry(2, 3, 0), std::exception);
	//To Small 
	EXPECT_THROW(matrix->setEntry(3, 4, 0), std::exception);


	//To Large 
	EXPECT_THROW(matrix->setEntry(-1, -1, 0), std::exception);
	//To Large 
	EXPECT_THROW(matrix->setEntry(-2, -2, 0), std::exception);

	//Mixed 
	EXPECT_THROW(matrix->setEntry(-1, 3, 0), std::exception);
	//Mixed
	EXPECT_THROW(matrix->setEntry(3, -1, 0), std::exception);
}