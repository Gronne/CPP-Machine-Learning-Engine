#include "SimpleMatrixOperations.h"



Matrix & SimpleMatrixOperations::addition(Matrix &matrixA, Matrix &matrixB)
{
	return matrixA + matrixB;
}

Matrix & SimpleMatrixOperations::addition(Matrix &matrix, double value)
{
	return matrix + value;
}

Matrix & SimpleMatrixOperations::substraction(Matrix &matrixA, Matrix &matrixB)
{
	return matrixA - matrixB;
}

Matrix & SimpleMatrixOperations::substraction(Matrix &matrix, double value)
{
	return matrix - value;
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
	hadamardExceptions(matrixA, matrixB);

	Matrix *result = new Matrix(matrixA);

	for (size_t row = 0; row < matrixA.getNumberOfRows(); ++row)
		for (size_t column = 0; column < matrixA.getNumberOfColumns(); ++column)
			result->setEntry(row, column, matrixA.getEntry(row, column) * matrixB.getEntry(row, column));

	return *result;
}

void SimpleMatrixOperations::hadamardExceptions(const Matrix &matrixA, const Matrix &matrixB)
{
	if (matrixA.getNumberOfColumns() != matrixB.getNumberOfColumns() || matrixA.getNumberOfRows() != matrixB.getNumberOfRows())
		throw std::exception("Matrix dimensions do not comply");
}

Matrix & SimpleMatrixOperations::getInverse(const Matrix &matrix)
{
	double det = determinant(matrix);

	inverseExceptions(matrix, det);

	if (matrix.getNumberOfColumns() == 1)
		return matrix / (matrix.getEntry(0, 0) * matrix.getEntry(0, 0));
	
	return calculateInverse(matrix, det);
}

void SimpleMatrixOperations::inverse(Matrix &matrix) 
{
	matrix = getInverse(matrix);
}

double SimpleMatrixOperations::determinant(const Matrix &matrix)
{
	determinantExceptions(matrix);

	if (matrix.getNumberOfColumns() == 1)
		return matrix.getEntry(0, 0);

	return determinantRecursive(matrix);
}

void SimpleMatrixOperations::determinantExceptions(const Matrix &matrix)
{
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix need to be square to find the determinant");
}

Matrix& SimpleMatrixOperations::cross(const Matrix &matrix)
{
	crossExceptions(matrix);

	if (matrix.getNumberOfRows() == 1)
		return transformSingleCrossValues(matrix);

	Matrix *crossMatrix = new Matrix(1, matrix.getNumberOfColumns());

	for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
		crossMatrix->setEntry(0, col, calculateCrossValue(matrix, col));
	
	return *crossMatrix;
}

void SimpleMatrixOperations::crossExceptions(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() != matrix.getNumberOfColumns() - 1)
		throw std::exception("Matrix need to have the dimensions: NxN+1");
}

double SimpleMatrixOperations::dot(const Matrix &vec1, const Matrix &vec2)
{
	dotExceptions(vec1, vec2);
	
	return calculateDotProduct(vec1, vec2);
}

void SimpleMatrixOperations::dotExceptions(const Matrix &vec1, const Matrix &vec2)
{
	if (vec1.getNumberOfColumns() != 1 && vec1.getNumberOfRows() != 1)
		throw std::exception("First argument isn't a 1xN or Nx1 Matrix");
	if (vec2.getNumberOfColumns() != 1 && vec2.getNumberOfRows() != 1)
		throw std::exception("Second argument isn't a 1xN or Nx1 Matrix");
}

double SimpleMatrixOperations::calculateDotProduct(const Matrix &vec1, const Matrix &vec2)
{
	double dotValue;

	if (vec1.getNumberOfRows() == 1 && vec2.getNumberOfRows() == 1)
		dotValue = (vec1 * vec2.transpose()).getEntry(0, 0);

	else if (vec1.getNumberOfRows() == 1 && vec2.getNumberOfRows() != 1)
		dotValue = (vec1 * vec2).getEntry(0, 0);

	else if (vec1.getNumberOfRows() != 1 && vec2.getNumberOfRows() == 1)
		dotValue = (vec2 * vec1).getEntry(0, 0);

	else if (vec1.getNumberOfRows() != 1 && vec2.getNumberOfRows() != 1)
		dotValue = (vec1.transpose() * vec2).getEntry(0, 0);

	return dotValue;
}

