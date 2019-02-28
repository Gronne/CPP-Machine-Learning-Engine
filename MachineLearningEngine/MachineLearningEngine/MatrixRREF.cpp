#include "MatrixRREF.h"

MatrixRREF::MatrixRREF()
{

}


MatrixRREF::~MatrixRREF()
{

}


Matrix & MatrixRREF::rowReduceUnder(const Matrix &matrix)
{
	Matrix *resultMatrix = new Matrix();
	*resultMatrix = matrix;

	int smallestSize = (matrix.getNumberOfColumns() < matrix.getNumberOfRows()) ? matrix.getNumberOfColumns() : matrix.getNumberOfRows();
	for (size_t col = 0; col < smallestSize; col++)
		reduceColumnUnder(*resultMatrix, col, smallestSize);


	return *resultMatrix;
}


Matrix & MatrixRREF::rowReduceOver(Matrix &matrix)
{
	Matrix *resultMatrix = new Matrix();
	*resultMatrix = matrix;

	int smallestSize = (matrix.getNumberOfColumns() < matrix.getNumberOfRows()) ? matrix.getNumberOfColumns() : matrix.getNumberOfRows();
	for (size_t col = smallestSize-1; col > 0; col--)
		reduceColumnOver(*resultMatrix, col);
	
	for (size_t row = 0; row < smallestSize; row++)
		minimizeRow(*resultMatrix, row, resultMatrix->getEntry(row, row));
	checkForFreePivot(*resultMatrix);
	return *resultMatrix;
}

void MatrixRREF::checkForFreePivot(Matrix &matrix)
{
	if (matrix.getNumberOfColumns() > 2)
		if (matrix.getEntry(0, matrix.getNumberOfColumns() - 2) != 0 && matrix.getEntry(matrix.getNumberOfRows()-1, matrix.getNumberOfColumns()-2) == 0)
			for (size_t row = 0; row < matrix.getNumberOfRows()-1; row++)
				matrix.setEntry(row, matrix.getNumberOfColumns() - 1, 0);
}


void MatrixRREF::reduceColumnUnder(Matrix &matrix, int column, int smallestValue)
{
	checkForZeroRow(matrix, column);
	std::vector<double> divideVector;
	sameSizeColumnUnder(matrix, column, divideVector);
	for (size_t row = 1; column + row < matrix.getNumberOfRows(); row++)
		substractRow(matrix, column, column + row);
	for (size_t row = column; row < smallestValue; row++)
		minimizeRow(matrix, row, divideVector[row-column]);
}


void MatrixRREF::reduceColumnOver(Matrix &matrix, int column)
{
	std::vector<double> divideVector;
	sameSizeColumnOver(matrix, column, divideVector);
	for (size_t row = column; row > 0; row--)
		substractRow(matrix, column, column - row);
	for (size_t row = column; row > 0; row--)
		minimizeRow(matrix, row, divideVector[column - row]);
}


void MatrixRREF::checkForZeroRow(Matrix &matrix, int row)
{
	if(row != matrix.getNumberOfRows() - 1)
		if (matrix.getEntry(row, row) == 0 && matrix.getEntry(row + 1, row) != 0)
			substractRow(matrix, row + 1, row);
}


void MatrixRREF::sameSizeColumnUnder(Matrix &matrix, int column, std::vector<double> &divideVector)
{
	double multiplicationMaxValue = 1;
	for (size_t row = column; row < matrix.getNumberOfRows(); row++)
		if(matrix.getEntry(row, column) != 0)
			multiplicationMaxValue *= matrix.getEntry(row, column);

	for (size_t row = column; row < matrix.getNumberOfRows(); row++)
		if (matrix.getEntry(row, column) != 0)
		{
			double multiplicationValue = multiplicationMaxValue / matrix.getEntry(row, column);
			divideVector.push_back(multiplicationValue);
			for (size_t columnEntry = 0; columnEntry < matrix.getNumberOfColumns(); columnEntry++)
				matrix.setEntry(row, columnEntry, matrix.getEntry(row, columnEntry) * multiplicationValue);
		}
		else 
			divideVector.push_back(1);
}

void MatrixRREF::sameSizeColumnOver(Matrix &matrix, int column, std::vector<double> &divideVector)
{
	double multiplicationMaxValue = 1;
	for (size_t row = 0; row <= column; row++)
		if (matrix.getEntry(row, column) != 0)
			multiplicationMaxValue *= matrix.getEntry(row, column);

	for (size_t row = 0; row <= column; row++)
		if (matrix.getEntry(row, column) != 0)
		{
			double multiplicationValue = multiplicationMaxValue / matrix.getEntry(row, column);
			divideVector.push_back(multiplicationValue);
			for (size_t columnEntry = 0; columnEntry < matrix.getNumberOfColumns(); columnEntry++)
				matrix.setEntry(row, columnEntry, matrix.getEntry(row, columnEntry) * multiplicationValue);
		}
}


void MatrixRREF::substractRow(Matrix &matrix, int primaryRow, int secondaryRow)
{
	matrix.setRow(secondaryRow, &(matrix.getRow(secondaryRow) - matrix.getRow(primaryRow)));
}


void MatrixRREF::minimizeRow(Matrix &matrix, int row, double divideValue)
{
	if(matrix.getEntry(row, row) != 0)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			matrix.setEntry(row, col, matrix.getEntry(row, col) / divideValue);
}


