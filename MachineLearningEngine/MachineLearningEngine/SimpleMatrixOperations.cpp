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

Matrix & SimpleMatrixOperations::invert(Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	return *returnMatrix;
}

double SimpleMatrixOperations::determinant(Matrix &matrix)
{
	return 0.0;
}