double SimpleMatrixOperations::calculateVectorLength(const Matrix &matrix)
{
	double buffer = 0;

	for (size_t column = 0; column < matrix.getNumberOfColumns(); ++column)
		buffer += matrix.getEntry(0, column) * matrix.getEntry(0, column);

	return sqrt(buffer);
}

void SimpleMatrixOperations::shiftInverseEntries(Matrix &inverseMatrix)
{
	for (size_t row = 0; row < inverseMatrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < inverseMatrix.getNumberOfColumns(); ++col)
			inverseMatrix.setEntry(row, col, inverseMatrix.getEntry(row, col) * (((row + col) % 2) ? -1 : 1));
}

Matrix& SimpleMatrixOperations::calculateInverse(const Matrix &matrix, double det)
{
	Matrix *inverseMatrix = new Matrix(matrix);

	setInverseMatrix(matrix, *inverseMatrix);
	shiftInverseEntries(*inverseMatrix);

	*inverseMatrix *= (1 / det);
	return *inverseMatrix;
}

void SimpleMatrixOperations::setInverseMatrix(const Matrix &matrix, Matrix &inverseMatrix)
{
	if (inverseMatrix.getNumberOfColumns() == 2)
		setInverseMatrix2x2(matrix, inverseMatrix);
	else
		for (size_t row = 0; row < inverseMatrix.getNumberOfRows(); ++row)
			for (size_t col = 0; col < inverseMatrix.getNumberOfColumns(); ++col)
				setDeterminantEntry(matrix, inverseMatrix, row, col);
}

void SimpleMatrixOperations::inverseExceptions(const Matrix &matrix, double det)
{
	if (det == 0)
		throw std::exception("Not possible to invert");

	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix need to be square to find the inverse");
}

void SimpleMatrixOperations::setInverseMatrix2x2(const Matrix &matrix, Matrix &inverseMatrix)
{
	inverseMatrix.setEntry(0, 0, matrix.getEntry(1, 1));
	inverseMatrix.setEntry(0, 1, matrix.getEntry(0, 1));
	inverseMatrix.setEntry(1, 0, matrix.getEntry(1, 0));
	inverseMatrix.setEntry(1, 1, matrix.getEntry(0, 0));
}

void SimpleMatrixOperations::setDeterminantEntry(const Matrix &matrix, Matrix &inverseMatrix, int row, int col)
{
	Matrix *detMatrix = new Matrix(inverseMatrix.getNumberOfRows() - 1, inverseMatrix.getNumberOfColumns() - 1);

	setDeterminantMatrix(matrix, *detMatrix, row, col);
	inverseMatrix.setEntry(col, row, determinant(*detMatrix));

	delete detMatrix;
}

double SimpleMatrixOperations::determinantRecursive(const Matrix &matrix)
{
	double value = 0;

	if (matrix.getNumberOfRows() == 2)
		return matrix.getEntry(0, 0) * matrix.getEntry(1, 1) - matrix.getEntry(0, 1) * matrix.getEntry(1, 0);
	else
		for (size_t column = 0; column < matrix.getNumberOfColumns(); ++column)
			value += calculateDeterminantValue(matrix, column);	
		
	return value;
}

double SimpleMatrixOperations::calculateDeterminantValue(const Matrix &matrix, int column)
{
	Matrix *copyMatrix = new Matrix(matrix.getNumberOfColumns() - 1, matrix.getNumberOfColumns() - 1);

	setDeterminantMatrix(matrix, *copyMatrix, 0, column);

	double detValue = (matrix.getEntry(0, column) * determinantRecursive(*copyMatrix));
	detValue *= ((column % 2) ? -1 : 1);

	delete copyMatrix;
	return detValue;
}

Matrix & SimpleMatrixOperations::transformSingleCrossValues(const Matrix &matrix)
{
	Matrix *crossMatrix = new Matrix(1, 2);
	crossMatrix->setEntry(0, 0, matrix.getEntry(0, 1));
	crossMatrix->setEntry(0, 1, -matrix.getEntry(0, 0));
	return *crossMatrix;
}

double SimpleMatrixOperations::calculateCrossValue(const Matrix &matrix, int col )
{
	Matrix *bufferMatrix = new Matrix(matrix.getNumberOfRows(), matrix.getNumberOfRows());

	setDeterminantMatrix(matrix, *bufferMatrix, -1, col);
	double detValue = determinant(*bufferMatrix);

	delete bufferMatrix;

	return (detValue * ((col % 2) ? -1 : 1));
}

