#pragma once

#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineRegressionRegressionPartConstruct, constructEmpty)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part;

	EXPECT_TRUE(part.print() == "");
	EXPECT_TRUE(part.calculateValue(*vector) == 1);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeOneEmpty)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(1, "");

	EXPECT_TRUE(part.print() == "");
	EXPECT_TRUE(part.calculateValue(*vector) == 1);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeTwoEmpty)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(2, "");

	EXPECT_TRUE(part.print() == "");
	EXPECT_TRUE(part.calculateValue(*vector) == 1);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeThreeEmpty)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(3, "");

	EXPECT_TRUE(part.print() == "");
	EXPECT_TRUE(part.calculateValue(*vector) == 1);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeFourEmpty)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(4, "");

	EXPECT_TRUE(part.print() == "");
	EXPECT_TRUE(part.calculateValue(*vector) == 1);
}

TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeOne)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(1, "1");

	EXPECT_NEAR(part.calculateValue(*vector), 1, 0.00001);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeTwo)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(2, "10");

	EXPECT_NEAR(part.calculateValue(*vector), 0.84147, 0.00001);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeThree)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(3, "010");

	EXPECT_NEAR(part.calculateValue(*vector), 7.389056, 0.00001);
}


TEST(VectorEngineRegressionRegressionPartConstruct, constructTypeFour)
{
	Matrix *vector = new Matrix(5, 1);
	*vector = { 1, 2, 3, 4, 5 };

	RegressionPart part(4, "011");

	EXPECT_NEAR(part.calculateValue(*vector), 2.58496, 0.00001);
}