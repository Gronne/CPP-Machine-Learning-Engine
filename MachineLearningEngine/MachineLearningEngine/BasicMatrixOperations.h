#pragma once
#include "Matrix.h"
#include "MatrixResult.h"
#include "MatrixRREF.h"
#include "SimpleMatrixOperations.h"

class BasicMatrixOperations
{
public:
	BasicMatrixOperations();
	~BasicMatrixOperations();
	void rowReduce(Matrix&);
	Matrix& getRowReduction(const Matrix&);
	void echelonForm(Matrix&);
	Matrix& getEchelonForm(const Matrix&);
	void echelonInverse(Matrix&);
	Matrix& getEchelonInverse(const Matrix&);
	double determinant(const Matrix&);
	Matrix& getEigenValues(const Matrix&);
	Matrix& getEigenVectors(const Matrix&);
	MatrixResult& findSolution(const Matrix&);
	Matrix& getOrthonormal(const Matrix&);

private:
	void inverseExceptions(const Matrix &matrix);

	MatrixRREF rref;
};