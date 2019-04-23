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

Matrix & Matrix::getRows(const Matrix &matrix) const
{
	if (matrix.getNumberOfColumns() != 1 && matrix.getNumberOfRows() != 1)
		throw std::exception("The matrix exceeds the requested number of rows or columns");
	
	bool row = false;
	if (matrix.getNumberOfColumns() < matrix.getNumberOfRows())
		row = true;

	std::vector<int> vec;
	for (size_t index = 0; index < ((row) ? matrix.getNumberOfRows() : matrix.getNumberOfColumns()); index++)
		vec.push_back(((row) ? matrix.getEntry(index, 0) : matrix.getEntry(0, index)));

	return getRows(vec);
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

Matrix & Matrix::getColumns(const Matrix &matrix) const
{
	if (matrix.getNumberOfColumns() != 1 && matrix.getNumberOfRows() != 1)
		throw std::exception("The matrix exceeds the requested number of rows or columns");

	bool row = false;
	if (matrix.getNumberOfColumns() < matrix.getNumberOfRows())
		row = true;

	std::vector<int> vec;
	for (size_t index = 0; index < ((row) ? matrix.getNumberOfRows() : matrix.getNumberOfColumns()); index++)
		vec.push_back(((row) ? matrix.getEntry(index, 0) : matrix.getEntry(0, index)));

	return getColumns(vec);
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

void Matrix::deleteRow(int row)
{
	if (row < 0 || row >= getNumberOfRows())
		throw std::exception("Can't delete an row that doesn't exist");

	Matrix *matrix = new Matrix(getNumberOfRows() - 1, getNumberOfColumns());
	for (size_t internalCol = 0; internalCol < getNumberOfColumns(); internalCol++)
		for (size_t internalRow = 0, matrixRow = 0; internalRow < getNumberOfRows(); internalRow++)
			if (internalRow != row)
				matrix->setEntry(matrixRow++, internalCol, getEntry(internalRow, internalCol));

	setMatrix(matrix);
	delete matrix;
}

void Matrix::deleteColumn(int col)
{
	if (col < 0 || col >= getNumberOfColumns())
		throw std::exception("Can't delete an row that doesn't exist");

	Matrix *matrix = new Matrix(getNumberOfRows(), getNumberOfColumns()-1);
	for (size_t internalRow = 0; internalRow < getNumberOfRows(); internalRow++)
		for (size_t internalCol = 0, matrixCol = 0; internalCol < getNumberOfColumns(); internalCol++)
			if (internalCol != col)
				matrix->setEntry(internalRow, matrixCol++, getEntry(internalRow, internalCol));

	setMatrix(matrix);
	delete matrix;
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


void Matrix::setRow(int rowNumber, const Matrix &rowData)
{
	checkForInvalidRowOrColumn(rowNumber, rowData.getNumberOfColumns() - 1);
	if (getNumberOfColumns() != rowData.getNumberOfColumns())
		throw std::exception("Number of columns does not match the matrixs dimensions");

	for (size_t column = 0; column < getNumberOfColumns(); column++)
		setEntry(rowNumber, column, rowData.getEntry(0, column));
}


void Matrix::setRow(int rowNumber, std::vector<double> rowData)
{
	checkForInvalidRowOrColumn(rowNumber, rowData.size() - 1);
	if (getNumberOfColumns() != rowData.size())
		throw std::exception("Number of columns does not match the matrixs dimensions");

	for (size_t column = 0; column < getNumberOfColumns(); column++)
		setEntry(rowNumber, column, rowData[column]);
}


void Matrix::setColumn(int columnNumber, const Matrix &columnData)
{
	checkForInvalidRowOrColumn(columnData.getNumberOfRows() - 1, columnNumber);
	if (getNumberOfRows() != columnData.getNumberOfRows())
		throw std::exception("Number of rows does not match the matrixs dimensions");

	for (size_t row = 0; row < getNumberOfRows(); row++)
		setEntry(row, columnNumber, columnData.getEntry(row, 0));
}


void Matrix::setColumn(int columnNumber, std::vector<double> columnData)
{
	checkForInvalidRowOrColumn(columnData.size() - 1, columnNumber);
	if (getNumberOfRows() != columnData.size())
		throw std::exception("Number of rows does not match the matrixs dimensions");

	for (size_t row = 0; row < getNumberOfRows(); row++)
		setEntry(row, columnNumber, columnData[row]);
}


Matrix & Matrix::transpose(bool copyFlag)
{
	if (!copyFlag)
	{
		_transposeFlag = !_transposeFlag;
		return *this;
	}
	else
	{
		Matrix *copy = new Matrix();
		*copy = *this;
		return copy->transpose();
	}
}


void Matrix::scale(double scaleingsFactor)
{
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t column = 0; column < getNumberOfColumns(); column++)
			setEntry(row, column, scaleingsFactor * getEntry(row, column));
}


std::string Matrix::print(bool print) const
{
	std::vector<int> maxValueInRow = findMaxValueInRow();
	int fullWidth = std::accumulate(maxValueInRow.begin(), maxValueInRow.end(), 0) + getNumberOfColumns()*3 + 1;
	std::string printString = printMatrix(maxValueInRow, fullWidth);
	if(print)
		std::cout << printString << std::endl;
	return printString;
}

void Matrix::appendMatrix(const Matrix &matrix, bool appendPosition)
{
	if (appendPosition == 0 && getNumberOfRows() != matrix.getNumberOfRows())
		throw std::exception("Rows of the two matrixs must be the same");
	else if(appendPosition == 1 && getNumberOfColumns() != matrix.getNumberOfColumns())
		throw std::exception("Columns of the two matrixs must be the same");

	Matrix *newMatrix = new Matrix();
	if (appendPosition == 0)
	{
		newMatrix->setMatrixSize(getNumberOfRows(), getNumberOfColumns() + matrix.getNumberOfColumns());
		for (size_t col1 = 0; col1 < getNumberOfColumns(); col1++)
			newMatrix->setColumn(col1, getColumn(col1));
		for (size_t col2 = getNumberOfColumns(); col2 < getNumberOfColumns() + matrix.getNumberOfColumns(); col2++)
			newMatrix->setColumn(col2, matrix.getColumn(col2 - getNumberOfColumns()));
	}
	else
	{
		newMatrix->setMatrixSize(getNumberOfRows()+matrix.getNumberOfRows(), getNumberOfColumns());
		for (size_t col1 = 0; col1 < getNumberOfRows(); col1++)
			newMatrix->setRow(col1, getRow(col1));
		for (size_t col2 = getNumberOfRows(); col2 < getNumberOfRows() + matrix.getNumberOfRows(); col2++)
			newMatrix->setRow(col2, matrix.getRow(col2 - getNumberOfRows()));
	}

	setMatrix(newMatrix);
	delete newMatrix;
}

const Matrix & Matrix::operator=(const Matrix & obj)
{
	this->setMatrix(&obj);
	return obj;
}

bool Matrix::operator==(const Matrix &obj)
{
	if (obj.getNumberOfColumns() != getNumberOfColumns() || obj.getNumberOfRows() != getNumberOfRows())
		return false;
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t col = 0; col < getNumberOfColumns(); col++)
			if (getEntry(row, col) != obj.getEntry(row, col))
				return false;
	return true;
}

bool Matrix::operator<(const Matrix &matrix)
{
	return (decideMatrixSize(*this) < decideMatrixSize(matrix));
}

bool Matrix::operator>(const Matrix &matrix)
{
	return (decideMatrixSize(*this) > decideMatrixSize(matrix));
}

bool Matrix::operator<=(const Matrix &matrix)
{
	return (decideMatrixSize(*this) <= decideMatrixSize(matrix));
}

bool Matrix::operator>=(const Matrix &matrix)
{
	return (decideMatrixSize(*this) >= decideMatrixSize(matrix));
}

bool Matrix::operator!=(const Matrix &obj)
{
	if (obj.getNumberOfColumns() != getNumberOfColumns() || obj.getNumberOfRows() != getNumberOfRows())
		return true;
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t col = 0; col < getNumberOfColumns(); col++)
			if (getEntry(row, col) != obj.getEntry(row, col))
				return true;
	return false;
}