void SimpleMatrixOperations::lengthOfVectorExceptions(const Matrix &matrix, bool rows, int rowNumber)
{
	if (rows == 1 && matrix.getNumberOfRows() <= rowNumber)
		throw std::exception("the chosen Row is larger than the given matrix");
	if (rows == 0 && matrix.getNumberOfColumns() <= rowNumber)
		throw std::exception("the chosen Column is larger than the given matrix");
}

Matrix & SimpleMatrixOperations::createNormBuffer(const Matrix &matrix, bool oneNorm)
{
	if (oneNorm)
		return GetMatrix::getZeroMatrix(1, matrix.getNumberOfColumns());
	else
		return GetMatrix::getZeroMatrix(1, matrix.getNumberOfRows());
}

void SimpleMatrixOperations::fillNormVector(const Matrix &matrix, Matrix &normVector, bool oneNorm)
{
	for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
		for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		{
			double && entryValue = matrix.getEntry(row, col);
			if (oneNorm == true)
				normVector.setEntry(0, col, normVector.getEntry(0, col) + ((entryValue > 0) ? entryValue : -entryValue));
			else
				normVector.setEntry(0, row, normVector.getEntry(0, row) + ((entryValue > 0) ? entryValue : -entryValue));
		}
}

double SimpleMatrixOperations::dot(const Matrix &matrix, int row1, int row2, bool transposed)
{
	Matrix *vec1 = new Matrix();
	Matrix *vec2 = new Matrix();

	if (transposed == 0)
		*vec1 = matrix.getRow(row1), *vec2 = matrix.getRow(row2);
	else
		*vec1 = matrix.getColumn(row1), *vec2 = matrix.getColumn(row2);

	double dotValue = dot(*vec1, *vec2);
	delete vec1;
	delete vec2;
	return dotValue;
}

double SimpleMatrixOperations::lengthOfVector(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() != 1 && matrix.getNumberOfColumns() != 1)
		throw std::exception("There can only be 1 vector in the matrix");

	double length = 0;

	if (matrix.getNumberOfRows() == 1)
		length = calculateVectorLength(matrix);
	if (matrix.getNumberOfColumns() == 1)
		length = calculateVectorLength(matrix.transpose());

	return length;
}

double SimpleMatrixOperations::lengthOfVector(const Matrix &matrix, bool rows, int rowNumber)
{
	lengthOfVectorExceptions(matrix, rows, rowNumber);

	return lengthOfVector(((rows) ? matrix.getRow(rowNumber) : matrix.getColumn(rowNumber)));
}

double SimpleMatrixOperations::norm(const Matrix &matrix, bool oneNorm)
{
	Matrix *normVector = new Matrix();
	*normVector = createNormBuffer(matrix, oneNorm);

	fillNormVector(matrix, *normVector, oneNorm);
	double returnValue = findMaxValue(*normVector);

	delete normVector;
	return returnValue;
}

double SimpleMatrixOperations::sum(Matrix &matrix)
{
	double returnValue = 0.0;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			returnValue += matrix.getEntry(row, col);

	return returnValue;
}

double SimpleMatrixOperations::findMaxValue(const Matrix &matrix)
{
	double returnValue = 0;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
		{
			double newValue = ((matrix.getEntry(row, col) > 0) ? matrix.getEntry(row, col) : -matrix.getEntry(row, col));
			double oldValue = ((returnValue > 0) ? returnValue : -returnValue);

			if (newValue > oldValue)
				returnValue = matrix.getEntry(row, col);
		}
			
	return returnValue;
}

void SimpleMatrixOperations::setDeterminantMatrix(const Matrix &matrix, Matrix &copyMatrix, int row, int column)
{
	int copyRow = 0;
	int copyCol = 0;

	for (size_t rowSet = 0; rowSet < matrix.getNumberOfRows(); ++rowSet)
		for (size_t columnSet = 0; columnSet < matrix.getNumberOfColumns(); ++columnSet)
			if (rowSet != row && columnSet != column)
			{
				if(copyCol == copyMatrix.getNumberOfColumns()) copyCol = 0, copyRow++;
				copyMatrix.setEntry(copyRow, copyCol++, matrix.getEntry(rowSet, columnSet));
			}	
}
