#include "MatrixRREF.h"


Matrix & MatrixRREF::rowReduceUnder(const Matrix &matrix)
{
	if (checkForFullDependentMatrix(matrix))
		throw std::exception("Your matrix is full dependent and can't be reduced");

	Matrix *resultMatrix = new Matrix(matrix);
	return reduceRowsUnder(*resultMatrix);
}


Matrix & MatrixRREF::rowReduceOver(Matrix &matrix)
{
	Matrix *resultMatrix = new Matrix(matrix);

	reduceRowsOver(*resultMatrix);
	minimizeAllRows(*resultMatrix);

	int rowNr = findPivotRow(*resultMatrix);
	if (rowNr != -1)
		normalizePivotColumn(*resultMatrix, rowNr);

	return *resultMatrix;
}

int MatrixRREF::findPivotRow(const Matrix &matrix)
{
	int smallestSize = matrix.getSmallestSize();
	for (int row = 0; row < smallestSize; ++row)
		if (matrix.getEntry(row, row) == 0)
			return row;
	return -1;
}
#include <iostream>

void MatrixRREF::normalizePivotColumn(Matrix &matrix, int rowNr)
{
	int pivotColumn = firstPivotInColumn(matrix, rowNr);
	if(pivotColumn != matrix.getNumberOfColumns())
		normalizeColumn(matrix, rowNr, pivotColumn);
}

int MatrixRREF::firstPivotInColumn(Matrix &matrix, int rowNr)
{
	int columnNr = 0;
	for (;columnNr < matrix.getNumberOfColumns(); ++columnNr)
		if (matrix.getEntry(rowNr, columnNr) != 0)
			break;

	return columnNr;
}

void MatrixRREF::normalizeColumn(Matrix &matrix, int pivotRow, int column)
{
	Matrix divisionRow = matrix.getRow(pivotRow) / matrix.getEntry(pivotRow, column);

	for (int row = 0; row < matrix.getNumberOfRows(); ++row)
		if (row != pivotRow)
		{
			Matrix newRow = matrix.getRow(row) - (divisionRow * matrix.getEntry(row, column));
			matrix.setRow(row, newRow);
		}
	matrix.setRow(pivotRow, divisionRow);
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
		else
			divideVector.push_back(1);
}


void MatrixRREF::substractRow(Matrix &matrix, int primaryRow, int mutableRow)
{
	matrix.setRow(mutableRow, (matrix.getRow(mutableRow) - matrix.getRow(primaryRow)));
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


