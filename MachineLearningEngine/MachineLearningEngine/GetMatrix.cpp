#include "GetMatrix.h"


int GetMatrix::numberOfPivots(const Matrix &matrix)
{
	return TypeMatrix::rank(matrix);
}

Matrix & GetMatrix::pivotRows(const Matrix &matrix)
{
	return matrix.getRow(pivotRowsNumber(matrix));
}

Matrix & GetMatrix::pivotRowsNumber(const Matrix &matrix)
{
	return pivotNumbers(matrix, 1);
}

Matrix & GetMatrix::pivotColumns(const Matrix &matrix)
{
	return matrix.getColumn(pivotColumnsNumber(matrix));
}

Matrix & GetMatrix::pivotColumnsNumber(const Matrix &matrix)
{
	return pivotNumbers(matrix, 0);
}

Matrix & GetMatrix::pivotNumbers(const Matrix &matrix, bool type)
{
	if (matrix == getZeroMatrix(matrix))
		throw std::exception("No Pivots");

	if (MatrixRREF::checkForFullDependentMatrix(matrix))
	{
		Matrix *returnMatrix = new Matrix();
		returnMatrix->setEntry(0, 0, 0);
		return *returnMatrix;
	}

	return extractPivots(BasicMatrixOperations::getEchelonForm(matrix), type).sort();
}

Matrix& GetMatrix::extractPivots(const Matrix &matrix, bool type)
{
	Matrix *returnMatrix = new Matrix(1, numberOfPivots(matrix));

	for (size_t row = 0, counter = 0; row < matrix.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); ++col)
			if (matrix.getEntry(row, col) != 0)
			{
				returnMatrix->setEntry(0, counter++, ((type) ? row : col));
				break;
			}

	return *returnMatrix;
}

Matrix & GetMatrix::makeMatrixHorizontal(const Matrix &matrix)
{
	Matrix *buffer = new Matrix();
	*buffer = matrix;

	if (buffer->getNumberOfColumns() <= buffer->getNumberOfRows())
	{
		*buffer = getZeroMatrix(matrix.getNumberOfRows(), matrix.getNumberOfRows() + 1);

		for (size_t col = 0; col < matrix.getNumberOfColumns() - 1; ++col)
			buffer->setColumn(col, matrix.getColumn(col));

		//Setting last column in Matrix to last column in Buffer
		buffer->setColumn(buffer->getNumberOfColumns() - 1, matrix.getColumn(matrix.getNumberOfColumns() - 1));
	}

	return *buffer;
}

void GetMatrix::deleteInsertedZeroRows(Matrix &buffer, const Matrix &matrix)
{
	int insertedColumns = matrix.getNumberOfRows() - matrix.getNumberOfColumns();
	for (size_t col = 0; col < (insertedColumns + 1); ++col)
		buffer.deleteColumn(buffer.getNumberOfColumns() - 2);
}

Matrix & GetMatrix::calcSpanOnePivot(Matrix &buffer, const Matrix &matrix)
{
	//The reason it needs to me one smaller, is because the last column is the result row
	buffer = getZeroMatrix(matrix.getNumberOfColumns() - 1, 1);

	for (size_t col = 0; col < matrix.getNumberOfColumns() - 1; ++col)
		if (matrix.getEntry(0, col) != 0)
		{
			double resultValue = matrix.getEntry(0, matrix.getNumberOfColumns() - 1);
			double argumentValue = matrix.getEntry(0, col);

			buffer.setEntry(col, 0, resultValue / argumentValue);
			break;
		}

	return buffer;
}

bool GetMatrix::checkPossibilityForSpan(Matrix &matrix)
{
	Matrix *argument = new Matrix();
	*argument = matrix;

	argument->deleteColumn(argument->getNumberOfColumns() - 1);

	int rankDifference = TypeMatrix::rank(*argument) - TypeMatrix::rank(matrix);

	delete argument;

	return (rankDifference == 0 && checkIfValidResult(matrix));
}

bool GetMatrix::checkIfValidResult(Matrix &matrix)
{
	bool lastArgumentZero = (matrix.getEntry(matrix.getNumberOfRows() - 1, matrix.getNumberOfColumns() - 2) == 0);
	bool lastResultZero = (matrix.getEntry(matrix.getNumberOfRows() - 1, matrix.getNumberOfColumns() - 1) == 0);
	
	return (!lastArgumentZero || (lastArgumentZero && lastResultZero));
}

Matrix & GetMatrix::findSpanVector(const Matrix &orginalMatrix, Matrix &mutatedMatrix)
{
	if (orginalMatrix.getNumberOfColumns() <= orginalMatrix.getNumberOfRows())
		deleteInsertedZeroRows(mutatedMatrix, orginalMatrix);

	if (checkPossibilityForSpan(mutatedMatrix))
	{
		extractMultipleSpanValues(mutatedMatrix, orginalMatrix);
		return mutatedMatrix;
	}
	else
	{
		delete &mutatedMatrix;
		throw std::exception("The vector isn't in the span");
	}
}

