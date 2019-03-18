#pragma once
#include "Matrix.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"

class GetMatrix
{
public:
	GetMatrix();
	~GetMatrix();

	int numberOfPivots(const Matrix&);
	Matrix& pivotRows(const Matrix&);
	Matrix& pivotColumns(const Matrix&);
	Matrix& span(const Matrix&);
	double span(const Matrix&, const Matrix&);
	double innerProductSpace(const Matrix&);
	double innerProductSpace(const Matrix&, const Matrix&);
	double forbeniusProductSpace(const Matrix&);
	double forbeniusProductSpace(const Matrix&, const Matrix&);
	Matrix& getBasicVectors(const Matrix&);
	Matrix& getTransformationMatrix(const Matrix&, const Matrix&);

private:
	double calculateInnerProductSpace(const Matrix&, const Matrix&);
};

