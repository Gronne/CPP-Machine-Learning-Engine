#include "BasicMatrixOperations.h"


void BasicMatrixOperations::rowReduce(Matrix &matrix)
{
	matrix = getRowReduction(matrix);
}


Matrix & BasicMatrixOperations::getRowReduction(const Matrix &matrix)
{ 
	return MatrixRREF::rowReduceUnder(matrix);
}


void BasicMatrixOperations::echelonForm(Matrix &matrix)
{
	matrix = getEchelonForm(matrix);
}


Matrix & BasicMatrixOperations::getEchelonForm(const Matrix &matrix)
{
	Matrix *returnMatrix = &MatrixRREF::rowReduceUnder(matrix);
	*returnMatrix = MatrixRREF::rowReduceOver(*returnMatrix);
	return *returnMatrix;
}


void BasicMatrixOperations::echelonInverse(Matrix &matrix)
{
	matrix = getEchelonInverse(matrix);
}


Matrix & BasicMatrixOperations::getEchelonInverse(const Matrix &matrix)
{
	inverseExceptions(matrix);
	
	if (matrix.getNumberOfColumns() == 1)
		return singleValueInverse(matrix);

	Matrix *result = new Matrix(matrix);
	result->appendMatrix(GetMatrix::getIdentityMatrix(matrix));

	echelonForm(*result);

	Matrix numberSequence = GetMatrix::numberSequence(matrix.getNumberOfColumns(), result->getNumberOfColumns() - 1);
	return result->getColumn(numberSequence);
}

void BasicMatrixOperations::inverseExceptions(const Matrix &matrix)
{
	if (TypeMatrix::isSquare(matrix) == false)
		throw std::exception("Need square matrix for inverse");

	if (MatrixRREF::checkForFullDependentMatrix(matrix))
		throw std::exception("When finding Inverse, the matrix can't be full dependent");
}

Matrix & BasicMatrixOperations::singleValueInverse(const Matrix &matrix)
{
	return matrix / (matrix.getEntry(0, 0) * matrix.getEntry(0, 0));
}

double BasicMatrixOperations::determinant(const Matrix &matrix)
{
	determinantExceptions(matrix);

	if (matrix.getNumberOfColumns() == 1)
		return matrix.getEntry(0, 0);
	if (MatrixRREF::checkForFullDependentMatrix(matrix))
		return 0;

	Matrix bufferMatrix = getRowReduction(matrix);

	return diagonalProduct(bufferMatrix);
}


Matrix & BasicMatrixOperations::getEigenValues(const Matrix &matrix)
{
	//det(A-tau*I) = 0		//Where tay is a scalar for the Identity matrix
	if (TypeMatrix::isSquare(matrix) == false)
		throw std::exception("Matrix needs to be square to calculate the eigenValues");

	Matrix *returnMatrix = new Matrix(matrix.getNumberOfRows(), 1);

	if ((int)determinant(matrix) == 0)
		throw std::exception("Not implemented yet, need new architecture to do it easy");
	else
		throw std::exception("Not implemented yet, need new architecture to do it easy");

	return *returnMatrix;
}


Matrix & BasicMatrixOperations::getEigenVectors(const Matrix &matrix)
{
	if (TypeMatrix::isSquare(matrix) == false)
		throw std::exception("Matrix needs to be square to calculate the eigenVectors");
	else 
		throw std::exception("Not implemented yet, need new architecture to do it easy");

	return *(new Matrix());
}


Matrix & BasicMatrixOperations::getOrthonormal(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}

void BasicMatrixOperations::determinantExceptions(const Matrix &matrix)
{
	if (TypeMatrix::isSquare(matrix) == false)
		throw std::exception("Matrix need to be square to find the determinant");
}

double BasicMatrixOperations::diagonalProduct(const Matrix &matrix)
{
	double product = 1.0;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		product *= matrix.getEntry(row, row);

	return product;
}

