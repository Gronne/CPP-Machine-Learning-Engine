#include "Matrix.h"
#include <stdexcept>
#include <string>
#include <numeric>
#include <iostream>

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


Matrix& Matrix::getRow(int row) const
{
	checkForInvalidRowOrColumn(row, 0);
	
	Matrix *resultMatrix = new Matrix();
	constructRowMatrix(resultMatrix, 1);
	
	insertRow(resultMatrix, 0, row);
	return *resultMatrix;
}


Matrix& Matrix::getRows(std::vector<int> rows) const 
{
	for (size_t row : rows)
		checkForInvalidRowOrColumn(row, 0);

	Matrix *resultMatrix = new Matrix();
	constructRowMatrix(resultMatrix, rows.size());
	
	for (size_t rowCounter = 0; rowCounter < rows.size(); rowCounter++)
		insertRow(resultMatrix, rowCounter, rows[rowCounter]);

	return *resultMatrix;
}

void Matrix::constructRowMatrix(Matrix *resultMatrix, int rows) const
{
	if (_transposeFlag == false) resultMatrix->resizeMatrix(rows, _columns);
	else resultMatrix->resizeMatrix(rows, _rows);
}


void Matrix::insertRow(Matrix *setMatrix, int setMatrixRow, int getMatrixRow) const
{
	for (size_t column = 0; column < setMatrix->getNumberOfColumns(); column++)
		setMatrix->setEntry(setMatrixRow, column, getEntry(getMatrixRow, column));
}


Matrix& Matrix::getColumn(int column) const 
{
	checkForInvalidRowOrColumn(0, column);

	Matrix *resultMatrix = new Matrix();
	constructColumnMatrix(resultMatrix, 1);

	insertColumn(resultMatrix, 0, column);
	return *resultMatrix;
}


Matrix& Matrix::getColumns(std::vector<int> columns) const 
{
	for (size_t column : columns)
		checkForInvalidRowOrColumn(0, column);

	Matrix *resultMatrix = new Matrix();
	constructColumnMatrix(resultMatrix, columns.size());

	for (size_t columnCounter = 0; columnCounter < columns.size(); columnCounter++)
		insertColumn(resultMatrix, columnCounter, columns[columnCounter]);

	return *resultMatrix;
}


void Matrix::constructColumnMatrix(Matrix *resultMatrix, int columns) const 
{
	if (_transposeFlag == false) resultMatrix->resizeMatrix(_rows, columns);
	else resultMatrix->resizeMatrix(_columns, columns);
}


void Matrix::insertColumn(Matrix *setMatrix, int setMatrixColumn, int getMatrixColumn) const 
{
	for (size_t row = 0; row < setMatrix->getNumberOfRows(); row++)
		setMatrix->setEntry(row, setMatrixColumn, getEntry(row, getMatrixColumn));
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


void Matrix::setRow(int rowNumber, const Matrix *rowData)
{
	checkForInvalidRowOrColumn(rowNumber, rowData->getNumberOfColumns() - 1);
	if (getNumberOfColumns() != rowData->getNumberOfColumns())
		throw std::exception("Number of columns does not match the matrixs dimensions");

	for (size_t column = 0; column < getNumberOfColumns(); column++)
		setEntry(rowNumber, column, rowData->getEntry(0, column));
}


void Matrix::setRow(int rowNumber, std::vector<double> rowData)
{
	checkForInvalidRowOrColumn(rowNumber, rowData.size() - 1);
	if (getNumberOfColumns() != rowData.size())
		throw std::exception("Number of columns does not match the matrixs dimensions");

	for (size_t column = 0; column < getNumberOfColumns(); column++)
		setEntry(rowNumber, column, rowData[column]);
}


void Matrix::setColumn(int columnNumber, const Matrix *columnData)
{
	checkForInvalidRowOrColumn(columnData->getNumberOfRows() - 1, columnNumber);
	if (getNumberOfRows() != columnData->getNumberOfRows())
		throw std::exception("Number of rows does not match the matrixs dimensions");

	for (size_t row = 0; row < getNumberOfRows(); row++)
		setEntry(row, columnNumber, columnData->getEntry(row, 0));
}


void Matrix::setColumn(int columnNumber, std::vector<double> columnData)
{
	checkForInvalidRowOrColumn(columnData.size() - 1, columnNumber);
	if (getNumberOfRows() != columnData.size())
		throw std::exception("Number of rows does not match the matrixs dimensions");

	for (size_t row = 0; row < getNumberOfRows(); row++)
		setEntry(row, columnNumber, columnData[row]);
}


void Matrix::transpose()
{
	_transposeFlag = !_transposeFlag;
}


void Matrix::scale(double scaleingsFactor)
{
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t column = 0; column < getNumberOfColumns(); column++)
			setEntry(row, column, scaleingsFactor * getEntry(row, column));
}


void Matrix::print()
{
	std::vector<int> maxValueInRow = findMaxValueInRow();
	int fullWidth = std::accumulate(maxValueInRow.begin(), maxValueInRow.end(), 0) + getNumberOfColumns()*3 + 1;
	printMatrix(maxValueInRow, fullWidth);
}

