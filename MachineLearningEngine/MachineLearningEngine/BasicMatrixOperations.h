#pragma once
#include "Matrix.h"
#include "MatrixResult.h"
#include "MatrixRREF.h"

class BasicMatrixOperations
{
public:
	BasicMatrixOperations();
	~BasicMatrixOperations();
	void rowReduce(Matrix&);
	Matrix& getRowReduction(const Matrix&);
	void echelonFrom(Matrix&);
	Matrix& getEchelonForm(const Matrix&);
	void adjugateInverse(Matrix&);
	Matrix& getAdjugateInverse(const Matrix&);
	Matrix& getEigenValues(const Matrix&);
	Matrix& getEigenVectors(const Matrix&);
	MatrixResult& findSolution(const Matrix&);
	Matrix& getOrthonormal(const Matrix&);

private:
	MatrixRREF rref;
};