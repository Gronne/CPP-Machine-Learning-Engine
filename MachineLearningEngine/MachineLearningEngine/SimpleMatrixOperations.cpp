#include "SimpleMatrixOperations.h"



SimpleMatrixOperations::SimpleMatrixOperations()
{
}


SimpleMatrixOperations::~SimpleMatrixOperations()
{
}

Matrix & SimpleMatrixOperations::addition(Matrix &matrixA, Matrix &matrixB) const
{
	return matrixA + matrixB;
}

Matrix & SimpleMatrixOperations::addition(Matrix &matrix, double value) const
{
	return matrix + value;
}

Matrix & SimpleMatrixOperations::substraction(Matrix &matrixA, Matrix &matrixB) const
{
	return matrixA - matrixB;
}

Matrix & SimpleMatrixOperations::substraction(Matrix &matrix, double value) const
{
	return matrix - value;
}

Matrix & SimpleMatrixOperations::multiplication(Matrix &matrixA, Matrix &matrixB) const
{
	return matrixA * matrixB;
}

Matrix& SimpleMatrixOperations::multiplication(Matrix &matrix, double value) const
{
	return matrix * value;
}

Matrix & SimpleMatrixOperations::hadamard(Matrix &matrixA, Matrix &matrixB) const
{
	if (matrixA.getNumberOfColumns() != matrixB.getNumberOfColumns() || matrixA.getNumberOfRows() != matrixB.getNumberOfRows())
		throw std::exception("Matrix dimensions do not comply");
	Matrix *returnMatrix = new Matrix(matrixA.getNumberOfRows(), matrixA.getNumberOfColumns());
	for (size_t row = 0; row < matrixA.getNumberOfRows(); row++)
		for (size_t column = 0; column < matrixA.getNumberOfColumns(); column++)
			returnMatrix->setEntry(row, column, matrixA.getEntry(row, column) * matrixB.getEntry(row, column));
	return *returnMatrix;
}

Matrix & SimpleMatrixOperations::getInverse(const Matrix &matrix)
{
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix need to be square to find the inverse");

	Matrix *inverseMatrix = new Matrix();
	*inverseMatrix = matrix;

	if (matrix.getNumberOfColumns() == 1)
		return *inverseMatrix;

	setInverseMatrix(matrix, *inverseMatrix);

	for (size_t row = 0; row < inverseMatrix->getNumberOfRows(); row++)
		for (size_t col = 0; col < inverseMatrix->getNumberOfColumns(); col++)
			inverseMatrix->setEntry(row, col, inverseMatrix->getEntry(row, col) * (((row + col) % 2) ? -1 : 1));
	
	double det = determinant(matrix);
	if (det == 0)
		throw std::exception("Not possible to invert");

	return *inverseMatrix * (1/det);
}

void SimpleMatrixOperations::inverse(Matrix &matrix) 
{
	matrix = getInverse(matrix);
}

void SimpleMatrixOperations::setInverseMatrix(const Matrix &matrix, Matrix &inverseMatrix)
{
	if (inverseMatrix.getNumberOfColumns() == 2)
	{
		inverseMatrix.setEntry(0, 0, matrix.getEntry(1, 1));
		inverseMatrix.setEntry(0, 1, matrix.getEntry(0, 1));
		inverseMatrix.setEntry(1, 0, matrix.getEntry(1, 0));
		inverseMatrix.setEntry(1, 1, matrix.getEntry(0, 0));
	}
	else
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
}

double SimpleMatrixOperations::determinant(const Matrix &matrix)
{
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix need to be square to find the determinant");
	if (matrix.getNumberOfColumns() == 1)
		return matrix.getEntry(0, 0);

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

Matrix& SimpleMatrixOperations::cross(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() != matrix.getNumberOfColumns()-1)
		throw std::exception("Matrix need to have the dimensions: NxN+1");
	if (matrix.getNumberOfRows() == 1)
	{
		Matrix *crossMatrix = new Matrix(1, 2);
		crossMatrix->setEntry(0, 0, matrix.getEntry(0, 1));
		crossMatrix->setEntry(0, 1, -matrix.getEntry(0, 0));
		return *crossMatrix;
	}

	Matrix *bufferMatrix = new Matrix(matrix.getNumberOfRows(), matrix.getNumberOfRows());
	Matrix *crossMatrix = new Matrix(1, matrix.getNumberOfColumns());
	for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
	{
		setDeterminantMatrix(matrix, *bufferMatrix, -1, col);
		double detValue = determinant(*bufferMatrix);
		crossMatrix->setEntry(0, col, (detValue * ((col%2) ? -1 : 1)));
	}
	delete bufferMatrix;
	
	return *crossMatrix;
}

