#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantHolePositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantHoleNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1, -2, -3, 
				-4, -5, -6, 
				-7, -8, -1 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantHoleMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1,  2, -3, 
				 4, -5,  6, 
				-7,  8, -1 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantHoleZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0, 
				0, 0, 0, 
				0, 0, 0 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantDecimalPositive)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1.5, 2.5, 3.5, 
				4.5, 5.5, 6.5, 
				7.5, 8.5, 1.5 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantDecimalNegative)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-4.5, -5.5, -6.5,
				-7.5, -8.5, -1.5 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, additionDecimalMixed)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { -1.5,  2.5, -3.5,
				 4.5, -5.5,  6.5,
				-7.5,  8.5, -1.5 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, additionDecimalZero)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0,   0,   0, 
				4.5, 5.5, 6.5, 
				7.5, 8.5, 1.5 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, additionExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(2, 3);
	BasicMatrixOperations BMO;
	EXPECT_THROW(BMO.determinant(*matrix), std::exception);
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, determinantExceptionNotSquare1)
{
	Matrix *matrix = new Matrix(3, 2);
	BasicMatrixOperations BMO;
	EXPECT_THROW(BMO.determinant(*matrix), std::exception);
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, DetermineSize1x1)
{
	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 1);

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, DetermineSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2, 
				3, 1 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, DetermineSize3x3)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3, 
				4, 5, 6, 
				7, 8, 1 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, DetermineSize4x4)
{
	Matrix *matrix = new Matrix(4, 4);
	*matrix = { 1, 2, 3, 4, 
				5, 6, 7, 8, 
				9, 1, 2, 3, 
				4, 5, 6, 1 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, DetermineSize5x5)
{
	Matrix *matrix = new Matrix(5, 5);
	*matrix = { 1,  2, 3,  4,  5, 
				6, -2, 3,  1,  1, 
				2,  3, 4, -5,  6, 
				7,  2, 1,  1,  2,
				3,  4, 5,  6, -7 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(BMO.determinant(*matrix));
	EXPECT_EQ(SMO.determinant(*matrix), BMO.determinant(*matrix));
}

TEST(VectorEngineBasicMatrixOperationsDeterminant, DetermineSpecialCase)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0 ,0, 0 };

	BasicMatrixOperations BMO;
	SimpleMatrixOperations SMO;
	EXPECT_THROW(BMO.determinant(*matrix), std::exception);
}