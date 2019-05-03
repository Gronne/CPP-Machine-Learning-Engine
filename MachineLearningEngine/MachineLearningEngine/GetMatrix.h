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
	Matrix& getZeroMatrix(int) const;
	Matrix& getZeroMatrix(int, int) const;
	Matrix& getZeroMatrix(const Matrix&) const;
	Matrix& getIdentityMatrix(int) const;
	Matrix& getIdentityMatrix(int, int) const;
	Matrix& getIdentityMatrix(const Matrix&) const;
	Matrix& numberSequence(double, double, double = 1) const;

private:
	double calculateInnerProductSpace(const Matrix&, const Matrix&);
	Matrix& pivotNumbers(const Matrix&, bool);
	Matrix& extractPivots(const Matrix&, bool);
	Matrix& makeMatrixHorizontal(const Matrix&);
	void deleteInsertedZeroRows(Matrix&, const Matrix&);
	Matrix& calcSpanOnePivot(Matrix&, const Matrix&);
	bool checkPossibilityForSpan(Matrix&);
	bool checkIfValidResult(Matrix&);
	Matrix& findSpanVector(const Matrix&, Matrix&);
	void extractMultipleSpanValues(Matrix&, const Matrix&);
	bool pivotColumn(const Matrix&, const Matrix &, int, int);
	void fillResultSpan(const Matrix&, const Matrix&, const Matrix&, Matrix&);
	Matrix& mergeMatrixes(const Matrix&, const Matrix&);
	void splitMatrixIntoVectors(const Matrix&, Matrix&, Matrix&);
	void innerProductExceptions(const Matrix&, const Matrix&);
	void fillSequenceMatrix(Matrix&, double, double, double) const;
};

