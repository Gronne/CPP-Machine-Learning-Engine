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

Matrix & SimpleMatrixOperations::hadamard(Matrix &matrixA, Matrix &matrixB)
{
	if (matrixA.getNumberOfColumns() != matrixB.getNumberOfColumns() || matrixA.getNumberOfRows() != matrixB.getNumberOfRows())
		throw std::exception("Matrix dimensions do not comply");
	Matrix *returnMatrix = new Matrix(matrixA.getNumberOfRows(), matrixA.getNumberOfColumns());
	for (size_t row = 0; row < matrixA.getNumberOfRows(); row++)
		for (size_t column = 0; column < matrixA.getNumberOfColumns(); column++)
			returnMatrix->setEntry(row, column, matrixA.getEntry(row, column) * matrixB.getEntry(row, column));
	return *returnMatrix;
}

Matrix & SimpleMatrixOperations::inverse(Matrix &matrix)
{
	Matrix *inverseMatrix = new Matrix();
	*inverseMatrix = matrix;
	setInverseMatrix(matrix, *inverseMatrix);

	for (size_t row = 0; row < inverseMatrix->getNumberOfRows(); row++)
		for (size_t col = 0; col < inverseMatrix->getNumberOfColumns(); col++)
			inverseMatrix->setEntry(row, col, inverseMatrix->getEntry(row, col) * (((row + col) % 2) ? -1 : 1));
	
	return *inverseMatrix * (1 / determinant(matrix));
}

void SimpleMatrixOperations::setInverseMatrix(Matrix &matrix, Matrix &inverseMatrix)
{
	Matrix *detMatrix = new Matrix(inverseMatrix.getNumberOfRows() - 1, inverseMatrix.getNumberOfColumns() - 1);
	for (size_t row = 0; row < inverseMatrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < inverseMatrix.getNumberOfColumns(); col++)
		{
			setDeterminantMatrix(matrix, *detMatrix, row, col);
			inverseMatrix.setEntry(col, row, determinant(*detMatrix));
		}
	delete detMatrix;
}

Matrix & SimpleMatrixOperations::inverseAdjugate(Matrix &matrix)
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
			setDeterminantMatrix(matrix, *copyMatrix, 0, column);
			value += (matrix.getEntry(0, column) * determinant(*copyMatrix)) * ((column % 2) ? -1 : 1);
			delete copyMatrix;
		}
	return value;
}

void SimpleMatrixOperations::setDeterminantMatrix(Matrix &matrix, Matrix &copyMatrix, int row, int column)
{
	int copyRow = 0;
	int copyCol = 0;
	for (size_t rowSet = 0; rowSet < matrix.getNumberOfRows(); rowSet++)
		for (size_t columnSet = 0; columnSet < matrix.getNumberOfColumns(); columnSet++)
			if (rowSet != row && columnSet != column)
			{
				if(copyCol == copyMatrix.getNumberOfColumns()) copyCol = 0, copyRow++;
				copyMatrix.setEntry(copyRow, copyCol++, matrix.getEntry(rowSet, columnSet));
			}	
}
