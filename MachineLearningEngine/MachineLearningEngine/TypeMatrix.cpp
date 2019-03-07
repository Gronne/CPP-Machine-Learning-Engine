#include "TypeMatrix.h"



TypeMatrix::TypeMatrix()
{

}


TypeMatrix::~TypeMatrix()
{

}


bool TypeMatrix::dependent(const Matrix &matrix)
{
	//Is independent if and only if rank(A) == min(row, col)
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows())
		return true;

	BasicMatrixOperations BMO;
	//If and only if, det(A) = 0
	return (BMO.determinant(matrix) == 0) ? true : false;
}


bool TypeMatrix::homogeneous(const Matrix &matrix)
{
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		if (matrix.getEntry(row, matrix.getNumberOfColumns() - 1) != 0)
			return false;
	return true;
}

bool TypeMatrix::trivial(const Matrix &matrix)
{
	Matrix *buffer = new Matrix();
	*buffer = matrix;

	if (matrix.getNumberOfColumns() - 1 == matrix.getNumberOfRows())
		buffer->deleteColumn(buffer->getNumberOfColumns() - 1);

	bool _dependent = dependent(*buffer);
	delete buffer;

	return !_dependent && homogeneous(matrix);
}


bool TypeMatrix::basis(const Matrix &matrix)
{
	MatrixRREF RREF;
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows() || RREF.checkForFullDependentMatrix(matrix))
		return false;

	Matrix *buffer = new Matrix();
	BasicMatrixOperations BMO;
	*buffer = BMO.getEchelonForm(matrix);

	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		if (buffer->getEntry(row, row) != 1)
			return false;

	return true;
}


bool TypeMatrix::basis(Matrix &, MatrixSpace &) const
{

	return false;
}


bool TypeMatrix::orthogonal(Matrix &, Matrix &) const
{

	return false;
}


bool TypeMatrix::orthogonal(const Matrix &matrix)
{
	MatrixRREF RREF;
	if (matrix.getNumberOfColumns() != matrix.getNumberOfRows() || RREF.checkForFullDependentMatrix(matrix))
		return false;

	SimpleMatrixOperations SMO;
	Matrix *buffer = new Matrix();
	*buffer = matrix;

	buffer->transpose();
	*buffer = matrix * *buffer;

	bool returnState = false;
	if (*buffer == SMO.makeIdentityMatrix(matrix.getNumberOfRows()))
		returnState = true;

	delete buffer;
	return returnState;
}


int TypeMatrix::rank(const Matrix &matrix)
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
		return 0;

	MatrixRREF RREF;
	if (RREF.checkForFullDependentMatrix(matrix))
		return 1;

	BasicMatrixOperations BMO;
	Matrix *buffer = new Matrix();
	*buffer = BMO.getRowReduction(matrix);

	int rank = 0;
	for (size_t row = 0; row < matrix.getNumberOfRows(); row++)
		for (size_t col = 0; col < matrix.getNumberOfColumns(); col++)
			if (buffer->getEntry(row, col) != 0)
			{
				rank++;
				break;
			}

	delete buffer;
	return rank;
}


int TypeMatrix::rank(const MatrixResult &)
{

	return 0;
}

bool TypeMatrix::fullRank(const Matrix &matrix)
{
	int largestNumber = (matrix.getNumberOfRows() < matrix.getNumberOfColumns()) ? matrix.getNumberOfColumns() : matrix.getNumberOfRows();
	return (largestNumber == rank(matrix)) ? true : false;
}

bool TypeMatrix::fullRank(const MatrixResult &)
{
	return false;
}

//Will return the number of dimensions that the matrix spans over
int TypeMatrix::checkSpan(const Matrix &matrix)
{
	return rank(matrix);
}


bool TypeMatrix::isomorphic(Matrix &, Matrix &) const
{

	return false;
}

