#ifndef H_SIMPLEMATRIXOPERATIONS
#define H_SIMPLEMATRIXOPERATIONS

#include "Matrix.h"

class SimpleMatrixOperations
{
public:
	SimpleMatrixOperations();
	~SimpleMatrixOperations();
	Matrix& addition(Matrix&, Matrix&);
	Matrix& substraction(Matrix&, Matrix&);
	Matrix& multiplication(Matrix&, Matrix&);
	Matrix& multiplication(Matrix&, double);
	Matrix& hadarmard(Matrix&, Matrix&);
	Matrix& invert(Matrix&);
	double determinant(Matrix&);
};

#endif

