#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleHolePositiveRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleHolePositiveColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1, 3,
				2, 2, 
				3, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleHoleNegativeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, -2, -3,
				-3, -2, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleHoleNegativeColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { -1, -3,
				-2, -2,
				-3, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleHoleMixedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1, 2, -3,
				3, -2, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(2.3664, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleHoleMixedColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { -1, 3,
				2, -2,
				-3, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(2.3664, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleDecimalPositiveRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2.5, 3.5,
				3.5, 2.5, 1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleDecimalPositiveColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1.5, 3.5,
				2.5, 2.5,
				3.5, 1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleDecimalNegativeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2.5, -3.5,
				-3.5, -2.5, -1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleDecimalNegativeColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { -1.5, -3.5,
				-2.5, -2.5,
				-3.5, -1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleDecimalMixedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, 2.5, -3.5,
				3.5, -2.5, 1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(2.5102, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleDecimalMixedColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { -1.5,  3.5,
				 2.5, -2.5,
				-3.5,  1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(2.5102, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleMixedPositiveRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1.5, 2,   3.5,
				3,   2.5, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleMixedPositiveColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { 1.5, 3,
				2,   2.5,
				3.5, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleMixedNegativeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, -2,   -3.5,
				-3,   -2.5, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleMixedNegativeColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { -1.5, -3,
				-2,   -2.5,
				-3.5, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleMixedMixedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { -1.5, 2,   3.5,
				-3,   -2.5, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(1.3969, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleMixedMixedColumn)
{
	Matrix *matrix = new Matrix(3, 2);
	*matrix = { -1.5, -3,
				2,    -2.5,
				3.5,   1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(1.3969, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

//------Different sizes------
TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleSize2x2)
{
	Matrix *matrix = new Matrix(2, 2);
	*matrix = { 1, 2,
				3, 2, };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.5191, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleSize2x3)
{
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0.7752, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleSize2x4)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				3, 2, 1, 0 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(1.0611, GetMatrix::innerProductSpace(*matrix), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleSize2x5)
{
	Matrix *matrix = new Matrix(2, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 2, 1, 0, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(1.3958, GetMatrix::innerProductSpace(*matrix), 0.0001);
}


//--------Exceptions--------
TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleExceptionVector_1)
{
	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1, 2, 3, 4,
				3, 2, 1, 0,
				4, 2, 4, 5};

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleExceptionVector_2)
{
	Matrix *matrix = new Matrix(4, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1,
				4, 2, 4,
				5, 1, 5 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleExceptionVector_3)
{
	Matrix *matrix = new Matrix();
	matrix->setEntry(0, 0, 1);

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleExceptionVector_4)
{
	Matrix *matrix = new Matrix(1, 3);
	*matrix = { 1, 2, 3 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}


//------Special cases-------

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleZero_1)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 0 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleZero_2)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 0, 0, 0, 0,
				0, 0, 0, 1 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleZero_3)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSSingleSame)
{
	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				1, 2, 3, 4 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix));
	EXPECT_NEAR(0, GetMatrix::innerProductSpace(*matrix), 0.0001);
}


//-----------------------------------------
//------------second version---------------
//-----------------------------------------

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleHolePositiveRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { 1, 2, 3 };
	*matrix2 = { 3, 2, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleHolePositiveColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { 1, 2, 3 };
	*matrix2 = { 3, 2, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleHoleNegativeRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1, -2, -3 };
	*matrix2 = { -3, -2, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleHoleNegativeColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { -1, -2, -3 };
	*matrix2 = { -3, -2, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.775193, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleHoleMixedRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1,  2, -3 };
	*matrix2 = {  3, -2,  1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(2.3664, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleHoleMixedColumn)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1,  2, -3 };
	*matrix2 = { 3, -2,  1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(2.3664, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleDecimalPositiveRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { 1.5, 2.5, 3.5 };
	*matrix2 = { 3.5, 2.5, 1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleDecimalPositiveColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { 1.5, 2.5, 3.5 };
	*matrix2 = { 3.5, 2.5, 1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleDecimalNegativeRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1.5, -2.5, -3.5 };
	*matrix2 = { -3.5, -2.5, -1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleDecimalNegativeColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { -1.5, -2.5, -3.5 };
	*matrix2 = { -3.5, -2.5, -1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.6314, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleDecimalMixedRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1.5,  2.5, -3.5 };
	*matrix2 = {  3.5, -2.5,  1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(2.5102, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleDecimalMixedColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { -1.5,  2.5, -3.5 };
	*matrix2 = { 3.5, -2.5,  1.5 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(2.5102, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleMixedPositiveRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { 1.5, 2  , 3.5 };
	*matrix2 = { 3  , 2.5, 1   };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleMixedPositiveColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { 1.5, 2  , 3.5 };
	*matrix2 = { 3  , 2.5, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleMixedNegativeRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1.5, -2  , -3.5 };
	*matrix2 = { -3  , -2.5, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleMixedNegativeColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { -1.5, -2  , -3.5 };
	*matrix2 = { -3  , -2.5, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.7231, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleMixedMixedRow)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { -1.5,  2  , 3.5 };
	*matrix2 = { -3  , -2.5, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(1.3969, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleMixedMixedColumn)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { -1.5,  2  , 3.5 };
	*matrix2 = { -3  , -2.5, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(1.3969, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

//------Different sizes------
TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleSize2x2)
{
	Matrix *matrix1 = new Matrix(1, 2);
	Matrix *matrix2 = new Matrix(1, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix2->setEntry(0, 0, 3);
	matrix2->setEntry(0, 1, 2);

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.5191, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleSize2x3)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { 1, 2, 3 };
	*matrix2 = { 3, 2, 1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0.7752, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleSize2x4)
{
	Matrix *matrix1 = new Matrix(1, 4);
	Matrix *matrix2 = new Matrix(1, 4);
	*matrix1 = { 1, 2, 3, 4 };
	*matrix2 = { 3, 2, 1, 0 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(1.0611, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleSize2x5)
{
	Matrix *matrix1 = new Matrix(1, 5);
	Matrix *matrix2 = new Matrix(1, 5);
	*matrix1 = { 1, 2, 3, 4,  5 };
	*matrix2 = { 3, 2, 1, 0, -1 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(1.3958, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}


//--------Exceptions--------
TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleExceptionVector_1)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(1, 3);
	*matrix1 = { 1, 2, 3,
				 3, 2, 1 };

	*matrix2 = { 3, 2, 1 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleExceptionVector_2)
{
	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(2, 3);
	*matrix2 = { 1, 2, 3,
				 3, 2, 1 };

	*matrix1 = { 3, 2, 1 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleExceptionVector_3)
{
	Matrix *matrix1 = new Matrix(3, 2);
	Matrix *matrix2 = new Matrix(3, 1);
	*matrix1 = { 1, 2, 
				 3, 1,
				 2, 4};

	*matrix2 = { 3, 2, 1 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleExceptionVector_4)
{
	Matrix *matrix1 = new Matrix(3, 1);
	Matrix *matrix2 = new Matrix(3, 2);
	*matrix2 = { 1, 2,
				 3, 1,
				 2, 4 };

	*matrix1 = { 3, 2, 1 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}


//------Special cases-------

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleZero_1)
{
	Matrix *matrix1 = new Matrix(1, 4);
	Matrix *matrix2 = new Matrix(1, 4);
	*matrix1 = { 0, 0, 0, 0 };
	*matrix2 = { 0, 0, 0, 0 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleZero_2)
{
	Matrix *matrix1 = new Matrix(1, 4);
	Matrix *matrix2 = new Matrix(1, 4);
	*matrix1 = { 0, 0, 0, 1 };
	*matrix2 = { 0, 0, 0, 0 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleZero_3)
{
	Matrix *matrix1 = new Matrix(1, 4);
	Matrix *matrix2 = new Matrix(1, 4);
	*matrix1 = { 0, 0, 0, 0 };
	*matrix2 = { 0, 0, 0, 1 };

	EXPECT_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2), std::exception);
}

TEST(VectorEngineGetMatrixInnerProductSpace, IPSDoubleSame)
{
	Matrix *matrix1 = new Matrix(1, 4);
	Matrix *matrix2 = new Matrix(1, 4);
	*matrix1 = { 1, 2, 3, 4 };
	*matrix2 = { 1, 2, 3, 4 };

	EXPECT_NO_THROW(GetMatrix::innerProductSpace(*matrix1, *matrix2));
	EXPECT_NEAR(0, GetMatrix::innerProductSpace(*matrix1, *matrix2), 0.0001);
}