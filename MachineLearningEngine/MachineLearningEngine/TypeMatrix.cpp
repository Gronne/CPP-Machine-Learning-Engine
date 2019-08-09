#include "TypeMatrix.h"



bool TypeMatrix::dependent(const Matrix &matrix)
{
	//Is independent if and only if rank(A) == min(row, col)
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		return true;

	//If and only if, det(A) = 0
	return (BasicMatrixOperations::determinant(matrix) == 0);
}


bool TypeMatrix::homogeneous(const Matrix &matrix)
{
	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		if (matrix.getEntry(row, matrix.getNumberOfColumns() - 1) != 0)
			return false;
	return true;
}

bool TypeMatrix::trivial(const Matrix &matrix)
{
	Matrix *buffer = new Matrix();
	*buffer = matrix;

	if (matrix.getNumberOfColumns() - 1 == matrix.getNumberOfRows())
		buffer->deleteColumn(buffer->getNumberOfColumns() - 1);

	bool _dependent = dependent(*buffer);
	delete buffer;

	return !_dependent && homogeneous(matrix);
}


bool TypeMatrix::basis(const Matrix &matrix)
{	
	if (!isSquare(matrix) || MatrixRREF::checkForFullDependentMatrix(matrix))
		return false;

	Matrix *buffer = new Matrix();
	*buffer = BasicMatrixOperations::getEchelonForm(matrix);

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		if (buffer->getEntry(row, row) != 1)
			return false;

	return true;
}


bool TypeMatrix::orthogonal(Matrix &, Matrix &)
{

	return false;
}


bool TypeMatrix::orthogonal(const Matrix &matrix)
{
	if (!isSquare(matrix) || MatrixRREF::checkForFullDependentMatrix(matrix))
		return false;

	bool returnState = false;

	if (matrix * matrix.transpose() == GetMatrix::getIdentityMatrix(matrix.getNumberOfRows()))
		returnState = true;

	return returnState;
}


int TypeMatrix::rank(const Matrix &matrix)
{
	if (isZeroMatrix(matrix))
		return 0;
	
	if (MatrixRREF::checkForFullDependentMatrix(matrix))
		return 1;
	
	return findRankFromRREF(BasicMatrixOperations::getEchelonForm(matrix));
}


bool TypeMatrix::fullRank(const Matrix &matrix)
{
	return (matrix.getLargestSize() == rank(matrix)) ? true : false;
}

//Will return the number of dimensions that the matrix spans over
int TypeMatrix::span(const Matrix &matrix)
{
	return rank(matrix);
}

bool TypeMatrix::isInSpan(const Matrix &matrixSpan, const Matrix &newVectors, bool rowVector)
{
	if (!rowVector)
		return checkSpan(matrixSpan, newVectors);
	else
		return checkSpan(matrixSpan.transpose(), newVectors.transpose());
}

bool TypeMatrix::checkSpan(const Matrix &matrixSpan, const Matrix &matrixInSpan)
{
	Matrix *spanBuffer = new Matrix();
	*spanBuffer = matrixSpan.transpose();

	if (matrixSpan.getNumberOfColumns() != matrixInSpan.getNumberOfColumns())
		spanBuffer->appendMatrix(matrixInSpan);
	else 
		spanBuffer->appendMatrix(matrixInSpan.transpose());

	bool returnState = (span(matrixSpan) == span(*spanBuffer));

	delete spanBuffer;
	return returnState;
}


bool TypeMatrix::isomorphic(Matrix &, Matrix &)
{
	throw std::exception("Isomorphic is not implemented yet");
	return false;
}

bool TypeMatrix::isSquare(const Matrix &matrix)
{
	return matrix.getNumberOfColumns() == matrix.getNumberOfRows();
}

bool TypeMatrix::isEqual(const Matrix &matrixA, const Matrix &matrixB, double precision)
{
	if (precision < 0)
		throw std::exception("Precision needs to be 0 or positive");

	if (matrixA.getNumberOfColumns() != matrixB.getNumberOfColumns() || matrixA.getNumberOfRows() != matrixB.getNumberOfRows())
		return false;

	bool equalFlag = true;

	for (size_t row = 0; row < matrixA.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrixA.getNumberOfColumns(); ++col)
			if(equalFlag)
				equalFlag = isEqualEntry(matrixA.getEntry(row, col), matrixB.getEntry(row, col), precision);

	return equalFlag;
}

bool TypeMatrix::isZeroMatrix(const Matrix &matrix)
{
	bool zeroes = true;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			if (matrix.getEntry(row, col) != 0)
			{
				zeroes = false;
				break;
			}

	return zeroes;
}

bool TypeMatrix::isSameSize(const Matrix &matrixA, const Matrix &matrixB)
{
	return matrixA.getNumberOfColumns() == matrixB.getNumberOfColumns() &&
			matrixA.getNumberOfRows() == matrixB.getNumberOfRows();
}

int TypeMatrix::findRankFromRREF(Matrix &matrix)
{
	int rank = 0;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			if (matrix.getEntry(row, col) != 0)
			{
				++rank;
				break;
			}

	return rank;
}

bool TypeMatrix::isEqualEntry(double entryA, double entryB, double precision)
{
	bool returnBool = true;
	
	if (entryA + precision < entryB)
		returnBool = false;
	else if (entryA - precision > entryB)
		returnBool = false;

	return returnBool;
}

