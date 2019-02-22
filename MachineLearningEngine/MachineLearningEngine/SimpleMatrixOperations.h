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
	Matrix& cross(const Matrix&);
	double dot(Matrix&, Matrix&);
	double dot(const Matrix&, int, int, bool = 0);

private:
	void setDeterminantMatrix(const Matrix&, Matrix&, int, int);
	void setInverseMatrix(const Matrix&, Matrix&);
	double calculateDotProduct(Matrix&, Matrix&);
};

#endif

