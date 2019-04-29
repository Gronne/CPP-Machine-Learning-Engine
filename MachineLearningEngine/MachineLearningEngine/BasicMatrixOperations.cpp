#include "BasicMatrixOperations.h"



BasicMatrixOperations::BasicMatrixOperations()
{
}

BasicMatrixOperations::~BasicMatrixOperations()
{

}


void BasicMatrixOperations::rowReduce(Matrix &matrix)
{
	matrix = getRowReduction(matrix);
}


Matrix & BasicMatrixOperations::getRowReduction(const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	*returnMatrix = rref.rowReduceUnder(matrix);
	return *returnMatrix;
}


void BasicMatrixOperations::echelonForm(Matrix &matrix)
{
	matrix = getEchelonForm(matrix);
}


Matrix & BasicMatrixOperations::getEchelonForm(const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	*returnMatrix = rref.rowReduceUnder(matrix);
	*returnMatrix = rref.rowReduceOver(*returnMatrix);
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
	{
		Matrix *resultMatrix = new Matrix(1, 1);
		resultMatrix->setEntry(0, 0, 1 / matrix.getEntry(0, 0));
		return *resultMatrix;
	}

	Matrix *resultMatrix = new Matrix();
	*resultMatrix = matrix;

	GetMatrix GM;
	resultMatrix->appendMatrix(GM.getIdentityMatrix(matrix.getNumberOfRows()));

	echelonForm(*resultMatrix);

	return resultMatrix->getColumn(GM.numberSequence(matrix.getNumberOfColumns(), resultMatrix->getNumberOfColumns() - 1));
}

double BasicMatrixOperations::determinant(const Matrix &matrix)
{
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix need to be square to find the determinant");
	if (matrix.getNumberOfColumns() == 1)
		return matrix.getEntry(0, 0);

	if (rref.checkForFullDependentMatrix(matrix))
		return 0;

	Matrix *bufferMatrix = new Matrix();
	*bufferMatrix = getRowReduction(matrix);

	double returnValue = 1.0;
	for (size_t row = 0; row < bufferMatrix->getNumberOfRows(); row++)
		returnValue *= bufferMatrix->getEntry(row, row);

	delete bufferMatrix;
	return returnValue;
}


Matrix & BasicMatrixOperations::getEigenValues(const Matrix &matrix)
{

	//det(A-tau*I) = 0		//Where tay is a scalar for the Identity matrix
	if (matrix.getNumberOfRows() != matrix.getNumberOfColumns())
		throw std::exception("Matrix needs to be square to calculate the eigenValues");

	Matrix *returnMatrix = new Matrix(matrix.getNumberOfRows(), 1);

	if ((int)determinant(matrix) == 0)
	{
		for (size_t index = 0; index < matrix.getNumberOfRows(); index++)
			returnMatrix->setEntry(index, 0, matrix.getEntry(index, index));
		return *returnMatrix;
	}
	else
		throw std::exception("Not implemented yet, need new architecture to do it easy");

	return *returnMatrix;
}


Matrix & BasicMatrixOperations::getEigenVectors(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() != matrix.getNumberOfColumns())
		throw std::exception("Matrix needs to be square to calculate the eigenVectors");
	else 
		throw std::exception("Not implemented yet, need new architecture to do it easy");

	return *(new Matrix());
}


MatrixResult & BasicMatrixOperations::findSolution(const Matrix &)
{
	MatrixResult *matrix = new MatrixResult();
	return *matrix;
}


Matrix & BasicMatrixOperations::getOrthonormal(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}

void BasicMatrixOperations::inverseExceptions(const Matrix &matrix)
{
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Ned square matrix for inverse");

	if (rref.checkForFullDependentMatrix(matrix))
		throw std::exception("When finding Inverse, the matrix can't be full dependent");
}