double SimpleMatrixOperations::dot(const Matrix &vec1, const Matrix &vec2)
{
	if (vec1.getNumberOfColumns() != 1 && vec1.getNumberOfRows() != 1)
		throw std::exception("First argument isn't a 1xN or Nx1 Matrix");
	if (vec2.getNumberOfColumns() != 1 && vec2.getNumberOfRows() != 1)
		throw std::exception("Second argument isn't a 1xN or Nx1 Matrix");
	
	return calculateDotProduct(vec1, vec2);
}

double SimpleMatrixOperations::calculateDotProduct(const Matrix &vec1, const Matrix &vec2)
{
	double dotValue;

	Matrix *vec1Buf = new Matrix();
	Matrix *vec2Buf = new Matrix();
	*vec1Buf = vec1;
	*vec2Buf = vec2;

	if (vec1.getNumberOfRows() == 1 && vec2.getNumberOfRows() == 1)
	{
		vec2Buf->transpose();
		dotValue = (*vec1Buf * *vec2Buf).getEntry(0, 0);
	}
	else if (vec1.getNumberOfRows() == 1 && vec2.getNumberOfRows() != 1)
		dotValue = (*vec1Buf * *vec2Buf).getEntry(0, 0);
	else if (vec1.getNumberOfRows() != 1 && vec2.getNumberOfRows() == 1)
		dotValue = (*vec2Buf * *vec1Buf).getEntry(0, 0);
	else if (vec1.getNumberOfRows() != 1 && vec2.getNumberOfRows() != 1)
	{
		vec1Buf->transpose();
		dotValue = (*vec1Buf * *vec2Buf).getEntry(0, 0);
	}

	delete vec1Buf;
	delete vec2Buf;

	return dotValue;
}

double SimpleMatrixOperations::calculateVectorLength(const Matrix &matrix)
{
	double buffer = 0;
	for (size_t column = 0; column < matrix.getNumberOfColumns(); column++)
		buffer += matrix.getEntry(0, column) * matrix.getEntry(0, column);
	return sqrt(buffer);
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
	{
		Matrix *buffer = new Matrix();
		*buffer = matrix;
		buffer->transpose();
		length = calculateVectorLength(*buffer);
		delete buffer;
	}
	return length;
}

double SimpleMatrixOperations::lengthOfVector(const Matrix &matrix, bool rows, int rowNumber)
{
	if (rows == 1 && matrix.getNumberOfRows() <= rowNumber)
		throw std::exception("the chosen Row is larger than the given matrix");
	if (rows == 0 && matrix.getNumberOfColumns() <= rowNumber)
		throw std::exception("the chosen Column is larger than the given matrix");

	Matrix *matrixBuffer = new Matrix();
	*matrixBuffer = (rows) ? matrix.getRow(rowNumber) : matrix.getColumn(rowNumber);

	double length = lengthOfVector(*matrixBuffer);

	delete matrixBuffer;
	return length;
}

double SimpleMatrixOperations::norm(const Matrix &matrix, bool oneNorm)
{
	GetMatrix GM;

	Matrix *results = new Matrix();
	if(oneNorm)
		*results = GM.getZeroMatrix(1, matrix.getNumberOfColumns());
	else
		*results = GM.getZeroMatrix(1, matrix.getNumberOfRows());

	for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
		for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		{
			double && entryValue = matrix.getEntry(row, col);
			if (oneNorm == true)
				results->setEntry(0, col, results->getEntry(0, col) + ((entryValue > 0) ? entryValue : -entryValue));
			else
				results->setEntry(0, row, results->getEntry(0, row) + ((entryValue > 0) ? entryValue : -entryValue));
		}

	double returnValue = findMaxValue(*results);

	delete results;
	return returnValue;
}

double SimpleMatrixOperations::sum(Matrix &matrix) const
{
	double returnValue = 0.0;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			returnValue += matrix.getEntry(row, col);
	return returnValue;
}

double SimpleMatrixOperations::findMaxValue(const Matrix &matrix)
{
	double returnValue = 0;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (((matrix.getEntry(row, col) > 0) ? matrix.getEntry(row, col) : -matrix.getEntry(row, col)) > ((returnValue > 0) ? returnValue : -returnValue))
				returnValue = matrix.getEntry(row, col);
	return returnValue;
}

Matrix & SimpleMatrixOperations::makeIdentityMatrix(int size)
{
	Matrix *Imatrix = new Matrix(size, size);
	for (size_t row = 0; row < size; row++)
		for (size_t col = 0; col < size; col++)
			(col == row) ? Imatrix->setEntry(row, col, 1) : Imatrix->setEntry(row, col, 0);
	return *Imatrix;
}

void SimpleMatrixOperations::setDeterminantMatrix(const Matrix &matrix, Matrix &copyMatrix, int row, int column)
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
