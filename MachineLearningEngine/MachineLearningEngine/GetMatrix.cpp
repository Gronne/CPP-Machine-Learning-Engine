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
	return matrix.getRows(pivotRowsNumber(matrix));
}

Matrix & GetMatrix::pivotRowsNumber(const Matrix &matrix)
{
	return pivotNumbers(matrix, 1);
}

Matrix & GetMatrix::pivotColumns(const Matrix &matrix)
{
	return matrix.getColumns(pivotColumnsNumber(matrix));
}

Matrix & GetMatrix::pivotColumnsNumber(const Matrix &matrix)
{
	return pivotNumbers(matrix, 0);
}

Matrix & GetMatrix::pivotNumbers(const Matrix &matrix, bool type)
{
	bool zeroes = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (matrix.getEntry(row, col) != 0)
			{
				zeroes = false;
				break;
			}
	if (zeroes)
		throw std::exception("No Pivots");

	Matrix *returnMatrix = new Matrix(1, 1);

	MatrixRREF RREF;
	if (RREF.checkForFullDependentMatrix(matrix))
	{
		returnMatrix->setEntry(0, 0, 0);
		return *returnMatrix;
	}

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	*buffer = BMO.getEchelonForm(matrix);
	returnMatrix->setMatrixSize(1, numberOfPivots(matrix));

	for (size_t row = 0, counter = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (buffer->getEntry(row, col) != 0)
			{
				returnMatrix->setEntry(0, counter++, ((type) ? row : col));
				break;
			}

	sortMatrix(*returnMatrix);

	delete buffer;
	return *returnMatrix;
}

void GetMatrix::sortMatrix(Matrix &matrix)
{
	double buffer;
	bool shiftChecker = true;
	int counter = 0;
	while (shiftChecker)
	{
		shiftChecker = false;
		for (size_t index = 0; index < matrix.getNumberOfColumns() - 1; index++)
		{
			if (matrix.getEntry(0, index) > matrix.getEntry(0, index + 1))
			{
				shiftChecker = true;
				buffer = matrix.getEntry(0, index + 1);
				matrix.setEntry(0, index + 1, matrix.getEntry(0, index));
				matrix.setEntry(0, index, buffer);
			}
		}
	}
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

double GetMatrix::calculateInnerProductSpace(const Matrix &vectorA, const Matrix &vectorB)
{
	SimpleMatrixOperations SMO;
	double dotValue = SMO.dot(vectorA, vectorB);
	double length = SMO.lengthOfVector(vectorA) * SMO.lengthOfVector(vectorB);

	if (length == 0)
		throw std::exception("Zero vectors not possible to calculate");

	return acos(dotValue/length);
}