void Matrix::operator+=(const Matrix &obj)
{
	if (obj.getNumberOfRows() != getNumberOfRows() || obj.getNumberOfColumns() != getNumberOfColumns())
		throw std::exception("Matrix dimensions does not comply");
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t column = 0; column < getNumberOfColumns(); column++)
			setEntry(row, column, getEntry(row, column) + obj.getEntry(row, column));
}

void Matrix::operator+=(const double value)
{
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t col = 0; col < getNumberOfColumns(); col++)
			setEntry(row, col, getEntry(row, col) + value);
}

void Matrix::operator-=(const Matrix &obj)
{
	if (obj.getNumberOfRows() != getNumberOfRows() || obj.getNumberOfColumns() != getNumberOfColumns())
		throw std::exception("Matrix dimensions does not comply");
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t column = 0; column < getNumberOfColumns(); column++)
			setEntry(row, column, getEntry(row, column) - obj.getEntry(row, column));
}

void Matrix::operator-=(const double value)
{
	for (size_t row = 0; row < getNumberOfRows(); row++)
		for (size_t col = 0; col < getNumberOfColumns(); col++)
			setEntry(row, col, getEntry(row, col) - value);
}

void Matrix::operator*=(const Matrix &obj)
{
	if (getNumberOfColumns() != obj.getNumberOfRows())
		throw std::exception("Matrix Dimensions does not comply");
	*this = multiplication(obj);
}

