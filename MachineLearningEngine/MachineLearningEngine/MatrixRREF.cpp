#include "MatrixRREF.h"


Matrix & MatrixRREF::rowReduceUnder(const Matrix &matrix)
{
	if (checkForFullDependentMatrix(matrix))
		throw std::exception("Your matrix is full dependent and can't be reduced");

	Matrix *resultMatrix = new Matrix();
	*resultMatrix = matrix;

	return reduceRowsUnder(*resultMatrix);
}


Matrix & MatrixRREF::rowReduceOver(Matrix &matrix)
{
	Matrix *resultMatrix = new Matrix();
	*resultMatrix = matrix;

	reduceRowsOver(*resultMatrix);
	minimizeAllRows(*resultMatrix);
	checkForFreePivot(*resultMatrix, resultMatrix->getSmallestSize());

	return *resultMatrix;
}

void MatrixRREF::checkForFreePivot(Matrix &matrix, int smallestSize)
{
	if (matrix.getNumberOfColumns() > 2)
		if(matrix.getEntry(0, smallestSize - 1) != 0 && matrix.getEntry(smallestSize - 1, smallestSize - 1) == 0)
			for (size_t row = 0; row < matrix.getNumberOfRows()-1; ++row)
				matrix.setEntry(row, matrix.getNumberOfColumns() - 1, 0);
}

bool MatrixRREF::checkForFullDependentMatrix(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() == 1)
		return false;

	Matrix *bufferMatrix = new Matrix();
	*bufferMatrix = matrix;

	sameSizeColumnUnder(*bufferMatrix, 0, *(new std::vector<double>));
	bool returnBool = checkIfAllRowsIsEqual(*bufferMatrix);
		
	delete bufferMatrix;
	return returnBool;
}

bool MatrixRREF::checkIfAllRowsIsEqual(const Matrix &matrix)
{
	bool returnBool = true;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		if (matrix.getRow(0) != matrix.getRow(row))
			returnBool = false;

	return returnBool;
}

Matrix & MatrixRREF::reduceRowsUnder(Matrix &matrix)
{
	int smallestSize = matrix.getSmallestSize();
	for (size_t col = 0; col < smallestSize; ++col)
		reduceColumnUnder(matrix, col, smallestSize);

	return matrix;
}

Matrix & MatrixRREF::reduceRowsOver(Matrix &matrix)
{
	for (size_t col = matrix.getSmallestSize() - 1; col > 0; --col)
		reduceColumnOver(matrix, col);
	return matrix;
}

void MatrixRREF::reduceColumnUnder(Matrix &matrix, int column, int smallestValue)
{
	correctForZeroRow(matrix, column);

	std::vector<double> divideVector;
	sameSizeColumnUnder(matrix, column, divideVector);

	for (size_t row = 1; column + row < matrix.getNumberOfRows(); ++row)
		if(matrix.getEntry(column + row, column) != 0)
			substractRow(matrix, column, column + row);
	
	for (size_t row = column; row < smallestValue; ++row)
		minimizeRow(matrix, row, divideVector[row-column]);
}


void MatrixRREF::reduceColumnOver(Matrix &matrix, int column)
{
	correctForZeroRowOver(matrix, column);

	std::vector<double> divideVector;
	sameSizeColumnOver(matrix, column, divideVector);

	for (size_t row = column; row > 0; --row)
		if (matrix.getEntry(column - row, column) != 0)
			substractRow(matrix, column, column - row);

	for (size_t row = column; row > 0; --row)
		if (matrix.getEntry(column - row, column) != 0)
			minimizeRow(matrix, row, divideVector[column - row]);
}


void MatrixRREF::correctForZeroRow(Matrix &matrix, int presentRow)
{
	if(presentRow != matrix.getNumberOfRows() - 1)
		for (size_t futureRow = presentRow + 1; futureRow < matrix.getNumberOfRows(); ++futureRow)
			if (matrix.getEntry(presentRow, presentRow) == 0 && matrix.getEntry(futureRow, presentRow) != 0)
				substractRow(matrix, futureRow, presentRow);
}

void MatrixRREF::correctForZeroRowOver(Matrix &matrix, int presentRow)
{
	if (presentRow != 0)
		for (int previousRow = presentRow - 1; previousRow >= 0; --previousRow)
			if (matrix.getEntry(presentRow, presentRow) == 0 && matrix.getEntry(previousRow, presentRow) != 0)
				if(checkIfPreColsIsAllZero(matrix, presentRow, previousRow))
					substractRow(matrix, previousRow, presentRow);
}

bool MatrixRREF::checkIfPreColsIsAllZero(const Matrix &matrix, int presentRow, int previousRow)
{
	bool zeros = true;

	for (int col = presentRow - 1; col >= 0; --col)
		if (matrix.getEntry(previousRow, col) != 0)
			zeros = false;

	return zeros;
}

void MatrixRREF::sameSizeColumnUnder(Matrix &matrix, int column, std::vector<double> &divideVector)
{
	double multiplicationMaxValue = columnProduct(matrix, column, column, matrix.getNumberOfRows());

	for (size_t row = column; row < matrix.getNumberOfRows(); ++row)
		if (matrix.getEntry(row, column) != 0)
		{
			double multiplicationValue = multiplicationMaxValue / matrix.getEntry(row, column);

			divideVector.push_back(multiplicationValue);
			matrix.setRow(row, matrix.getRow(row) * multiplicationValue);
		}
		else 
			divideVector.push_back(1);
}

double MatrixRREF::columnProduct(const Matrix &matrix, int column, int rowFrom, int rowTo)
{
	double product = 1;

	for (size_t row = rowFrom; row < rowTo; ++row)
		if (matrix.getEntry(row, column) != 0)
			product *= matrix.getEntry(row, column);

	return product;
}

void MatrixRREF::sameSizeColumnOver(Matrix &matrix, int column, std::vector<double> &divideVector)
{
	double multiplicationMaxValue = columnProduct(matrix, column, 0, column+1);

	for (size_t row = 0; row <= column; ++row)
		if (matrix.getEntry(row, column) != 0)
		{
			double multiplicationValue = multiplicationMaxValue / matrix.getEntry(row, column);
			
			divideVector.push_back(multiplicationValue);
			matrix.setRow(row, matrix.getRow(row) * multiplicationValue);
		}
}


void MatrixRREF::substractRow(Matrix &matrix, int primaryRow, int secondaryRow)
{
	matrix.setRow(secondaryRow, (matrix.getRow(secondaryRow) - matrix.getRow(primaryRow)));
}

Matrix & MatrixRREF::minimizeAllRows(Matrix &matrix)
{
	for (size_t row = 0; row < matrix.getSmallestSize(); ++row)
		minimizeRow(matrix, row, matrix.getEntry(row, row));
	return matrix;
}


void MatrixRREF::minimizeRow(Matrix &matrix, int row, double divideValue)
{
	if (matrix.getEntry(row, row) != 0)
		matrix.setRow(row, matrix.getRow(row) / divideValue);
}


