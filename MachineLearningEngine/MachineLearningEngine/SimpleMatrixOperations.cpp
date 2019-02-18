#include "SimpleMatrixOperations.h"



SimpleMatrixOperations::SimpleMatrixOperations()
{
}


SimpleMatrixOperations::~SimpleMatrixOperations()
{
}

Matrix & SimpleMatrixOperations::addition(Matrix &matrixA, Matrix &matrixB)
{
	return matrixA + matrixB;
}

Matrix & SimpleMatrixOperations::substraction(Matrix &matrixA, Matrix &matrixB)
{
	return matrixA - matrixB;
}

Matrix & SimpleMatrixOperations::multiplication(Matrix &matrixA, Matrix &matrixB)
{
	return matrixA * matrixB;
}

Matrix& SimpleMatrixOperations::multiplication(Matrix &matrix, double value)
{
	return matrix * value;
}

Matrix & SimpleMatrixOperations::hadarmard(Matrix &matrixA, Matrix &matrixB)
{
	if (matrixA.getNumberOfColumns() != matrixB.getNumberOfColumns() || matrixA.getNumberOfRows() != matrixB.getNumberOfRows())
		throw std::exception("Matrix dimensions do not comply");
	Matrix *returnMatrix = new Matrix(matrixA.getNumberOfRows(), matrixA.getNumberOfColumns());
	for (size_t row = 0; row < matrixA.getNumberOfRows(); row++)
		for (size_t column = 0; column < matrixA.getNumberOfColumns(); column++)
			returnMatrix->setEntry(row, column, matrixA.getEntry(row, column) * matrixB.getEntry(row, column));
	return *returnMatrix;
}

Matrix & SimpleMatrixOperations::invertRecursive(Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	return *returnMatrix;
}

Matrix & SimpleMatrixOperations::invertAdjugate(Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	return *returnMatrix;
}

double SimpleMatrixOperations::determinant(Matrix &matrix)
{
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix need to be square to find the determinant");

	double value = 0;
	if (matrix.getNumberOfRows() == 2)
		return matrix.getEntry(0, 0) * matrix.getEntry(1, 1) - matrix.getEntry(0, 1) * matrix.getEntry(1, 0);
	else
		for (size_t column = 0; column < matrix.getNumberOfColumns(); column++)
		{
			Matrix *copyMatrix = new Matrix(matrix.getNumberOfColumns()-1, matrix.getNumberOfColumns()-1);
			setDeterminantMatrix(matrix, *copyMatrix, column);
			value += (matrix.getEntry(0, column) * determinant(*copyMatrix)) * ((column % 2) ? -1 : 1);
			delete copyMatrix;
		}
	return value;
}

void SimpleMatrixOperations::setDeterminantMatrix(Matrix &matrix, Matrix &copyMatrix, int column)
{
	int copyRow = 0;
	int copyCol = 0;
	for (size_t rowSet = 0, copyCol = 0; rowSet < matrix.getNumberOfRows(); rowSet++)
		for (size_t columnSet = 0; columnSet < matrix.getNumberOfColumns(); columnSet++)
			if (rowSet != 0 && columnSet != column)
			{
				if(copyCol == copyMatrix.getNumberOfColumns()) copyCol = 0, copyRow++;
				copyMatrix.setEntry(copyRow, copyCol++, matrix.getEntry(rowSet, columnSet));
			}	
}