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

	MatrixRREF RREF;
	if (RREF.checkForFullDependentMatrix(matrix))
		return matrix.getRow(0);

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	Matrix *returnMatrix = new Matrix();
	*buffer = BMO.getEchelonForm(matrix);

	bool firstTime = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (buffer->getEntry(row, col) != 0)
			{
				if (firstTime)
					*returnMatrix = matrix.getRow(row);
				else
					returnMatrix->appendMatrix(matrix.getRow(row), 1);
				firstTime = false;
				break;
			}

	delete buffer;
	return *returnMatrix;
}

Matrix & GetMatrix::pivotColumns(const Matrix &matrix)
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

	MatrixRREF RREF;
	if (RREF.checkForFullDependentMatrix(matrix))
		return matrix.getColumn(0);

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	Matrix *returnMatrix = new Matrix();
	*buffer = BMO.getEchelonForm(matrix);

	bool firstTime = true;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (buffer->getEntry(row, col) != 0)
			{
				if (firstTime)
					*returnMatrix = matrix.getColumn(col);
				else
					returnMatrix->appendMatrix(matrix.getColumn(col));
				firstTime = false;
				break;
			}

	delete buffer;
	return *returnMatrix;
}

Matrix & GetMatrix::span(const Matrix &fullMatrix)
{	//What if there isn't a result?
	BasicMatrixOperations BMO;
	return BMO.getEchelonForm(fullMatrix).getColumn(fullMatrix.getNumberOfColumns()-1);
}

Matrix& GetMatrix::span(const Matrix &spanMatrix, const Matrix &resultMatrix)
{
	if (spanMatrix.getNumberOfRows() != resultMatrix.getNumberOfRows() && spanMatrix.getNumberOfColumns() != resultMatrix.getNumberOfColumns())
		throw std::exception("The dimensions between the span and vector doesn't match");

	Matrix *returnMatrix = new Matrix();
	*returnMatrix = spanMatrix;
	if (spanMatrix.getNumberOfRows() == resultMatrix.getNumberOfRows())
		returnMatrix->appendMatrix(resultMatrix);
	if (spanMatrix.getNumberOfColumns() == resultMatrix.getNumberOfColumns())
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
		*vec1 = matrix.getColumn(0);
		*vec2 = matrix.getColumn(1);
	}
	else
	{
		*vec1 = matrix.getRow(0);
		*vec2 = matrix.getRow(1);
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

double GetMatrix::forbeniusProductSpace(const Matrix &matrix)
{
	//<A,A>
	return sqrt(forbeniusProductSpace(matrix, matrix));
}

double GetMatrix::forbeniusProductSpace(const Matrix &matrixA, const Matrix &matrixB)
{
	//<A,B>
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
	return BMO.getEchelonInverse(argument) * result;
}

double GetMatrix::calculateInnerProductSpace(const Matrix &vectorA, const Matrix &vectorB)
{
	SimpleMatrixOperations SMO;

	double dotValue = SMO.dot(vectorA, vectorB);
	double length = SMO.lengthOfVector(vectorA) * SMO.lengthOfVector(vectorB);

	return acos(dotValue/length);
}
