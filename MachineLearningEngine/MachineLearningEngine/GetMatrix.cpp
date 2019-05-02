#include "GetMatrix.h"



GetMatrix::GetMatrix()
{
}


GetMatrix::~GetMatrix()
{
}

int GetMatrix::numberOfPivots(const Matrix &matrix)
{
	TypeMatrix TM;
	return TM.rank(matrix);
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

	BasicMatrixOperations BMO;
	MatrixRREF RREF;

	if (RREF.checkForFullDependentMatrix(matrix))
	{
		Matrix *returnMatrix = new Matrix();
		returnMatrix->setEntry(0, 0, 0);
		return *returnMatrix;
	}

	return extractPivots(BMO.getEchelonForm(matrix), type).sort();
}

Matrix& GetMatrix::extractPivots(const Matrix &matrix, bool type)
{
	Matrix *returnMatrix = new Matrix(1, numberOfPivots(matrix));

	for (size_t row = 0, counter = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (matrix.getEntry(row, col) != 0)
			{
				returnMatrix->setEntry(0, counter++, ((type) ? row : col));
				break;
			}

	return *returnMatrix;
}

Matrix & GetMatrix::span(const Matrix &fullMatrix)
{	
	if (fullMatrix.getNumberOfColumns() == 1)
		throw std::exception("Not possible it find the span with no vector to match with");

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	*buffer = fullMatrix;

	int colLessThanRowFlag = 0;

	if (buffer->getNumberOfColumns() <= buffer->getNumberOfRows())
	{
		Matrix *zeroMatrix = new Matrix(buffer->getNumberOfRows(), 1);
		for (size_t row = 0; row < buffer->getNumberOfRows(); row++)
			zeroMatrix->setEntry(row, 0, 0);

		while (buffer->getNumberOfColumns() <= buffer->getNumberOfRows())
		{
			buffer->appendMatrix(*zeroMatrix);
			colLessThanRowFlag++;
		}
			

		buffer->setColumn(buffer->getNumberOfColumns() - 1, buffer->getColumn(fullMatrix.getNumberOfColumns() - 1));
		buffer->setColumn(fullMatrix.getNumberOfColumns() - 1, *zeroMatrix);
		
		delete zeroMatrix;
	}

	try
	{
		*buffer = BMO.getEchelonForm(*buffer);
	}
	catch (const std::exception &ex)
	{
		if (ex.what() == "Your matrix is full dependent and can't be reduced")
			throw ex;

		buffer->setMatrixSize(fullMatrix.getNumberOfColumns() - 1, 1);
		bool oneTimeFlag = false;
		for (size_t col = 0; col < fullMatrix.getNumberOfColumns() - 1; col++)
		{
			if (fullMatrix.getEntry(0, col) == 0 || oneTimeFlag == true)
				buffer->setEntry(col, 0, 0);
			else
			{
				double firstValue  = fullMatrix.getEntry(0, fullMatrix.getNumberOfColumns() - 1);
				double secondValue = fullMatrix.getEntry(0, col);

				buffer->setEntry(col, 0,  firstValue / secondValue );
				oneTimeFlag = true;
			}
		}

		return *buffer;
	}

	for (size_t col = 0; col < colLessThanRowFlag; col++)
		buffer->deleteColumn(buffer->getNumberOfColumns() - 2);
	
	Matrix *buf = new Matrix();
	*buf = *buffer;
	buf->deleteColumn(buf->getNumberOfColumns() - 1);

	TypeMatrix TM;
	int rankNoResult = TM.rank(*buf);
	int rankResult = TM.rank(*buffer);

	delete buf;

	if (rankNoResult >= rankResult && (buffer->getEntry(buffer->getNumberOfRows() - 1, buffer->getNumberOfColumns() - 2) != 0 || (buffer->getEntry(buffer->getNumberOfRows() - 1, buffer->getNumberOfColumns() - 2) == 0 && buffer->getEntry(buffer->getNumberOfRows() - 1, buffer->getNumberOfColumns() - 1) == 0)))
	{
		Matrix *returnMatrix = new Matrix(fullMatrix.getNumberOfColumns() - 1, 1);
		Matrix *pivots = new Matrix();

		*pivots = pivotColumnsNumber(*buffer);
		*buffer = buffer->getColumn(buffer->getNumberOfColumns() - 1);

		int pivotsCounter = 0;
		for (size_t row = 0; row < returnMatrix->getNumberOfRows(); row++)
		{
			if (pivotsCounter < pivots->getNumberOfColumns() && row == pivots->getEntry(0, pivotsCounter) && pivots->getEntry(0, pivotsCounter) != fullMatrix.getNumberOfColumns() - 1)
				returnMatrix->setEntry(row, 0, buffer->getEntry(pivotsCounter++, 0));
			else 
				returnMatrix->setEntry(row, 0, 0);
		}

		delete pivots;
		delete buffer;

		return *returnMatrix;
	}
	else
	{
		delete buffer;
		throw std::exception("The vector isn't in the span");
	}
		
}

Matrix& GetMatrix::span(const Matrix &spanMatrix, const Matrix &resultMatrix)
{
	if (spanMatrix.getNumberOfRows() != resultMatrix.getNumberOfRows() && spanMatrix.getNumberOfColumns() != resultMatrix.getNumberOfColumns())
		throw std::exception("The dimensions between the span and vector doesn't match");

	Matrix *returnMatrix = new Matrix();
	*returnMatrix = spanMatrix;

	if (spanMatrix.getNumberOfRows() == resultMatrix.getNumberOfRows())
		returnMatrix->appendMatrix(resultMatrix);
	else if (spanMatrix.getNumberOfColumns() == resultMatrix.getNumberOfColumns())
	{
		returnMatrix->appendMatrix(resultMatrix, 1);
		returnMatrix->transpose();
	}

	*returnMatrix = span(*returnMatrix);
	return *returnMatrix;
}

double GetMatrix::innerProductSpace(const Matrix &matrix)
{
	if (matrix.getNumberOfRows() != 2 && matrix.getNumberOfColumns() != 2)
		throw std::exception("There need to be 2 vectors in the matrix");
	
	Matrix *vec1 = new Matrix();
	Matrix *vec2 = new Matrix();

	if (matrix.getNumberOfRows() == 2)
	{
		*vec1 = matrix.getRow(0);
		*vec2 = matrix.getRow(1);
	}
	else
	{
		*vec1 = matrix.getColumn(0);
		*vec2 = matrix.getColumn(1);
		vec1->transpose();
		vec2->transpose();
	}
	double returnValue = calculateInnerProductSpace(*vec1, *vec2);

	delete vec1;
	delete vec2;

	return returnValue;
}

double GetMatrix::innerProductSpace(const Matrix &matrixA, const Matrix &matrixB)
{
	if (matrixA.getNumberOfRows() != 1 && matrixA.getNumberOfColumns() != 1)
		throw std::exception("There can only be one vector in the first matrix");
	if (matrixB.getNumberOfRows() != 1 && matrixB.getNumberOfColumns() != 1)
		throw std::exception("There can only be one vector in the second matrix");

	Matrix *vec1 = new Matrix();
	Matrix *vec2 = new Matrix();
	*vec1 = matrixA;
	*vec2 = matrixB;

	if (matrixA.getNumberOfColumns() == 1)
		vec1->transpose();
	if (matrixB.getNumberOfColumns() == 1)
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

	for (size_t row = 0; row < matrixA.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrixB.getNumberOfColumns(); col++)
			returnValue += matrixA.getEntry(row, col) * matrixB.getEntry(row, col);
	return returnValue;
}

Matrix & GetMatrix::getBasicVectors(const Matrix &matrix)
{
	return pivotRows(matrix);
}

Matrix & GetMatrix::getTransformationMatrix(const Matrix &argument, const Matrix &result)
{
	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();

	if (argument.getNumberOfColumns() == argument.getNumberOfRows())
		*buffer = BMO.getEchelonInverse(argument) * result;
	//	*buffer = BMO.getEchelonInverse(BMO.getEchelonInverse(result) * argument); - It's not possible to find a normal inverse if the arguemnt isn't square
	else
		throw std::exception("The argument matrix needs to be square");
	return *buffer;
}

Matrix & GetMatrix::getZeroMatrix(const Matrix &matrix) const
{
	return getZeroMatrix(matrix.getNumberOfRows(), matrix.getNumberOfColumns());
}

Matrix & GetMatrix::getZeroMatrix(int rows, int cols) const
{
	if (rows <= 0 || cols <= 0)
		throw std::exception("Both rows and columns needs to be positive");
	Matrix *matrix = new Matrix(rows, cols);
	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			matrix->setEntry(row, col, 0);
	return *matrix;
}

Matrix & GetMatrix::getZeroMatrix(int size) const
{
	return getZeroMatrix(size, size);
}

Matrix & GetMatrix::getIdentityMatrix(const Matrix &matrix) const
{
	return getIdentityMatrix(matrix.getNumberOfRows(), matrix.getNumberOfColumns());
}

Matrix & GetMatrix::getIdentityMatrix(int rows, int columns) const
{
	Matrix *Imatrix = new Matrix(rows, columns);
	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < columns; col++)
			(col == row) ? Imatrix->setEntry(row, col, 1) : Imatrix->setEntry(row, col, 0);
	return *Imatrix;
}

Matrix & GetMatrix::getIdentityMatrix(int size) const
{
	return getIdentityMatrix(size, size);
}

Matrix & GetMatrix::numberSequence(double from, double to, double stepSize) const
{
	if (stepSize <= 0)
		throw std::exception("StepSize can't be less or equal to zero");

	
	double steps = (((from < to) ? to - from : from - to) / stepSize);
	steps =  (steps - (int)steps > 0.99) ? steps+1 : steps;					//Correct for decimal errors

	Matrix *returnMatrix = new Matrix(1, (int)steps + 1);
	
	returnMatrix->setEntry(0, 0, from);
	for (size_t col = 1; col < returnMatrix->getNumberOfColumns(); col++)
		returnMatrix->setEntry(0, col, from + ((from < to) ? stepSize : -stepSize) * col);

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
