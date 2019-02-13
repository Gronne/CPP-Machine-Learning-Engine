#pragma once
#include "../MachineLearningEngine/Matrix.cpp"

TEST(VectorEngineDatastructurMatrix, constructionNoExceptionNoParameters)
{
	EXPECT_NO_THROW(new Matrix());
}

TEST(VectorEngineDatastructurMatrix, constructionNoNullPtrNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_NE(nullptr, matrix);
}

TEST(VectorEngineDatastructurMatrix, constructionNoExceptionParameters)
{
	EXPECT_NO_THROW(new Matrix(1, 1));
	EXPECT_NO_THROW(new Matrix(5, 1));
	EXPECT_NO_THROW(new Matrix(1, 5));
}

TEST(VectorEngineDatastructurMatrix, constructionNoNullPtrParameters)
{
	Matrix *matrix = new Matrix(1, 1);
	EXPECT_NE(nullptr, matrix);
}


TEST(VectorEngineDatastructurMatrix, constructionExceptionOnlyRows)
{
	EXPECT_THROW(new Matrix(1, 0), std::exception);
	EXPECT_THROW(new Matrix(5, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrix, constructionExceptionOnlyColumns)
{
	ASSERT_THROW(new Matrix(0, 1), std::exception);
	ASSERT_THROW(new Matrix(0, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, constructionExceptionMinusRowsNoColumn)
{
	ASSERT_THROW(new Matrix(-1), std::exception);
}

TEST(VectorEngineDatastructurMatrix, constructionExceptionMinusRows)
{
	ASSERT_THROW(new Matrix(-1, 0), std::exception);
	ASSERT_THROW(new Matrix(-5, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrix, constructionExceptionMinusColums)
{
	ASSERT_THROW(new Matrix(0, -1), std::exception);
	ASSERT_THROW(new Matrix(0, -5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, constructionExceptionMinusRowsAndColumns)
{
	ASSERT_THROW(new Matrix(-1, -1), std::exception);
	ASSERT_THROW(new Matrix(-5, -1), std::exception);
	ASSERT_THROW(new Matrix(-1, -5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, DeconstructDifferentRow)
{
	Matrix *matrix = new Matrix(4, 4);
	delete matrix;
	EXPECT_NE(4, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrix, DeconstructDifferentColumn)
{
	Matrix *matrix = new Matrix(4, 4);
	delete matrix;
	EXPECT_NE(4, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, GetRowsNoException)
{
	Matrix *matrix1 = new Matrix(1, 4);
	EXPECT_EQ(1, matrix1->getNumberOfRows());

	Matrix *matrix2 = new Matrix(5, 4);
	EXPECT_EQ(5, matrix2->getNumberOfRows());

	Matrix *matrix3 = new Matrix(8, 4);
	EXPECT_EQ(8, matrix3->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrix, GetRowsNoExceptionNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrix, GetColumnsNoException)
{
	Matrix *matrix1 = new Matrix(4, 1);
	EXPECT_EQ(1, matrix1->getNumberOfColumns());

	Matrix *matrix2 = new Matrix(4, 5);
	EXPECT_EQ(5, matrix2->getNumberOfColumns());

	Matrix *matrix3 = new Matrix(4, 8);
	EXPECT_EQ(8, matrix3->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, GetColumnsNoExceptionNoParameters)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfColumns());
}


TEST(VectorEngineDatastructurMatrix, resizeMatrixRowNoException)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfRows());
	matrix->setMatrixSize(1, 1);
	EXPECT_EQ(1, matrix->getNumberOfRows());
	matrix->setMatrixSize(5, 1);
	EXPECT_EQ(5, matrix->getNumberOfRows());
	matrix->setMatrixSize(8, 1);
	EXPECT_EQ(8, matrix->getNumberOfRows());
}

TEST(VectorEngineDatastructurMatrix, resizeMatrixColumnNoException)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 1);
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 5);
	EXPECT_EQ(5, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 8);
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, resizeMatrixRowAndColumnNoException)
{
	Matrix *matrix = new Matrix();
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(1, 1);
	EXPECT_EQ(1, matrix->getNumberOfRows());
	EXPECT_EQ(1, matrix->getNumberOfColumns());
	matrix->setMatrixSize(5, 5);
	EXPECT_EQ(5, matrix->getNumberOfRows());
	EXPECT_EQ(5, matrix->getNumberOfColumns());
	matrix->setMatrixSize(8, 8);
	EXPECT_EQ(8, matrix->getNumberOfRows());
	EXPECT_EQ(8, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, resizeMatrixException)
{
	Matrix *matrix = new Matrix();
	EXPECT_THROW(matrix->setMatrixSize(1, 0), std::exception);


	Matrix *matrix2 = new Matrix(1, 1);
	EXPECT_THROW(matrix2->setMatrixSize(1, 0), std::exception);
}

TEST(VectorEngineDatastructurMatrix, transposeGetNormalRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposedRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposedColumns)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposedRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(2, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeGetTransposed2RowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->transpose();
	EXPECT_EQ(2, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeSetTransposeRow)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(4, 3);
	EXPECT_EQ(4, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeSetTransposeColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(3, 4);
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(4, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, transposeSetTransposeRowAndColumn)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	matrix->setMatrixSize(3, 5);
	EXPECT_EQ(3, matrix->getNumberOfRows());
	EXPECT_EQ(5, matrix->getNumberOfColumns());
	matrix->setMatrixSize(5, 3);
	EXPECT_EQ(5, matrix->getNumberOfRows());
	EXPECT_EQ(3, matrix->getNumberOfColumns());
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5));
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, 5.5));
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5));
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 2, -5.5));
}


TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionTransposedHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, 5));
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionTransposedDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, 5.5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, 5.5));
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionTransposedHoleNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, -5));
}

