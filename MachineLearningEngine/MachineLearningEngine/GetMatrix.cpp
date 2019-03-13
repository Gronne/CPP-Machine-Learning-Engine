#include "GetMatrix.h"



GetMatrix::GetMatrix()
{
}


GetMatrix::~GetMatrix()
{
}

int GetMatrix::numberOfPivots(const Matrix &matrix)
{
	TypeMatrix TM;
	return TM.rank(matrix);
}

Matrix & GetMatrix::pivotRows(const Matrix &matrix)
{
	bool zeroes = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (matrix.getEntry(row, col) != 0)
			{
				zeroes = false;
				break;
			}
	if (zeroes)
		throw std::exception("No Pivots");

	MatrixRREF RREF;
	if (RREF.checkForFullDependentMatrix(matrix))
		return matrix.getRow(0);

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	Matrix *returnMatrix = new Matrix();
	*buffer = BMO.getEchelonForm(matrix);

	bool firstTime = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (buffer->getEntry(row, col) != 0)
			{
				if (firstTime)
					*returnMatrix = matrix.getRow(row);
				else
					returnMatrix->appendMatrix(matrix.getRow(row), 1);
				firstTime = false;
				break;
			}

	delete buffer;
	return *returnMatrix;
}

Matrix & GetMatrix::pivotColumns(const Matrix &matrix)
{
	bool zeroes = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (matrix.getEntry(row, col) != 0)
			{
				zeroes = false;
				break;
			}
	if (zeroes)
		throw std::exception("No Pivots");

	MatrixRREF RREF;
	if (RREF.checkForFullDependentMatrix(matrix))
		return matrix.getColumn(0);

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	Matrix *returnMatrix = new Matrix();
	*buffer = BMO.getEchelonForm(matrix);

	bool firstTime = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (buffer->getEntry(row, col) != 0)
			{
				if (firstTime)
					*returnMatrix = matrix.getColumn(col);
				else
					returnMatrix->appendMatrix(matrix.getColumn(col));
				firstTime = false;
				break;
			}

	delete buffer;
	return *returnMatrix;
}

Matrix & GetMatrix::span(const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	return *returnMatrix;
}

double GetMatrix::span(const Matrix &, const Matrix &)
{
	return 0.0;
}

double GetMatrix::innerProductSpace(const Matrix &)
{
	return 0.0;
}

Matrix & GetMatrix::getBasicVectors(const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	return *returnMatrix;
}

Matrix & GetMatrix::getTransformationMatrix(const Matrix &matrix1, const Matrix &matrix2)
{
	Matrix *returnMatrix = new Matrix();
	return *returnMatrix;
}
