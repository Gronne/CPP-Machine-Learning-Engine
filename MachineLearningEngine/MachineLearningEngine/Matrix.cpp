#include "Matrix.h"
#include <stdexcept>
#include <string>
#include <numeric>
#include <iostream>

Matrix::Matrix(int rows, int columns)
{
	resizeMatrix(rows, columns);
}

Matrix::Matrix(const Matrix &copy)
{
	resizeMatrix(1, 1);
	*this = copy;
}

Matrix::Matrix(const Matrix *copy)
{
	resizeMatrix(1, 1);
	*this = *copy;
}


Matrix::~Matrix()
{
	deleteMatrix();
}


int Matrix::getNumberOfRows() const
{
	if (!_transposeFlag)
		return _rows;
	else
		return _columns;
}


int Matrix::getNumberOfColumns() const 
{
	if (_transposeFlag)
		return _rows;
	else
		return _columns;
}

int Matrix::getSmallestSize() const
{
	return ((getNumberOfColumns() < getNumberOfRows()) ? getNumberOfColumns() : getNumberOfRows());
}

int Matrix::getLargestSize() const
{
	return ((getNumberOfColumns() > getNumberOfRows()) ? getNumberOfColumns() : getNumberOfRows());;
}


Matrix& Matrix::getRow(int row) const
{
	checkForInvalidRowOrColumn(row, 0);
	
	Matrix *resultMatrix = new Matrix();
	constructRowMatrix(resultMatrix, 1);
	
	insertRow(resultMatrix, 0, row);
	return *resultMatrix;
}


Matrix& Matrix::getRow(std::vector<int> rows) const 
{
	for (size_t row : rows)
		checkForInvalidRowOrColumn(row, 0);

	Matrix *resultMatrix = new Matrix();
	constructRowMatrix(resultMatrix, rows.size());
	
	for (size_t rowCounter = 0; rowCounter < rows.size(); ++rowCounter)
		insertRow(resultMatrix, rowCounter, rows[rowCounter]);

	return *resultMatrix;
}

Matrix & Matrix::getRow(const Matrix &rowsToGet) const
{
	if (rowsToGet.getNumberOfColumns() != 1 && rowsToGet.getNumberOfRows() != 1)
		throw std::exception("The matrix exceeds the requested number of rows or columns");
	
	std::vector<int> vec;
	for (size_t row = 0; row < rowsToGet.getNumberOfRows(); ++row)
		for (size_t col = 0; col < rowsToGet.getNumberOfColumns(); ++col)
			vec.push_back(rowsToGet.getEntry(row, col));

	return getRow(vec);
}

void Matrix::constructRowMatrix(Matrix *resultMatrix, int rows) const
{
	if (!_transposeFlag) 
		resultMatrix->resizeMatrix(rows, _columns);
	else 
		resultMatrix->resizeMatrix(rows, _rows);
}


void Matrix::resizeMatrix(int rows, int columns)
{
	setRows(rows);
	setColumns(columns);
	constructMatrix();
}