TEST(VectorEngineDatastructurMatrix, setEntryNoExceptionTransposedDecimalNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_NO_THROW(matrix->setEntry(1, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(0, 1, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(1, 0, -5.5));
	EXPECT_NO_THROW(matrix->setEntry(2, 1, -5.5));
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionRowPostive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(2, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionRowNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionRowAndColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(2, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionRowAndColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionRowAndColumnBoth1)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(-1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionRowAndColumnBoth2)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_THROW(matrix->setEntry(3, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedRowPostive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(3, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedRowNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, 1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedRowAndColumnPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(2, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedRowAndColumnNegative)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, -1, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedRowAndColumnBoth1)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(-1, 3, 5), std::exception);
}

TEST(VectorEngineDatastructurMatrix, setEntryExceptionTransposedRowAndColumnBoth2)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->transpose();
	EXPECT_THROW(matrix->setEntry(3, -1, 5), std::exception);
}

//----------------------------------

TEST(VectorEngineDatastructurMatrix, setGetEntryNoException)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(1, 1, 5);
	EXPECT_NO_THROW(matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrix, setGetEntryPositiveValueHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 5);
	EXPECT_EQ(5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, 5);
	EXPECT_EQ(5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, 5);
	EXPECT_EQ(5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, 5);
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, 5);
	EXPECT_EQ(5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setGetEntryPositiveValueDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, 5.5);
	EXPECT_EQ(5.5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setGetEntryPositiveValueDiffHolePositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, -5);
	EXPECT_EQ(-5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, -5);
	EXPECT_EQ(-5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, -5);
	EXPECT_EQ(-5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, -5);
	EXPECT_EQ(-5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, -5);
	EXPECT_EQ(-5, matrix->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setGetEntryPositiveValueDiffDecimalPositive)
{
	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(0, 0));
	matrix->setEntry(0, 1, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(0, 1));
	matrix->setEntry(1, 0, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(1, 0));
	matrix->setEntry(1, 1, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(1, 1));
	matrix->setEntry(1, 2, -5.5);
	EXPECT_EQ(-5.5, matrix->getEntry(1, 2));
}


TEST(VectorEngineDatastructurMatrix, setGetEntryChangeValueDiffToSameValueHole)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5));
	EXPECT_EQ(5, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrix, setGetEntryChangeValueDiffToSameValueDecimal)
{
	Matrix *matrix = new Matrix(2, 3);
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
	EXPECT_NO_THROW(matrix->setEntry(1, 1, 5.5));
	EXPECT_EQ(5.5, matrix->getEntry(1, 1));
}

TEST(VectorEngineDatastructurMatrix, setGetEntryChangeValueDiffFromDecimalToHole)
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

TEST(VectorEngineDatastructurMatrix, setGetEntryChangeValueDiffFromDecimalToDecimal)
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

TEST(VectorEngineDatastructurMatrix, setGetEntryChangeValueDiffFromHoleToHole)
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