void GetMatrix::extractMultipleSpanValues(Matrix &buffer, const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix(matrix.getNumberOfColumns() - 1, 1);
	Matrix *pivots = new Matrix();

	*pivots = pivotColumnsNumber(buffer);
	buffer = buffer.getColumn(buffer.getNumberOfColumns() - 1);

	fillResultSpan(matrix, buffer, *pivots, *returnMatrix);
	buffer = *returnMatrix;

	delete pivots;
	delete returnMatrix;
}

bool GetMatrix::pivotColumn(const Matrix &pivots, const Matrix &matrix, int row, int pivotsCounter)
{
	if (pivotsCounter < pivots.getNumberOfColumns())
		if (row == pivots.getEntry(0, pivotsCounter))
			if (pivots.getEntry(0, pivotsCounter) != matrix.getNumberOfColumns() - 1)
				return true;
	return false;
}

void GetMatrix::fillResultSpan(const Matrix &matrix, const Matrix &buffer, const Matrix &pivots, Matrix &resultMatrix)
{
	int pivotsCounter = 0;
	for (size_t row = 0; row < resultMatrix.getNumberOfRows(); ++row)
	{
		if (pivotColumn(pivots, matrix, row, pivotsCounter))
			resultMatrix.setEntry(row, 0, buffer.getEntry(pivotsCounter++, 0));
		else
			resultMatrix.setEntry(row, 0, 0);
	}
}

Matrix & GetMatrix::mergeMatrixes(const Matrix &spanMatrix, const Matrix &resultMatrix)
{
	Matrix *returnMatrix = new Matrix();
	*returnMatrix = spanMatrix;

	if (spanMatrix.getNumberOfRows() == resultMatrix.getNumberOfRows())
		returnMatrix->appendMatrix(resultMatrix);
	else if (spanMatrix.getNumberOfColumns() == resultMatrix.getNumberOfColumns())
	{
		returnMatrix->appendMatrix(resultMatrix, 1);
		returnMatrix->transpose();
	}

	return *returnMatrix;
}

void GetMatrix::splitMatrixIntoVectors(const Matrix &matrix, Matrix &vec1, Matrix &vec2)
{
	if (matrix.getNumberOfRows() == 2)
	{
		vec1 = matrix.getRow(0);
		vec2 = matrix.getRow(1);
	}
	else
	{
		vec1 = matrix.getColumn(0).transpose();
		vec2 = matrix.getColumn(1).transpose();
	}
}

void GetMatrix::innerProductExceptions(const Matrix &matrixA, const Matrix &matrixB)
{
	if (matrixA.getNumberOfRows() != 1 && matrixA.getNumberOfColumns() != 1)
		throw std::exception("There can only be one vector in the first matrix");
	if (matrixB.getNumberOfRows() != 1 && matrixB.getNumberOfColumns() != 1)
		throw std::exception("There can only be one vector in the second matrix");
}

void GetMatrix::fillSequenceMatrix(Matrix &matrix, double from, double to, double stepSize)
{
	matrix.setEntry(0, 0, from);
	for (size_t col = 1; col < matrix.getNumberOfColumns(); ++col)
		matrix.setEntry(0, col, from + ((from < to) ? stepSize : -stepSize) * col);
}

Matrix & GetMatrix::span(const Matrix &fullMatrix)
{	
	if (fullMatrix.getNumberOfColumns() == 1)
		throw std::exception("Not possible it find the span with no vector to match with");
	
	Matrix *buffer = new Matrix();
	*buffer = makeMatrixHorizontal(fullMatrix);

	try
	{
		*buffer = BasicMatrixOperations::getEchelonForm(*buffer);
	}
	catch (const std::exception &ex)
	{
		if (ex.what() == "Your matrix is full dependent and can't be reduced")
			throw ex;
		return calcSpanOnePivot(*buffer, fullMatrix);
	}

	return findSpanVector(fullMatrix, *buffer);
}

Matrix& GetMatrix::span(const Matrix &spanMatrix, const Matrix &resultMatrix)
{
	if (spanMatrix.getNumberOfRows() != resultMatrix.getNumberOfRows() && spanMatrix.getNumberOfColumns() != resultMatrix.getNumberOfColumns())
		throw std::exception("The dimensions between the span and vector doesn't match");

	return span(mergeMatrixes(spanMatrix, resultMatrix));
}

double GetMatrix::innerProductSpace(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() != 2 && matrix.getNumberOfColumns() != 2)
		throw std::exception("There need to be 2 vectors in the matrix");
	
	Matrix *vec1 = new Matrix();
	Matrix *vec2 = new Matrix();

	splitMatrixIntoVectors(matrix, *vec1, *vec2);

	double returnValue = calculateInnerProductSpace(*vec1, *vec2);

	delete vec1;
	delete vec2;

	return returnValue;
}

