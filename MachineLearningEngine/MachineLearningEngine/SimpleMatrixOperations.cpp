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

Matrix & SimpleMatrixOperations::substraction(Matrix &matrixA, Matrix &matrixB) const
{
	return matrixA - matrixB;
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

Matrix & SimpleMatrixOperations::inverse(const Matrix &matrix)
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

double SimpleMatrixOperations::dot(Matrix &vec1, Matrix &vec2)
{
	if (vec1.getNumberOfColumns() != 1 && vec1.getNumberOfRows() != 1)
		throw std::exception("First argument isn't a 1xN or Nx1 Matrix");
	if (vec2.getNumberOfColumns() != 1 && vec2.getNumberOfRows() != 1)
		throw std::exception("Second argument isn't a 1xN or Nx1 Matrix");
	
	return calculateDotProduct(vec1, vec2);
}

double SimpleMatrixOperations::calculateDotProduct(Matrix &vec1, Matrix &vec2)
{
	double dotValue;
	if (vec1.getNumberOfRows() == 1 && vec2.getNumberOfRows() == 1)
	{
		vec2.transpose();
		dotValue = (vec1 * vec2).getEntry(0, 0);
		vec2.transpose();
	}
	else if (vec1.getNumberOfRows() == 1 && vec2.getNumberOfRows() != 1)
		dotValue = (vec1 * vec2).getEntry(0, 0);
	else if (vec1.getNumberOfRows() != 1 && vec2.getNumberOfRows() == 1)
		dotValue = (vec2 * vec1).getEntry(0, 0);
	else if (vec1.getNumberOfRows() != 1 && vec2.getNumberOfRows() != 1)
	{
		vec1.transpose();
		dotValue = (vec1 * vec2).getEntry(0, 0);
		vec1.transpose();
	}
	return dotValue;
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
