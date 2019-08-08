#pragma once
#include "Matrix.h"
#include "MatrixRREF.h"
#include "SimpleMatrixOperations.h"

class BasicMatrixOperations
{
public:
	static void rowReduce(Matrix&);
	static Matrix& getRowReduction(const Matrix&);
	static void echelonForm(Matrix&);
	static Matrix& getEchelonForm(const Matrix&);
	static void echelonInverse(Matrix&);
	static Matrix& getEchelonInverse(const Matrix&);
	static double determinant(const Matrix&);
	static Matrix& getEigenValues(const Matrix&);
	static Matrix& getEigenVectors(const Matrix&);
	//static MatrixResult& findSolution(const Matrix&);
	static Matrix& getOrthonormal(const Matrix&);

private:
	static void inverseExceptions(const Matrix &);
	static void determinantExceptions(const Matrix&);
	static Matrix& singleValueInverse(const Matrix&);
	static double diagonalProduct(const Matrix&);
};