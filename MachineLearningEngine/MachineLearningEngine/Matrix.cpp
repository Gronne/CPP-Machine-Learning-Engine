#include "Matrix.h"
#include <stdexcept>

Matrix::Matrix(int rows, int columns)
{
	setMatrixSize(rows, columns);
}

Matrix::~Matrix()
{
	//deleteMatrix();
}

int Matrix::getNumberOfRows()
{
	if (_transposeFlag == false)
		return _rows;
	else
		return _columns;
}

int Matrix::getNumberOfColumns()
{
	if (_transposeFlag == true)
		return _rows;
	else
		return _columns;
}

void Matrix::setMatrixSize(int rows, int columns)
{
	deleteMatrix();
	resizeMatrix(rows, columns);
}

bool Matrix::deleteMatrix()
{
	if (_rows != 0 && _columns != 0)
	{
		for (size_t i = 0; i < _columns; i++)
			delete[] _matrix[i];
		delete[] _matrix;

		_rows = 0;
		_columns = 0;
		return true;
	}
	else
		return false;
}

void Matrix::setEntry(int row, int column, double value)
{
	checkForInvalidRowOrColumn(row, column);
	if (_transposeFlag == false)
		_matrix[row][column] = value;
	else 
		_matrix[column][row] = value;
		
}

void Matrix::setMatrix(Matrix newMatrix)
{
	if (_matrix == newMatrix._matrix)
		throw std::exception("Can not be set to it self");
	setMatrixSize(newMatrix.getNumberOfRows(), newMatrix.getNumberOfColumns());
	for (size_t row = 0; row < newMatrix.getNumberOfRows(); row++)
		for (size_t column = 0; column < newMatrix.getNumberOfColumns(); column++)
			setEntry(row, column, newMatrix.getEntry(row, column));
}

void Matrix::checkForInvalidRowOrColumn(int row, int column)
{
	if (_transposeFlag == false) 
	{
		if ((row < 0 || _rows <= row) || (column < 0 || _columns <= column))
			throw std::exception("Out of range");
	}
	else
	{
		if ((row < 0 || _columns <= row) || (column < 0 || _rows <= column))
			throw std::exception("Out of range");
	}
}

double Matrix::getEntry(int row, int column)
{
	checkForInvalidRowOrColumn(row, column);
	return (_transposeFlag == false) ? _matrix[row][column] : _matrix[column][row];
}

void Matrix::transpose()
{
	_transposeFlag = !_transposeFlag;
}

void Matrix::constructMatrix()
{
	if ((_rows > 0 && _columns == 0) || (_rows == 0 && _columns > 0))
		throw std::exception("Not possible to have an unbalanced matrix");

	//Construct
	_matrix = new double*[_columns];
	for (int i = 0; i < _columns; ++i)
		_matrix[i] = new double[_rows];
}

void Matrix::setRows(int rows)
{
	if(_transposeFlag == false)
		(rows > 0) ? _rows = rows : throw std::exception("Not possible with minus rows");
	else
		(rows > 0) ? _columns = rows : throw std::exception("Not possible with minus columns");
		
}

void Matrix::setColumns(int columns)
{
	if(_transposeFlag == false)
		(columns > 0) ? _columns = columns : throw std::exception("Not possible with minus columns");
	else
		(columns > 0) ? _rows = columns : throw std::exception("Not possible with minus rows");
}

void Matrix::resizeMatrix(int rows, int columns)
{
	setRows(rows);
	setColumns(columns);
	constructMatrix();
}

