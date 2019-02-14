#include "Matrix.h"
#include <stdexcept>

Matrix::Matrix(int rows, int columns)
{
	resizeMatrix(rows, columns);
}

Matrix::~Matrix()
{
	deleteMatrix();
}

int Matrix::getNumberOfRows() const
{
	if (_transposeFlag == false)
		return _rows;
	else
		return _columns;
}

int Matrix::getNumberOfColumns() const 
{
	if (_transposeFlag == true)
		return _rows;
	else
		return _columns;
}

Matrix& Matrix::getRow(int row)
{
	checkForInvalidRowOrColumn(row, 0);
	Matrix *resultMatrix = new Matrix();

	if (_transposeFlag == false) resultMatrix->resizeMatrix(1, _columns);
	else resultMatrix->resizeMatrix(1, _rows);
	
	insertRow(resultMatrix, 0, row);
	return *resultMatrix;
}

void Matrix::insertRow(Matrix *setMatrix, int setMatrixRow, int getMatrixRow)
{
	for (size_t column = 0; column < setMatrix->getNumberOfColumns(); column++)
		setMatrix->setEntry(setMatrixRow, column, getEntry(getMatrixRow, column));
}

Matrix& Matrix::getRows(std::vector<int> rows)
{
	for (size_t row : rows)
		checkForInvalidRowOrColumn(row, 0);

	Matrix *resultMatrix;
	if (_transposeFlag == false) resultMatrix = new Matrix(rows.size(), _columns);
	else resultMatrix = new Matrix(rows.size(), _rows);
	
	for (size_t rowCounter = 0; rowCounter < rows.size(); rowCounter++)
		insertRow(resultMatrix, rowCounter, rows[rowCounter]);

	return *resultMatrix;
}

Matrix& Matrix::getColumn(int column)
{
	checkForInvalidRowOrColumn(0, column);
	Matrix *resultMatrix = new Matrix();

	if (_transposeFlag == false) resultMatrix->resizeMatrix(_rows, 1);
	else resultMatrix->resizeMatrix(_columns, 1);

	insertColumn(resultMatrix, 0, column);
	return *resultMatrix;
}

void Matrix::insertColumn(Matrix *setMatrix, int setMatrixColumn, int getMatrixColumn)
{
	for (size_t row = 0; row < setMatrix->getNumberOfRows(); row++)
		setMatrix->setEntry(row, setMatrixColumn, getEntry(row, getMatrixColumn));
}

Matrix& Matrix::getColumns(std::vector<int> columns)
{
	for (size_t column : columns)
		checkForInvalidRowOrColumn(0, column);

	Matrix *resultMatrix;
	if (_transposeFlag == false) resultMatrix = new Matrix(_rows, columns.size());
	else resultMatrix = new Matrix(_columns, columns.size());

	for (size_t columnCounter = 0; columnCounter < columns.size(); columnCounter++)
		insertColumn(resultMatrix, columnCounter, columns[columnCounter]);

	return *resultMatrix;
}

void Matrix::setMatrixSize(int rows, int columns)
{
	deleteMatrix();
	resizeMatrix(rows, columns);
}

void Matrix::deleteMatrix()
{
	try
	{
		for (size_t cursor = 0; cursor < _rows; cursor++)
			delete[] _matrix[cursor];
		delete[] _matrix;
	}
	catch(std::exception ex)
	{
		throw new std::exception("Delete Matrix memeory problem");
	}
}

void Matrix::setEntry(int row, int column, double value)
{
	checkForInvalidRowOrColumn(row, column);
	if (_transposeFlag == false)
		_matrix[row][column] = value;
	else 
		_matrix[column][row] = value;
}

void Matrix::setMatrix(const Matrix *newMatrix)
{
	if (_matrix == newMatrix->_matrix)
		throw std::exception("Can not be set to it self");

	setMatrixSize(newMatrix->getNumberOfRows(), newMatrix->getNumberOfColumns());

	for (size_t row = 0; row < newMatrix->getNumberOfRows(); row++)
		for (size_t column = 0; column < newMatrix->getNumberOfColumns(); column++)
			setEntry(row, column, newMatrix->getEntry(row, column));
}

void Matrix::checkForInvalidRowOrColumn(int row, int column) const
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

double Matrix::getEntry(int row, int column) const
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

	_matrix = new double*[_rows];
	for (int i = 0; i < _rows; ++i)
		_matrix[i] = new double[_columns];
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

