#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5.5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5.5));
}


TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionTransposedHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, 5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionTransposedDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, 5.5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionTransposedHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, -5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryNoExceptionTransposedDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, -5.5));
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionRowPostive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(2, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionRowNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionRowAndColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(2, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionRowAndColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionRowAndColumnBoth1)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionRowAndColumnBoth2)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(3, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedRowPostive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(3, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedRowNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedRowAndColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(2, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedRowAndColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedRowAndColumnBoth1)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptionTransposedRowAndColumnBoth2)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(3, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrixSetEntry, setEntryExceptions)
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