void Matrix::operator=(const Matrix & obj)
{
		this->setMatrix(&obj);
}

Matrix & Matrix::operator+(const Matrix & obj)
{
	if (obj.getNumberOfRows() != getNumberOfRows() || obj.getNumberOfColumns() != getNumberOfColumns())
		throw std::exception("Matrix dimensions does not comply");
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t column = 0; column < getNumberOfColumns(); column++)
			returnObj->setEntry(row, column, getEntry(row, column) + obj.getEntry(row, column));
	return *returnObj;
}

Matrix & Matrix::operator-(const Matrix & obj)
{
	if (obj.getNumberOfRows() != getNumberOfRows() || obj.getNumberOfColumns() != getNumberOfColumns())
		throw std::exception("Matrix dimensions does not comply");
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t column = 0; column < getNumberOfColumns(); column++)
			returnObj->setEntry(row, column, getEntry(row, column) - obj.getEntry(row, column));
	return *returnObj;
}

Matrix & Matrix::operator*(const double value)
{
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	*returnObj = *this;
	returnObj->scale(value);
	return *returnObj;
}

Matrix & Matrix::operator*(const Matrix &obj)
{
	if (getNumberOfColumns() != obj.getNumberOfRows())
		throw std::exception("Matrix Dimensions does not comply");
	return multiplication(obj);
}

Matrix & Matrix::operator/(const double value)
{
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	*returnObj = *this;
	returnObj->scale(1/value);
	return *returnObj;
}


void Matrix::printMatrix(std::vector<int> maxValueInRow, int fullWidth)
{
	for (size_t row = 0; row < getNumberOfRows(); row++)
	{
		printLine(fullWidth);
		printRow(row, maxValueInRow);
	}
	printLine(fullWidth);
}

void Matrix::printLine(int width) {
	for (size_t cursor = 0; cursor < width; cursor++)
		std::cout << "-";
	std::cout << std::endl;
}

void Matrix::printRow(int row, std::vector<int> maxValueInRow)
{
	for (size_t column = 0; column < getNumberOfColumns(); column++)
	{
		std::cout << "|";
		printEntry(row, column, maxValueInRow);
	}
	std::cout << "|" << std::endl;
}

void Matrix::printEntry(int row, int column, std::vector<int>maxValueInRow)
{
	std::cout << " ";
	size_t space = 0 + unevenSpace(row, column, maxValueInRow);

	for (; space < getDiffWidth(row, column, maxValueInRow) / 2; space++)
		std::cout << " ";

	std::cout << eraseZeros(std::to_string(getEntry(row, column)));
	for (size_t space = 0; space < getDiffWidth(row, column, maxValueInRow) / 2; space++)
		std::cout << " ";
	std::cout << " ";
}

bool Matrix::unevenSpace(int row, int column, std::vector<int>maxValueInRow)
{
	return ((getDiffWidth(row, column, maxValueInRow)/ 2) - std::floor((getDiffWidth(row, column, maxValueInRow)) / 2) == 0.5);
}

double Matrix::getDiffWidth(int row, int column, std::vector<int>maxValueInRow)
{
	return (maxValueInRow[column] - numberWidth(getEntry(row, column)));
}

std::vector<int> Matrix::findMaxValueInRow()
{
	std::vector<int> maxValueInRow;
	for (size_t column = 0; column < getNumberOfColumns(); column++)
		maxValueInRow.push_back(getWidestNumberInRow(column));
	return maxValueInRow;
}

double Matrix::getWidestNumberInRow(int column)
{
	double widestValue = 0;
	for (size_t row = 0; row < getNumberOfRows(); row++)
		if (numberWidth(widestValue) < numberWidth(getEntry(row, column)))
			widestValue = getEntry(row, column);
	return numberWidth(widestValue);
}


double Matrix::numberWidth(double value)
{
	return eraseZeros(std::to_string(value)).size();
}

std::string Matrix::eraseZeros(std::string string)
{
	int cursor = 0;
	if (string.find(".") != std::string::npos)
		for (; string[string.size() - (1 + cursor)] == '0'; cursor++);
	if (string[string.size() - (1 + cursor)] == '.')
		cursor++;
	return string.substr(0, string.size() - (cursor));

}

Matrix & Matrix::multiplication(const Matrix &obj)
{
	Matrix *returnMatrix = new Matrix(getNumberOfRows(), obj.getNumberOfColumns());
	for (size_t row = 0; row < returnMatrix->getNumberOfRows(); row++)
		for (size_t column = 0; column < returnMatrix->getNumberOfColumns(); column++)
			returnMatrix->setEntry(row, column, vectorMultiplication(getRow(row), obj.getColumn(column)));
	return *returnMatrix;
}

double Matrix::vectorMultiplication(Matrix &rowMatrix, Matrix &columnMatrix)
{
	double result = 0;
	for (size_t cursor = 0; cursor < rowMatrix.getNumberOfColumns(); cursor++)
		result += rowMatrix.getEntry(0, cursor) * columnMatrix.getEntry(cursor, 0);
	return result;
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
