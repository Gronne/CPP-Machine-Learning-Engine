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

	//If it only have 1 solution (not depedent) and that solution is 0
	return !_dependent && homogeneous(matrix);
}


bool TypeMatrix::basis(const Matrix &)
{

	return false;
}


bool TypeMatrix::basis(Matrix &, MatrixSpace &) const
{

	return false;
}


bool TypeMatrix::orthogonal(Matrix &, Matrix &) const
{

	return false;
}


bool TypeMatrix::orthogonal(const Matrix *)
{

	return false;
}


int TypeMatrix::rank(const Matrix &)
{

	return 0;
}


int TypeMatrix::rank(const MatrixResult &)
{

	return 0;
}


bool TypeMatrix::checkSpan(Matrix &, Matrix &) const
{

	return false;
}


bool TypeMatrix::isomorphic(Matrix &, Matrix &) const
{

	return false;
}

