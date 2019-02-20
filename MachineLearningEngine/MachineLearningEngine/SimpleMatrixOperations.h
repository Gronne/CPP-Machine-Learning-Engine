#ifndef H_SIMPLEMATRIXOPERATIONS
#define H_SIMPLEMATRIXOPERATIONS

#include "Matrix.h"

class SimpleMatrixOperations
{
public:
	SimpleMatrixOperations();
	~SimpleMatrixOperations();
	Matrix& addition(Matrix&, Matrix&) const;
	Matrix& substraction(Matrix&, Matrix&) const;
	Matrix& multiplication(Matrix&, Matrix&) const;
	Matrix& multiplication(Matrix&, double) const;
	Matrix& hadamard(Matrix&, Matrix&) const;
	Matrix& inverse(const Matrix&);
	double determinant(const Matrix&);

private:
	void setDeterminantMatrix(const Matrix&, Matrix&, int, int);
	void setInverseMatrix(const Matrix&, Matrix&);
};

#endif

