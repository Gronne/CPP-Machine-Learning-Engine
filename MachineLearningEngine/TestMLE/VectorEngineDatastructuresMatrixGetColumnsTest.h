#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsExceptionOneMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<int> colVector = { -1, 1 };

	EXPECT_THROW(matrix->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsExceptionTwoMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<int> colVector = { -1, -2 };

	EXPECT_THROW(matrix->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix(2, 2);
	*result = { 1, 2, 
				4, 5 };

	std::vector<int> colVector = { 0, 1 };
	EXPECT_NO_THROW(matrix->getColumns(colVector));
	EXPECT_TRUE(*result == matrix->getColumns(colVector));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualExceptionToLargeIndexOne)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<int> colVector = { 3, 1 };

	EXPECT_THROW(matrix->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix = new Matrix(2, 3);
	std::vector<int> colVector = { 3, 4 };

	EXPECT_THROW(matrix->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	std::vector<int> colVector = { 0, 1 };

	EXPECT_NO_THROW(*result = matrix->getColumns(colVector));
	EXPECT_TRUE(*result == matrix->getColumns(colVector));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsSetNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	std::vector<int> colVector = { 0, 1 };

	EXPECT_NO_THROW(result->setMatrix(&matrix->getColumns(colVector)));
	EXPECT_TRUE(*result == matrix->getColumns(colVector));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsSetNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6 };

	Matrix *result = new Matrix();
	std::vector<int> colVector = { 0, 1 };

	EXPECT_NO_THROW(result->setMatrix(&matrix->getColumns(colVector)));
	EXPECT_TRUE(*result == matrix->getColumns(colVector));
}

//---------------Matrix----------------


TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrixExceptionOneMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, -1);
	vec->setEntry(0, 1, 1);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, -1);
	vec->setEntry(1, 0, 1);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrixExceptionTwoMinus)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, -1);
	vec->setEntry(0, 1, -2);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, -1);
	vec->setEntry(1, 0, -2);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrixEqualNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);
	EXPECT_NO_THROW(*vec = matrix->getColumns(*vec));
	EXPECT_TRUE(vec->getColumn(0) == matrix->getColumn(0));
	EXPECT_TRUE(vec->getColumn(1) == matrix->getColumn(1));

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);
	EXPECT_NO_THROW(*vec = matrix->getColumns(*vec));
	EXPECT_TRUE(vec->getColumn(0) == matrix->getColumn(0));
	EXPECT_TRUE(vec->getColumn(1) == matrix->getColumn(1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrixEqualExceptionToLargeIndexOne)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 3);
	vec->setEntry(0, 1, 1);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 3);
	vec->setEntry(1, 0, 1);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrixEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				4, 5, 6 };

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 3);
	vec->setEntry(0, 1, 4);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);

	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 3);
	vec->setEntry(1, 0, 4);
	EXPECT_THROW(matrix->getColumns(*vec), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrixEqualNoExceptionEmptyGet)
{
	Matrix *matrix = new Matrix(2, 3);
	Matrix *result = new Matrix();

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);

	EXPECT_NO_THROW(*result = matrix->getColumns(*vec));
	EXPECT_EQ(matrix->getEntry(0, 0), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), result->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(1, 0), result->getEntry(1, 0));
	EXPECT_EQ(matrix->getEntry(1, 1), result->getEntry(1, 1));


	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);

	EXPECT_NO_THROW(*result = matrix->getColumns(*vec));
	EXPECT_EQ(matrix->getEntry(0, 0), result->getEntry(0, 0));
	EXPECT_EQ(matrix->getEntry(0, 1), result->getEntry(0, 1));
	EXPECT_EQ(matrix->getEntry(1, 0), result->getEntry(1, 0));
	EXPECT_EQ(matrix->getEntry(1, 1), result->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsMatrix5x5M3P)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1, 2, 3, 4, 5,
				5, 1, 5, 1, 5,
				2, 4, 6, 7, 2,
				6, 5, 4, 1, 6,
				4, 4, 4, 1, 7 };

	Matrix *vec = new Matrix(1, 3);
	*vec = { 0, 2, 4 };

	Matrix *buf = new Matrix(5, 3);
	*buf = { 1, 3, 5,
			 5, 5, 5,
			 2, 6, 2,
			 6, 4, 6,
			 4, 4, 7 };

	EXPECT_NO_THROW(matrix->getColumns(*vec));
	EXPECT_TRUE(*buf == matrix->getColumns(*vec));


	vec->setMatrixSize(3, 1);
	*vec = { 0, 2, 4 };
	EXPECT_NO_THROW(matrix->getColumns(*vec));
	EXPECT_TRUE(*buf == matrix->getColumns(*vec));
}


