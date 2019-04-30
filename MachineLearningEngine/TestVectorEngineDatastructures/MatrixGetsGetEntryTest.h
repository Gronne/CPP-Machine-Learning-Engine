#pragma once
#include "VectorEngineHeaders.h"

TEST(MatrixGetsGetEntry, setGetEntryNoException)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setGetEntryPositiveValueHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(0, 0, 5));
	EXPECT_EQ(5, matrix->getEntry(0, 0));

	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(0, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 0));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 2));
}

TEST(MatrixGetsGetEntry, setGetEntryPositiveValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(0, 0, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(0, 0));

	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(0, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 0));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 2));
}

TEST(MatrixGetsGetEntry, setGetEntryPositiveValueDiffHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(0, 0, -5));
	EXPECT_EQ(-5, matrix->getEntry(0, 0));

	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_EQ(-5, matrix->getEntry(0, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 0));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 2));
}

TEST(MatrixGetsGetEntry, setGetEntryPositiveValueDiffDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(0, 0, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(0, 0));

	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(0, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 0));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 2));
}


TEST(MatrixGetsGetEntry, setGetEntryChangeValueDiffToSameValueHole)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setGetEntryChangeValueDiffToSameValueDecimal)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setGetEntryChangeValueDiffFromDecimalToHole)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2));
	EXPECT_EQ(2, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2));
	EXPECT_EQ(-2, matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setGetEntryChangeValueDiffFromDecimalToDecimal)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2.5));
	EXPECT_EQ(2.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 9.5));
	EXPECT_EQ(9.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2.5));
	EXPECT_EQ(-2.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -9.5));
	EXPECT_EQ(-9.5, matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setGetEntryChangeValueDiffFromHoleToHole)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2));
	EXPECT_EQ(2, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 9));
	EXPECT_EQ(9, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2));
	EXPECT_EQ(-2, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -9));
	EXPECT_EQ(-9, matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setGetEntryChangeValueDiffFromHoleToDecimal)
{
	Matrix *matrix = new Matrix(2, 3);

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, 2.5));
	EXPECT_EQ(2.5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_EQ(-5, matrix->getEntry(1, 1));

	EXPECT_NO_THROW(matrix->setEntry(1, 1, -2.5));
	EXPECT_EQ(-2.5, matrix->getEntry(1, 1));
}

TEST(MatrixGetsGetEntry, setEntryExceptions)
{
	Matrix *matrix = new Matrix(2, 3);

	//To Small Row
	EXPECT_THROW(matrix->getEntry(-1, 1), std::exception);
	//To Small Row
	EXPECT_THROW(matrix->getEntry(-2, 1), std::exception);
	//To Large Row
	EXPECT_THROW(matrix->getEntry(2, 1), std::exception);
	//To Large Row
	EXPECT_THROW(matrix->getEntry(3, 1), std::exception);


	//To Small Col
	EXPECT_THROW(matrix->getEntry(1, -1), std::exception);
	//To Small Col
	EXPECT_THROW(matrix->getEntry(1, -2), std::exception);
	//To Large Col
	EXPECT_THROW(matrix->getEntry(1, 3), std::exception);
	//To Large Col
	EXPECT_THROW(matrix->getEntry(1, 4), std::exception);


	//To Small
	EXPECT_THROW(matrix->getEntry(2, 3), std::exception);
	//To Small 
	EXPECT_THROW(matrix->getEntry(3, 4), std::exception);


	//To Large 
	EXPECT_THROW(matrix->getEntry(-1, -1), std::exception);
	//To Large 
	EXPECT_THROW(matrix->getEntry(-2, -2), std::exception);

	//Mixed 
	EXPECT_THROW(matrix->getEntry(-1, 3), std::exception);
	//Mixed
	EXPECT_THROW(matrix->getEntry(3, -1), std::exception);
}
