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

	for (size_t col = 0; col < matrix.getNumberOfRows()-1; col++)
		reduceColumnUnder(*resultMatrix, col);

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

	return *resultMatrix;
}


void MatrixRREF::reduceColumnUnder(Matrix &matrix, int column)
{
	chechForZeroRow(matrix, column);
	std::vector<double> divideVector;
	sameSizeColumnUnder(matrix, column, divideVector);
	for (size_t row = 1; column + row < matrix.getNumberOfRows(); row++)
		substractRow(matrix, column, column + row);
	for (size_t row = column; row < matrix.getNumberOfRows(); row++)
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


void MatrixRREF::chechForZeroRow(Matrix &matrix, int row)
{
	if(matrix.getEntry(row + 1, row) == 0)
		for (size_t i = row + 2; i < matrix.getNumberOfRows(); i++)
			if (matrix.getEntry(i, row) != 0)
			{
				substractRow(matrix, i, row + 1);
				break;
			}
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
	for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
		matrix.setEntry(row, col, matrix.getEntry(row, col) / (divideValue >= 0 ? divideValue : -divideValue));
}