TEST(VectorEngineDatastructurMatrix, setGetEntryChangeValueDiffFromHoleToDecimal)
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

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizePositiveHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizePositiveDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.1);
	matrix1->setEntry(0, 1, 2.2);
	matrix1->setEntry(0, 2, 3.3);
	matrix1->setEntry(1, 0, 4.4);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeNegativeHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeNegativeDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, -2.2);
	matrix1->setEntry(0, 2, -3.3);
	matrix1->setEntry(1, 0, -4.4);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6.6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeMixedHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeMixedDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, 2.2);
	matrix1->setEntry(0, 2, -3.3);
	matrix1->setEntry(1, 0, 4.4);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeMixedPositive)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3.3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeMixedNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3.3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSameSizeMixedMixed)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3.3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargePositiveHole)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 10);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6, matrix2->getEntry(1, 1));
	EXPECT_EQ(7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 3));
	EXPECT_EQ(9, matrix2->getEntry(2, 0));
	EXPECT_EQ(10, matrix2->getEntry(2, 1));
	EXPECT_EQ(11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargePositiveDecimal)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(0, 3, 4.5);
	matrix1->setEntry(1, 0, 5.5);
	matrix1->setEntry(1, 1, 6.5);
	matrix1->setEntry(1, 2, 7.5);
	matrix1->setEntry(1, 3, 8.5);
	matrix1->setEntry(2, 0, 9.5);
	matrix1->setEntry(2, 1, 10.5);
	matrix1->setEntry(2, 2, 11.5);
	matrix1->setEntry(2, 3, 12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(7.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11.5, matrix2->getEntry(2, 2));
	EXPECT_EQ(12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeNegativeHole)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(0, 3, -4);
	matrix1->setEntry(1, 0, -5);
	matrix1->setEntry(1, 1, -6);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, -8);
	matrix1->setEntry(2, 0, -9);
	matrix1->setEntry(2, 1, -10);
	matrix1->setEntry(2, 2, -11);
	matrix1->setEntry(2, 3, -12);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeNegativeDecimal)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, -5.5);
	matrix1->setEntry(1, 1, -6.5);
	matrix1->setEntry(1, 2, -7.5);
	matrix1->setEntry(1, 3, -8.5);
	matrix1->setEntry(2, 0, -9.5);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, -11.5);
	matrix1->setEntry(2, 3, -12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11.5, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeMixedHole)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, -5);
	matrix1->setEntry(1, 1, 6);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, 8);
	matrix1->setEntry(2, 0, -9);
	matrix1->setEntry(2, 1, 10);
	matrix1->setEntry(2, 2, -11);
	matrix1->setEntry(2, 3, 12);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9, matrix2->getEntry(2, 0));
	EXPECT_EQ(10, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeMixedDecimal)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, 5.5);
	matrix1->setEntry(1, 1, -6.5);
	matrix1->setEntry(1, 2, 7.5);
	matrix1->setEntry(1, 3, -8.5);
	matrix1->setEntry(2, 0, 9.5);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, 11.5);
	matrix1->setEntry(2, 3, -12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(7.5, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9.5, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11.5, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeMixedPositive)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4.5);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6.5);
	matrix1->setEntry(1, 2, 7);
	matrix1->setEntry(1, 3, 8.5);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, 10.5);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9, matrix2->getEntry(2, 0));
	EXPECT_EQ(10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeMixedNegative)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, -5);
	matrix1->setEntry(1, 1, -6.5);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, -8.5);
	matrix1->setEntry(2, 0, -9);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, -11);
	matrix1->setEntry(2, 3, -12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(-5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(-8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(-9, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(-11, matrix2->getEntry(2, 2));
	EXPECT_EQ(-12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixSmallToLargeMixedMixed)
{
	Matrix *matrix1 = new Matrix(3, 4);
	Matrix *matrix2 = new Matrix(2, 3);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, -4.5);
	matrix1->setEntry(1, 0, 5);
	matrix1->setEntry(1, 1, 6.5);
	matrix1->setEntry(1, 2, -7);
	matrix1->setEntry(1, 3, 8.5);
	matrix1->setEntry(2, 0, 9);
	matrix1->setEntry(2, 1, -10.5);
	matrix1->setEntry(2, 2, 11);
	matrix1->setEntry(2, 3, 12.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(0, 3));
	EXPECT_EQ(5, matrix2->getEntry(1, 0));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-7, matrix2->getEntry(1, 2));
	EXPECT_EQ(8.5, matrix2->getEntry(1, 3));
	EXPECT_EQ(9, matrix2->getEntry(2, 0));
	EXPECT_EQ(-10.5, matrix2->getEntry(2, 1));
	EXPECT_EQ(11, matrix2->getEntry(2, 2));
	EXPECT_EQ(12.5, matrix2->getEntry(2, 3));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallPositiveHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallPositiveDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5.5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallNegativeHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallNegativeDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallMixedHole)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, -2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, -6);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallMixedDecimal)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1.5);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, -3.5);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, -5.5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1.5, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3.5, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5.5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallMixedPositve)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallMixedNegative)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, -2.5);
	matrix1->setEntry(0, 2, -3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, -5);
	matrix1->setEntry(1, 2, -6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(-2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(-3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(-5, matrix2->getEntry(1, 1));
	EXPECT_EQ(-6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixLargeToSmallMixedMixed)
{
	Matrix *matrix1 = new Matrix(2, 3);
	Matrix *matrix2 = new Matrix(3, 4);

	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);

	EXPECT_NO_THROW(matrix2->setMatrix(*matrix1));
	EXPECT_EQ(-1, matrix2->getEntry(0, 0));
	EXPECT_EQ(2.5, matrix2->getEntry(0, 1));
	EXPECT_EQ(3, matrix2->getEntry(0, 2));
	EXPECT_EQ(-4.5, matrix2->getEntry(1, 0));
	EXPECT_EQ(5, matrix2->getEntry(1, 1));
	EXPECT_EQ(6.5, matrix2->getEntry(1, 2));
}

TEST(VectorEngineDatastructurMatrix, setMatrixExceptionSameMatrix)
{
	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, -1);
	matrix1->setEntry(0, 1, 2.5);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, -4.5);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6.5);
	EXPECT_THROW(matrix1->setMatrix(*matrix1), std::exception);
}