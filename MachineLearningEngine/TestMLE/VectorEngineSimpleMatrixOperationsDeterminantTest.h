#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHolePositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 1);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHoleNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);
	matrix1->setEntry(2, 0, -7);
	matrix1->setEntry(2, 1, -8);
	matrix1->setEntry(2, 2, -1);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(-24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHoleMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, -7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, -1);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(-24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantHoleZero)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 0);
	matrix1->setEntry(0, 1, 0);
	matrix1->setEntry(0, 2, 0);
	matrix1->setEntry(1, 0, 0);
	matrix1->setEntry(1, 1, 0);
	matrix1->setEntry(1, 2, 0);
	matrix1->setEntry(2, 0, 0);
	matrix1->setEntry(2, 1, 0);
	matrix1->setEntry(2, 2, 0);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(0, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantDecimalPositive)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);
	matrix1->setEntry(2, 0, 7.5);
	matrix1->setEntry(2, 1, 8.5);
	matrix1->setEntry(2, 2, 1.5);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantDecimalNegative)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);
	matrix1->setEntry(2, 0, -7.5);
	matrix1->setEntry(2, 1, -8.5);
	matrix1->setEntry(2, 2, -1.5);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(-24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, additionDecimalMixed)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);
	matrix1->setEntry(2, 0, -7.5);
	matrix1->setEntry(2, 1, 8.5);
	matrix1->setEntry(2, 2, -1.5);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(-24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, additionDecimalZero)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 0);
	matrix1->setEntry(0, 1, 0);
	matrix1->setEntry(0, 2, 0);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);
	matrix1->setEntry(2, 0, 7.5);
	matrix1->setEntry(2, 1, 8.5);
	matrix1->setEntry(2, 2, 1.5);


	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(0, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, additionExceptionNotSquare1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.determinant(*matrix1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantExceptionNotSquare1)
{
	Matrix *matrix1 = new Matrix(3, 2);
	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(2, 0, 4.5);
	matrix1->setEntry(2, 1, 1);

	SimpleMatrixOperations SMO;
	EXPECT_THROW(SMO.determinant(*matrix1), std::exception);
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize1x1)
{
	Matrix *matrix1 = new Matrix(1, 1);
	matrix1->setEntry(0, 0, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(1, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize2x2)
{
	Matrix *matrix1 = new Matrix(2, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(1, 0, 3);
	matrix1->setEntry(1, 1, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(-5, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize3x3)
{
	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(24, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize4x4)
{
	Matrix *matrix1 = new Matrix(4, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 2);
	matrix1->setEntry(2, 3, 3);
	matrix1->setEntry(3, 0, 4);
	matrix1->setEntry(3, 1, 5);
	matrix1->setEntry(3, 2, 6);
	matrix1->setEntry(3, 3, 1);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(216, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, DetermineSize5x5)
{
	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(0, 4, 5);
	matrix1->setEntry(1, 0, 6);
	matrix1->setEntry(1, 1, -2);
	matrix1->setEntry(1, 2, 3);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(1, 4, 1);
	matrix1->setEntry(2, 0, 2);
	matrix1->setEntry(2, 1, 3);
	matrix1->setEntry(2, 2, 4);
	matrix1->setEntry(2, 3, -5);
	matrix1->setEntry(2, 4, 6);
	matrix1->setEntry(3, 0, 7);
	matrix1->setEntry(3, 1, 2);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);
	matrix1->setEntry(3, 4, 2);
	matrix1->setEntry(4, 0, 3);
	matrix1->setEntry(4, 1, 4);
	matrix1->setEntry(4, 2, 5);
	matrix1->setEntry(4, 3, 6);
	matrix1->setEntry(4, 4, -7);

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix1));
	EXPECT_EQ(-16314, SMO.determinant(*matrix1));
}

TEST(VectorEngineSimpleMatrixOperationsDeterminant, determinantSpecialCase)
{
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 1,
				0, 0, 0,
				0, 0, 0 };

	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(SMO.determinant(*matrix));
	EXPECT_EQ(0, SMO.determinant(*matrix));
}