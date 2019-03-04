#include "TypeMatrix.h"



TypeMatrix::TypeMatrix()
{

}


TypeMatrix::~TypeMatrix()
{

}


bool TypeMatrix::dependent(const Matrix &matrix)
{
	BasicMatrixOperations BMO;
	return (BMO.determinant(matrix) == 0) ? true : false;
}


bool TypeMatrix::homogene(const Matrix &)
{

	return false;
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