double GetMatrix::innerProductSpace(const Matrix &matrixA, const Matrix &matrixB)
{
	innerProductExceptions(matrixA, matrixB);

	Matrix *vec1 = new Matrix();
	Matrix *vec2 = new Matrix();
	*vec1 = matrixA;
	*vec2 = matrixB;

	if (matrixA.getNumberOfColumns() == 1 || matrixB.getNumberOfColumns() == 1)
		vec1->transpose();

	double returnValue = calculateInnerProductSpace(*vec1, *vec2);

	delete vec1;
	delete vec2;

	return returnValue;
}

double GetMatrix::frobeniusNorm(const Matrix &matrix)
{
	return sqrt(frobeniusProductSpace(matrix, matrix));
}

double GetMatrix::frobeniusNorm(const Matrix &matrixA, const Matrix &matrixB)
{
	return sqrt(frobeniusProductSpace(matrixA, matrixB));
}

double GetMatrix::frobeniusProductSpace(const Matrix &matrix)
{
	return frobeniusProductSpace(matrix, matrix);
}

double GetMatrix::frobeniusProductSpace(const Matrix &matrixA, const Matrix &matrixB)
{
	if (matrixA.getNumberOfRows() != matrixB.getNumberOfRows() || matrixA.getNumberOfColumns() != matrixB.getNumberOfColumns())
		throw std::exception("The matrix dimensions doesn't match");
	
	double returnValue = 0;

	for (size_t row = 0; row < matrixA.getNumberOfRows(); ++row)
		for (size_t col = 0; col < matrixB.getNumberOfColumns(); ++col)
			returnValue += matrixA.getEntry(row, col) * matrixB.getEntry(row, col);
	return returnValue;
}

Matrix & GetMatrix::getBasicVectors(const Matrix &matrix)
{
	return pivotRows(matrix);
}

Matrix & GetMatrix::getTransformationMatrix(const Matrix &argument, const Matrix &result)
{
	Matrix *buffer = new Matrix();

	if (argument.getNumberOfColumns() == argument.getNumberOfRows())
		*buffer = BasicMatrixOperations::getEchelonInverse(argument) * result;
	//	*buffer = BMO.getEchelonInverse(BMO.getEchelonInverse(result) * argument); - It's not possible to find a normal inverse if the arguemnt isn't square
	else
		throw std::exception("The argument matrix needs to be square");
	return *buffer;
}

Matrix & GetMatrix::getZeroMatrix(const Matrix &matrix)
{
	return getZeroMatrix(matrix.getNumberOfRows(), matrix.getNumberOfColumns());
}

Matrix & GetMatrix::getZeroMatrix(int rows, int cols)
{
	if (rows <= 0 || cols <= 0)
		throw std::exception("Both rows and columns needs to be positive");

	Matrix *matrix = new Matrix(rows, cols);
	for (size_t row = 0; row < rows; ++row)
		for (size_t col = 0; col < cols; ++col)
			matrix->setEntry(row, col, 0);
	return *matrix;
}

Matrix & GetMatrix::getZeroMatrix(int size)
{
	return getZeroMatrix(size, size);
}

Matrix & GetMatrix::getIdentityMatrix(const Matrix &matrix)
{
	return getIdentityMatrix(matrix.getNumberOfRows(), matrix.getNumberOfColumns());
}

Matrix & GetMatrix::getIdentityMatrix(int rows, int columns)
{
	Matrix *Imatrix = new Matrix(rows, columns);
	for (size_t row = 0; row < rows; ++row)
		for (size_t col = 0; col < columns; ++col)
			(col == row) ? Imatrix->setEntry(row, col, 1) : Imatrix->setEntry(row, col, 0);
	return *Imatrix;
}

Matrix & GetMatrix::getIdentityMatrix(int size)
{
	return getIdentityMatrix(size, size);
}

Matrix & GetMatrix::numberSequence(double from, double to, double stepSize)
{
	if (stepSize <= 0)
		throw std::exception("StepSize can't be less or equal to zero");

	
	double steps = (((from < to) ? to - from : from - to) / stepSize);
	steps =  (steps - (int)steps > 0.99) ? steps+1 : steps;				//Correct for decimal errors

	Matrix *returnMatrix = new Matrix(1, (int)steps + 1);
	fillSequenceMatrix(*returnMatrix, from, to, stepSize);

	return *returnMatrix;
}

double GetMatrix::calculateInnerProductSpace(const Matrix &vectorA, const Matrix &vectorB)
{
	SimpleMatrixOperations SMO;
	double dotValue = SMO.dot(vectorA, vectorB);
	double length = SMO.lengthOfVector(vectorA) * SMO.lengthOfVector(vectorB);

	if (length == 0)
		throw std::exception("Zero vectors not possible to calculate");

	return acos(dotValue/length);
}
