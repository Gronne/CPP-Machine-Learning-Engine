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
	Matrix& pivotRowsNumber(const Matrix&);
	Matrix& pivotColumns(const Matrix&);
	Matrix& pivotColumnsNumber(const Matrix&);
	Matrix& span(const Matrix&);
	Matrix& span(const Matrix&, const Matrix&);
	double innerProductSpace(const Matrix&);
	double innerProductSpace(const Matrix&, const Matrix&);
	double frobeniusProductSpace(const Matrix&);
	double frobeniusProductSpace(const Matrix&, const Matrix&);
	double frobeniusNorm(const Matrix&);
	double frobeniusNorm(const Matrix&, const Matrix&);
	Matrix& getBasicVectors(const Matrix&);
	Matrix& getTransformationMatrix(const Matrix&, const Matrix&);
	Matrix& getZeroMatrix(int, int) const;
	Matrix& getZeroMatrix(int) const;
	Matrix& getIdentityMatrix(int, int) const;
	Matrix& getIdentityMatrix(int) const;

private:
	double calculateInnerProductSpace(const Matrix&, const Matrix&);
	Matrix& pivotNumbers(const Matrix&, bool);
	void sortMatrix(Matrix&);
};

