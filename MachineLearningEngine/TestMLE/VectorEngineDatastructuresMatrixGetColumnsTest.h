#pragma once
#include "VectorEngineDatastructureHeader.h"

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsExceptionOneMinus)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { -1, 1 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsExceptionTwoMinus)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { -1, -2 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 0, 1 };

	*matrix2 = matrix1->getColumns(colVector);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualExceptionToLargeIndexOne)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 3, 1 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualExceptionToLargeIndexTwo)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 3, 4 };

	EXPECT_THROW(matrix1->getColumns(colVector), std::exception);
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsEqualNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	std::vector<int> colVector = { 0, 1 };

	*matrix2 = matrix1->getColumns(colVector);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsSetNoExceptionEmptyGet)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	std::vector<int> colVector = { 0, 1 };

	matrix2->setMatrix(&matrix1->getColumns(colVector));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrixGetColumns, getColumnsSetNoException)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> colVector = { 0, 1 };

	matrix2->setMatrix(&matrix1->getColumns(colVector));
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
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
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix();

	Matrix *vec = new Matrix(1, 2);
	vec->setEntry(0, 0, 0);
	vec->setEntry(0, 1, 1);

	*matrix2 = matrix1->getColumns(*vec);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));


	vec->setMatrixSize(2, 1);
	vec->setEntry(0, 0, 0);
	vec->setEntry(1, 0, 1);

	*matrix2 = matrix1->getColumns(*vec);
	EXPECT_EQ(matrix1->getEntry(0, 0), matrix2->getEntry(0, 0));
	EXPECT_EQ(matrix1->getEntry(0, 1), matrix2->getEntry(0, 1));
	EXPECT_EQ(matrix1->getEntry(1, 0), matrix2->getEntry(1, 0));
	EXPECT_EQ(matrix1->getEntry(1, 1), matrix2->getEntry(1, 1));
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