void Matrix::operator*=(const double value)
{
	scale(value);
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

Matrix & Matrix::operator+(const double value)
{
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	for (size_t row = 0; row < returnObj->getNumberOfRows(); row++)
		for (size_t col = 0; col < returnObj->getNumberOfColumns(); col++)
			returnObj->setEntry(row, col, getEntry(row, col) + value);
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

Matrix & Matrix::operator-(const double value)
{
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	for (size_t row = 0; row < returnObj->getNumberOfRows(); row++)
		for (size_t col = 0; col < returnObj->getNumberOfColumns(); col++)
			returnObj->setEntry(row, col, getEntry(row, col) - value);
	return *returnObj;
}

Matrix & Matrix::operator*(const double value)
{
	Matrix *returnObj = new Matrix(getNumberOfRows(), getNumberOfColumns());
	*returnObj = *this;
	returnObj->scale(value);
	return *returnObj;
}

Matrix & Matrix::operator*(const Matrix &obj) const
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

const Matrix & Matrix::operator=(std::vector<double> vectorArray)
{
	if (vectorArray.size() != getNumberOfRows() * getNumberOfColumns())
		throw std::exception("Elements isn't equal to number of matrix entries");
	for (size_t index = 0; index < vectorArray.size(); index++)
		setEntry((index/getNumberOfColumns()) % getNumberOfRows(), index % getNumberOfColumns(), vectorArray[index]);
	return *this;
}


std::string Matrix::printMatrix(std::vector<int> maxValueInRow, int fullWidth) const
{
	std::string printString = "";
	for (size_t row = 0; row < getNumberOfRows(); row++)
	{
		printString += printLine(fullWidth);
		printString += printRow(row, maxValueInRow);
	}
	printString += printLine(fullWidth);
	return printString;
}

std::string Matrix::printLine(int width) const
{
	std::string printString = "";

	for (size_t cursor = 0; cursor < width; cursor++)
		printString += "-";
	printString += "\n";

	return printString;
}

std::string Matrix::printRow(int row, std::vector<int> maxValueInRow) const
{
	std::string printString = "";

	for (size_t column = 0; column < getNumberOfColumns(); column++)
	{
		printString += "|";
		printString += printEntry(row, column, maxValueInRow);
	}
	printString +=  "|\n";

	return printString;
}

std::string Matrix::printEntry(int row, int column, std::vector<int>maxValueInRow) const
{
	std::string printString = " ";
	size_t space = 0 + unevenSpace(row, column, maxValueInRow);

	for (; space < getDiffWidth(row, column, maxValueInRow) / 2; space++)
		printString += " ";

	printString += eraseZeros(std::to_string(getEntry(row, column)));
	for (size_t space = 0; space < getDiffWidth(row, column, maxValueInRow) / 2; space++)
		printString += " ";
	printString += " ";
	return printString;
}

bool Matrix::unevenSpace(int row, int column, std::vector<int>maxValueInRow) const
{
	return ((getDiffWidth(row, column, maxValueInRow)/ 2) - std::floor((getDiffWidth(row, column, maxValueInRow)) / 2) == 0.5);
}

double Matrix::getDiffWidth(int row, int column, std::vector<int>maxValueInRow) const
{
	return (maxValueInRow[column] - numberWidth(getEntry(row, column)));
}

std::vector<int> Matrix::findMaxValueInRow() const
{
	std::vector<int> maxValueInRow;
	for (size_t column = 0; column < getNumberOfColumns(); column++)
		maxValueInRow.push_back(getWidestNumberInRow(column));
	return maxValueInRow;
}

double Matrix::getWidestNumberInRow(int column) const
{
	double widestValue = 0;
	for (size_t row = 0; row < getNumberOfRows(); row++)
		if (numberWidth(widestValue) < numberWidth(getEntry(row, column)))
			widestValue = getEntry(row, column);
	return numberWidth(widestValue);
}


double Matrix::numberWidth(double value) const
{
	return eraseZeros(std::to_string(value)).size();
}

std::string Matrix::eraseZeros(std::string string) const
{
	int cursor = 0;
	if (string.find(".") != std::string::npos)
		for (; string[string.size() - (1 + cursor)] == '0'; cursor++);
	if (string[string.size() - (1 + cursor)] == '.')
		cursor++;
	return string.substr(0, string.size() - (cursor));
}

Matrix & Matrix::multiplication(const Matrix &obj) const
{
	Matrix *returnMatrix = new Matrix(getNumberOfRows(), obj.getNumberOfColumns());
	for (size_t row = 0; row < returnMatrix->getNumberOfRows(); row++)
		for (size_t column = 0; column < returnMatrix->getNumberOfColumns(); column++)
			returnMatrix->setEntry(row, column, vectorMultiplication(getRow(row), obj.getColumn(column)));
	return *returnMatrix;
}

double Matrix::vectorMultiplication(Matrix &rowMatrix, Matrix &columnMatrix) const
{
	double result = 0;
	for (size_t cursor = 0; cursor < rowMatrix.getNumberOfColumns(); cursor++)
		result += rowMatrix.getEntry(0, cursor) * columnMatrix.getEntry(cursor, 0);
	return result;
}

double Matrix::decideMatrixSize(const Matrix &matrix) const
{
	double returnvalue = 0;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			returnvalue += (matrix.getEntry(row, col) > 0) ? matrix.getEntry(row, col) : -matrix.getEntry(row, col);
	return returnvalue;
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

std::ostream & operator<<(std::ostream &out, const Matrix &matrix)
{
	out << matrix.print(0);
	return out;
}