void Matrix::insertRow(Matrix *setMatrix, int setMatrixRow, int getMatrixRow) const
{
	for (size_t column = 0; column < setMatrix->getNumberOfColumns(); ++column)
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


Matrix& Matrix::getColumn(std::vector<int> columns) const 
{
	for (size_t column : columns)
		checkForInvalidRowOrColumn(0, column);

	Matrix *resultMatrix = new Matrix();
	constructColumnMatrix(resultMatrix, columns.size());

	for (size_t columnCounter = 0; columnCounter < columns.size(); ++columnCounter)
		insertColumn(resultMatrix, columnCounter, columns[columnCounter]);

	return *resultMatrix;
}

Matrix & Matrix::getColumn(const Matrix &columnToGet) const
{
	if (columnToGet.getNumberOfColumns() != 1 && columnToGet.getNumberOfRows() != 1)
		throw std::exception("The matrix exceeds the requested number of rows or columns");

	std::vector<int> vec;
	for (size_t row = 0; row < columnToGet.getNumberOfRows(); ++row)
		for (size_t col = 0; col < columnToGet.getNumberOfColumns(); ++col)
			vec.push_back(columnToGet.getEntry(row, col));

	return getColumn(vec);
}


void Matrix::constructColumnMatrix(Matrix *resultMatrix, int columns) const 
{
	if (!_transposeFlag) 
		resultMatrix->resizeMatrix(_rows, columns);
	else 
		resultMatrix->resizeMatrix(_columns, columns);
}


void Matrix::insertColumn(Matrix *setMatrix, int setMatrixColumn, int getMatrixColumn) const 
{
	for (size_t row = 0; row < setMatrix->getNumberOfRows(); ++row)
		setMatrix->setEntry(row, setMatrixColumn, getEntry(row, getMatrixColumn));
}


void Matrix::setMatrixSize(const Matrix &matrix)
{
	setMatrixSize(matrix.getNumberOfRows(), matrix.getNumberOfColumns());
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
		for (size_t cursor = 0; cursor < _rows; ++cursor)
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


void Matrix::setMatrix(const Matrix &newMatrix)
{
	if (_matrix == newMatrix._matrix)
		throw std::exception("Can not be set to it self");

	setMatrixSize(newMatrix.getNumberOfRows(), newMatrix.getNumberOfColumns());
	transferEntries(newMatrix);
}

void Matrix::deleteRow(int row)
{
	checkForInvalidRowOrColumn(row, 0);

	Matrix *matrix = new Matrix(getNumberOfRows() - 1, getNumberOfColumns());

	transferEntriesBesideRow(*matrix, row);

	*this = *matrix;
	delete matrix;
}

void Matrix::deleteRow(std::vector<int> rows)
{
	if (rows.size() == 0) return;

	Matrix *matrix = new Matrix(rows.size(), 1);

	for (size_t row = 0; row < rows.size(); ++row)
		matrix->setEntry(row, 0, rows[row]);

	deleteRow(*matrix);
	delete matrix;
}

void Matrix::deleteRow(const Matrix &rows)
{
	deleteExceptions(rows, 0);

	Matrix *buffer = new Matrix();
	*buffer = rows.sort(1, ((rows.getNumberOfRows() == 1) ? false : true), 0);

	for (size_t col = 0; col < rows.getNumberOfColumns(); ++col)
		for (size_t row = 0; row < rows.getNumberOfRows(); ++row)
			deleteRow(buffer->getEntry(row, col));
}

void Matrix::deleteColumn(int col)
{
	checkForInvalidRowOrColumn(0, col);

	Matrix *matrix = new Matrix(getNumberOfRows(), getNumberOfColumns()-1);
	
	transferEntriesBesideCol(*matrix, col);

	setMatrix(*matrix);
	delete matrix;
}

void Matrix::deleteColumn(std::vector<int> columnVec)
{
	if (columnVec.size() == 0) return;

	Matrix *matrix = new Matrix(columnVec.size(), 1);

	for (size_t row = 0; row < columnVec.size(); ++row)
		matrix->setEntry(row, 0, columnVec[row]);

	deleteColumn(*matrix);
	delete matrix;
}

void Matrix::deleteColumn(const Matrix &columnMat)
{
	deleteExceptions(columnMat, 1);

	Matrix *buffer = new Matrix();
	*buffer = columnMat.sort(1, ((columnMat.getNumberOfRows() == 1) ? false : true), 0);

	for (size_t col = 0; col < columnMat.getNumberOfColumns(); ++col)
		for (size_t row = 0; row < columnMat.getNumberOfRows(); ++row)
			deleteColumn(buffer->getEntry(row, col));
}


void Matrix::checkForInvalidRowOrColumn(int row, int column) const
{
	if (!_transposeFlag) 
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
	return (!_transposeFlag) ? _matrix[row][column] : _matrix[column][row];
}


void Matrix::setRow(int rowNumber, const Matrix &rowData)
{
	checkForInvalidRowOrColumn(rowNumber, rowData.getNumberOfColumns() - 1);

	if (getNumberOfColumns() != rowData.getNumberOfColumns())
		throw std::exception("Number of columns does not match the matrixs dimensions");

	for (size_t column = 0; column < getNumberOfColumns(); ++column)
		setEntry(rowNumber, column, rowData.getEntry(0, column));
}


void Matrix::setRow(int rowNumber, std::vector<double> rowData)
{
	Matrix vec(1, rowData.size());
	vec = rowData;

	setRow(rowNumber, vec);
}


void Matrix::setColumn(int columnNumber, const Matrix &columnData)
{
	checkForInvalidRowOrColumn(columnData.getNumberOfRows() - 1, columnNumber);

	if (getNumberOfRows() != columnData.getNumberOfRows())
		throw std::exception("Number of rows does not match the matrixs dimensions");

	for (size_t row = 0; row < getNumberOfRows(); ++row)
		setEntry(row, columnNumber, columnData.getEntry(row, 0));
}


void Matrix::setColumn(int columnNumber, std::vector<double> columnData)
{
	Matrix vec(columnData.size(), 1);
	vec = columnData;

	setColumn(columnNumber, vec);
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

Matrix & Matrix::transpose()
{
	_transposeFlag = !_transposeFlag;
	return *this;
}

Matrix & Matrix::transpose() const
{
	Matrix *copy = new Matrix();
	*copy = *this;
	return copy->transpose();
}


void Matrix::scale(double scaleingsFactor)
{
	for (size_t row = 0; row < getNumberOfRows(); ++row)
		for (size_t column = 0; column < getNumberOfColumns(); ++column)
			setEntry(row, column, getEntry(row, column) * scaleingsFactor);
}


std::string Matrix::print(bool print) const
{
	std::vector<int> maxValues = findMaxValueInEachColumn();

	int fullWidth = std::accumulate(maxValues.begin(), maxValues.end(), 0) + getNumberOfColumns()*3 + 1;
	
	std::string printString = matrixToString(maxValues, fullWidth);
	
	if(print)
		std::cout << printString << std::endl;
	
	return printString;
}

void Matrix::appendMatrix(const Matrix &matrix, bool appendPosition)
{
	appendExceptions(matrix, appendPosition);

	Matrix *newMatrix = new Matrix();

	if (!appendPosition)
		appendRight(matrix, *newMatrix);
	else
		appendUnder(matrix, *newMatrix);

	setMatrix(*newMatrix);
	delete newMatrix;
}

Matrix & Matrix::sort(int sortType, bool flag, int valueType)
{
	//0 = low to high, 1 = high to low
	switch (sortType)
	{
		case 0:  sortLowHigh(flag, valueType); break;
		case 1:  sortHighLow(flag, valueType); break;
		default: throw std::exception("No Sort of that type");
	}
	return *this;
}

Matrix & Matrix::sort(int sortType, bool flag, int valueType) const
{
	Matrix *buffer = new Matrix();
	*buffer = *this;

	buffer->sort(sortType, flag, valueType);
	return *buffer;
}

const Matrix & Matrix::operator=(const Matrix & obj)
{
	this->setMatrix(obj);
	return obj;
}

const Matrix & Matrix::operator=(std::vector<double> vectorArray)
{
	if (vectorArray.size() != getNumberOfRows() * getNumberOfColumns())
		throw std::exception("Elements isn't equal to number of matrix entries");

	for (size_t index = 0; index < vectorArray.size(); ++index)
	{
		int row = (index / getNumberOfColumns()) % getNumberOfRows();
		int column = index % getNumberOfColumns();

		setEntry(row, column, vectorArray[index]);
	}
		
	return *this;
}

bool Matrix::operator==(const Matrix &obj) const
{
	if (obj.getNumberOfColumns() != getNumberOfColumns() || obj.getNumberOfRows() != getNumberOfRows())
		return false;

	for (size_t row = 0; row < getNumberOfRows(); ++row)
		for (size_t col = 0; col < getNumberOfColumns(); ++col)
			if (getEntry(row, col) != obj.getEntry(row, col))
				return false;
	return true;
}

bool Matrix::operator!=(const Matrix &obj) const
{
	return !(*this == obj);
}

bool Matrix::operator<(const Matrix &matrix) const
{
	return (decideMatrixSize(*this) < decideMatrixSize(matrix));
}

bool Matrix::operator>(const Matrix &matrix) const
{
	return (decideMatrixSize(*this) > decideMatrixSize(matrix));
}


bool Matrix::operator<=(const Matrix &matrix) const 
{
	return (decideMatrixSize(*this) <= decideMatrixSize(matrix));
}


bool Matrix::operator>=(const Matrix &matrix) const
{
	return (decideMatrixSize(*this) >= decideMatrixSize(matrix));
}

void Matrix::operator+=(const Matrix &matrix)
{
	*this = *this + matrix;
}

void Matrix::operator+=(const double value)
{
	*this = *this + value;
}

//------------------------------------------------------------------------------
//Matrix Addition Documentation: Documentation - Matrix- Addition
//------------------------------------------------------------------------------
Matrix & Matrix::operator+(const Matrix & matrix)
{
	if (matrix.getNumberOfRows() != getNumberOfRows() || matrix.getNumberOfColumns() != getNumberOfColumns())
		throw std::exception("Matrix dimensions does not comply");

	Matrix *returnmatrix = new Matrix(*this);

	for (size_t row = 0; row < getNumberOfRows(); ++row)
		for (size_t column = 0; column < getNumberOfColumns(); ++column)
		{
			double entryValue_1 = getEntry(row, column);
			double entryValue_2 = matrix.getEntry(row, column);

			returnmatrix->setEntry(row, column, entryValue_1 + entryValue_2);
		}
			
	return *returnmatrix;
}

Matrix & Matrix::operator+(const double value)
{
	Matrix *returnObj = new Matrix(*this);

	for (size_t row = 0; row < returnObj->getNumberOfRows(); ++row)
		for (size_t col = 0; col < returnObj->getNumberOfColumns(); ++col)
			returnObj->setEntry(row, col, getEntry(row, col) + value);

	return *returnObj;
}

void Matrix::operator-=(const Matrix &matrix)
{
	*this = *this - matrix;
}

void Matrix::operator-=(const double value)
{
	*this = *this - value;
}

Matrix & Matrix::operator-(const Matrix & matrix)
{
	if (matrix.getNumberOfRows() != getNumberOfRows() || matrix.getNumberOfColumns() != getNumberOfColumns())
		throw std::exception("Matrix dimensions does not comply");

	Matrix *returnMatrix = new Matrix(*this);

	for (size_t row = 0; row < getNumberOfRows(); ++row)
		for (size_t column = 0; column < getNumberOfColumns(); ++column)
		{
			double entryValue_1 = getEntry(row, column);
			double entryValue_2 = matrix.getEntry(row, column);

			returnMatrix->setEntry(row, column, entryValue_1 - entryValue_2);
		}
			
	return *returnMatrix;
}

Matrix & Matrix::operator-(const double value)
{
	Matrix *returnObj = new Matrix(*this);

	for (size_t row = 0; row < returnObj->getNumberOfRows(); ++row)
		for (size_t col = 0; col < returnObj->getNumberOfColumns(); ++col)
			returnObj->setEntry(row, col, getEntry(row, col) - value);
	return *returnObj;
}

void Matrix::operator*=(const Matrix &matrix)
{
	*this = *this * matrix;
}

void Matrix::operator*=(const double value)
{
	*this = *this * value;
}


//------------------------------------------------------------------------------
//Matrix Scale Documentation: Documentation - Matrix- Scale
//------------------------------------------------------------------------------
Matrix & Matrix::operator*(const double value)
{
	Matrix *returnMatrix = new Matrix(*this);

	returnMatrix->scale(value);

	return *returnMatrix;
}

Matrix & Matrix::operator*(const Matrix &matrix) const
{
	if (getNumberOfColumns() != matrix.getNumberOfRows())
		throw std::exception("Matrix Dimensions does not comply");

	return multiplication(matrix);
}

void Matrix::operator/=(const double value)
{
	*this = *this / value;
}

Matrix & Matrix::operator/(const double value) const
{
	if (value == 0)
		throw std::exception("Not possible to divide by zero");

	Matrix *returnMatrix = new Matrix(*this);
	returnMatrix->scale(1 / value);

	return *returnMatrix;
}


std::string Matrix::matrixToString(std::vector<int> maxValueInRow, int fullWidth) const
{
	std::string printString = "";
	for (size_t row = 0; row < getNumberOfRows(); ++row)
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

	for (; printString.size() < width; printString += "-");
	printString += "\n";

	return printString;
}

std::string Matrix::printRow(int row, std::vector<int> maxValueInRow) const
{
	std::string printString = "";

	for (size_t column = 0; column < getNumberOfColumns(); ++column)
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
	size_t space = unevenSpace(row, column, maxValueInRow);

	for (; space < getDiffWidth(row, column, maxValueInRow) / 2; ++space)
		printString += " ";

	printString += eraseZeros(std::to_string(getEntry(row, column)));

	for (space = 0; space < getDiffWidth(row, column, maxValueInRow) / 2; ++space)
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

std::vector<int> Matrix::findMaxValueInEachColumn() const
{
	std::vector<int> maxValueInRow;

	for (size_t column = 0; column < getNumberOfColumns(); ++column)
		maxValueInRow.push_back(getWidestNumberInRow(column));

	return maxValueInRow;
}

double Matrix::getWidestNumberInRow(int column) const
{
	double widestValue = 0;

	for (size_t row = 0; row < getNumberOfRows(); ++row)
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
		for (; string[string.size() - (1 + cursor)] == '0'; ++cursor);

	if (string[string.size() - (1 + cursor)] == '.')
		cursor++;

	return string.substr(0, string.size() - (cursor));
}

//------------------------------------------------------------------------------
//Matrix Multiplicaiton Documentation: Documentation - Matrix- Multiplication
//------------------------------------------------------------------------------
Matrix & Matrix::multiplication(const Matrix &matrix) const
{
	Matrix *returnMatrix = new Matrix(getNumberOfRows(), matrix.getNumberOfColumns());

	for (size_t row = 0; row < returnMatrix->getNumberOfRows(); ++row)
		for (size_t column = 0; column < returnMatrix->getNumberOfColumns(); ++column)
		{
			Matrix &&row_vec = &getRow(row);
			Matrix &&column_vec = &matrix.getColumn(column);

			double dot_product = vectorMultiplication(row_vec, column_vec);

			returnMatrix->setEntry(row, column, dot_product);
		}
	
	return *returnMatrix;
}

double Matrix::vectorMultiplication(Matrix &rowMatrix, Matrix &columnMatrix) const
{
	double result = 0;

	for (size_t cursor = 0; cursor < rowMatrix.getNumberOfColumns(); ++cursor)
		result += rowMatrix.getEntry(0, cursor) * columnMatrix.getEntry(cursor, 0);

	return result;
}

double Matrix::decideMatrixSize(const Matrix &matrix) const
{
	double returnvalue = 0;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
		{
			double entryValue = matrix.getEntry(row, col);
			returnvalue += (entryValue > 0) ? entryValue : -entryValue;
		}
	
	return returnvalue;
}

void Matrix::appendRight(const Matrix &matrix, Matrix &newMatrix)
{
	newMatrix.setMatrixSize(getNumberOfRows(), getNumberOfColumns() + matrix.getNumberOfColumns());
	
	for (size_t col1 = 0; col1 < getNumberOfColumns(); ++col1)
		newMatrix.setColumn(col1, getColumn(col1));
	
	for (size_t col2 = getNumberOfColumns(); col2 < getNumberOfColumns() + matrix.getNumberOfColumns(); ++col2)
		newMatrix.setColumn(col2, matrix.getColumn(col2 - getNumberOfColumns()));
}

void Matrix::appendUnder(const Matrix &matrix, Matrix &newMatrix)
{
	newMatrix.setMatrixSize(getNumberOfRows() + matrix.getNumberOfRows(), getNumberOfColumns());
	
	for (size_t col1 = 0; col1 < getNumberOfRows(); ++col1)
		newMatrix.setRow(col1, getRow(col1));
	
	for (size_t col2 = getNumberOfRows(); col2 < getNumberOfRows() + matrix.getNumberOfRows(); ++col2)
		newMatrix.setRow(col2, matrix.getRow(col2 - getNumberOfRows()));
}

void Matrix::transferEntries(const Matrix &newMatrix)
{
	for (size_t row = 0; row < newMatrix.getNumberOfRows(); ++row)
		for (size_t column = 0; column < newMatrix.getNumberOfColumns(); ++column)
			setEntry(row, column, newMatrix.getEntry(row, column));
}

void Matrix::transferEntriesBesideRow(Matrix &matrix, int row)
{
	for (size_t internalCol = 0; internalCol < getNumberOfColumns(); ++internalCol)
		for (size_t internalRow = 0, matrixRow = 0; internalRow < getNumberOfRows(); ++internalRow)
			if (internalRow != row)
				matrix.setEntry(matrixRow++, internalCol, getEntry(internalRow, internalCol));
}

void Matrix::transferEntriesBesideCol(Matrix &matrix, int col)
{
	for (size_t internalRow = 0; internalRow < getNumberOfRows(); ++internalRow)
		for (size_t internalCol = 0, matrixCol = 0; internalCol < getNumberOfColumns(); ++internalCol)
			if (internalCol != col)
				matrix.setEntry(internalRow, matrixCol++, getEntry(internalRow, internalCol));
}

void Matrix::deleteExceptions(const Matrix &matrix, bool colFlag)
{
	if (matrix.getNumberOfColumns() != 1 && matrix.getNumberOfRows() != 1)
		throw std::exception("Matrix needs to be a vector, when deleting");

	for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
		for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
			if (matrix.getEntry(row, col) < 0 || matrix.getEntry(row, col) >= ((colFlag) ? getNumberOfColumns() : getNumberOfRows()))
				throw std::exception("Can't delete a row/column, that doesn't exist");
}

void Matrix::appendExceptions(const Matrix &matrix, bool appendPosition)
{
	if (appendPosition == 0 && getNumberOfRows() != matrix.getNumberOfRows())
		throw std::exception("Rows of the two matrixs must be the same");
	else if (appendPosition == 1 && getNumberOfColumns() != matrix.getNumberOfColumns())
		throw std::exception("Columns of the two matrixs must be the same");
}

void Matrix::sortHighLow(bool flag, int valueType)
{
	if (((flag) ? getNumberOfRows() : getNumberOfColumns()) == 1)
		return;

	while (!bubbleSortOneIteration(flag, false, valueType));
}

void Matrix::sortLowHigh(bool flag, int valueType)
{
	if (((flag) ? getNumberOfRows() : getNumberOfColumns()) == 1) 
		return;

	while (!bubbleSortOneIteration(flag, true, valueType));
}

bool Matrix::bubbleSortOneIteration(bool rotationFlag, bool sortType, int valueType)
{
	bool sortedFlag = true;
	int elementsToSort = (rotationFlag) ? getNumberOfRows() : getNumberOfColumns();

	for (size_t lineNr = 1; lineNr < elementsToSort; ++lineNr)
		if (!((rotationFlag) ? bubbleSortCol(lineNr, sortType, valueType) : bubbleSortRow(lineNr, sortType, valueType)))
			sortedFlag = false;

	return sortedFlag;
}

double Matrix::sortValue(Matrix &matrix, int valueType)
{
	double value = 0;
	switch (valueType)
	{
		case 0: value = sortValueSum(matrix); break;
		case 1: value = sortValueMax(matrix); break;
		case 2: value = sortValueMin(matrix); break;
		default: throw std::exception("Not possible to sort matrix with the given value sorting type");
	}
	return value;
}

double Matrix::sortValueSum(Matrix &matrix)
{
	double sum = 0;

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			sum += matrix.getEntry(row, col);

	return sum;
}

double Matrix::sortValueMax(Matrix &matrix)
{
	double largestValue = matrix.getEntry(0, 0);

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			if (largestValue < matrix.getEntry(row, col))
				largestValue = matrix.getEntry(row, col);

	return largestValue;
}

double Matrix::sortValueMin(Matrix &matrix)
{
	double smallestValue = matrix.getEntry(0, 0);

	for (size_t row = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			if (smallestValue > matrix.getEntry(row, col))
				smallestValue = matrix.getEntry(row, col);

	return smallestValue;
}

bool Matrix::bubbleSortRow(int columnNr, bool sortType, int valueType)
{
	double col1Value = sortValue(getColumn(columnNr), valueType);
	double col2Value = sortValue(getColumn(columnNr - 1), valueType);

	if ((!sortType && col1Value > col2Value) || (sortType && col1Value < col2Value))
	{
		shiftColumns(columnNr, columnNr - 1);
		return false;
	}
	return true;
}

bool Matrix::bubbleSortCol(int rowNr, bool sortType, int valueType)
{
	double row1Value = sortValue(getRow(rowNr), valueType);
	double row2Value = sortValue(getRow(rowNr - 1), valueType);

	if ((!sortType && row1Value > row2Value) || (sortType && row1Value < row2Value))
	{
		shiftRows(rowNr, rowNr - 1);
		return false;
	}
	return true;
}

void Matrix::shiftColumns(int columnA, int columnB)
{
	Matrix *buffer = new Matrix();

	*buffer = getColumn(columnA);
	setColumn(columnA, getColumn(columnB));
	setColumn(columnB, *buffer);

	delete buffer;
}

void Matrix::shiftRows(int rowA, int rowB)
{
	Matrix *buffer = new Matrix();

	*buffer = getRow(rowA);
	setRow(rowA, getRow(rowB));
	setRow(rowB, *buffer);

	delete buffer;
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
	if(!_transposeFlag)
		(rows > 0) ? _rows = rows : throw std::exception("Not possible with minus rows");
	else
		(rows > 0) ? _columns = rows : throw std::exception("Not possible with minus columns");
		
}


void Matrix::setColumns(int columns)
{
	if(!_transposeFlag)
		(columns > 0) ? _columns = columns : throw std::exception("Not possible with minus columns");
	else
		(columns > 0) ? _rows = columns : throw std::exception("Not possible with minus rows");
}


std::ostream & operator<<(std::ostream &out, const Matrix &matrix)
{
	out << matrix.print(0);
	return out;
}
