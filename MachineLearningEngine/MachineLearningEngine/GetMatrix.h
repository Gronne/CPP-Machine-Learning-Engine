#pragma once
#include "Matrix.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"

class GetMatrix
{
public:
	static int numberOfPivots(const Matrix&);
	static Matrix& pivotRows(const Matrix&);
	static Matrix& pivotRowsNumber(const Matrix&);
	static Matrix& pivotColumns(const Matrix&);
	static Matrix& pivotColumnsNumber(const Matrix&);
	static Matrix& span(const Matrix&);
	static Matrix& span(const Matrix&, const Matrix&);
	static double innerProductSpace(const Matrix&);
	static double innerProductSpace(const Matrix&, const Matrix&);
	static double frobeniusProductSpace(const Matrix&);
	static double frobeniusProductSpace(const Matrix&, const Matrix&);
	static double frobeniusNorm(const Matrix&);
	static double frobeniusNorm(const Matrix&, const Matrix&);
	static Matrix& getBasicVectors(const Matrix&);
	static Matrix& getTransformationMatrix(const Matrix&, const Matrix&);
	static Matrix& getZeroMatrix(int);
	static Matrix& getZeroMatrix(int, int);
	static Matrix& getZeroMatrix(const Matrix&);
	static Matrix& getIdentityMatrix(int);
	static Matrix& getIdentityMatrix(int, int);
	static Matrix& getIdentityMatrix(const Matrix&);
	static Matrix& numberSequence(double, double, double = 1);

private:
	static double calculateInnerProductSpace(const Matrix&, const Matrix&);
	static Matrix& pivotNumbers(const Matrix&, bool);
	static Matrix& extractPivots(const Matrix&, bool);
	static Matrix& makeMatrixHorizontal(const Matrix&);
	static void deleteInsertedZeroRows(Matrix&, const Matrix&);
	static Matrix& calcSpanOnePivot(Matrix&, const Matrix&);
	static bool checkPossibilityForSpan(Matrix&);
	static bool checkIfValidResult(Matrix&);
	static Matrix& findSpanVector(const Matrix&, Matrix&);
	static void extractMultipleSpanValues(Matrix&, const Matrix&);
	static bool pivotColumn(const Matrix&, const Matrix &, int, int);
	static void fillResultSpan(const Matrix&, const Matrix&, const Matrix&, Matrix&);
	static Matrix& mergeMatrixes(const Matrix&, const Matrix&);
	static void splitMatrixIntoVectors(const Matrix&, Matrix&, Matrix&);
	static void innerProductExceptions(const Matrix&, const Matrix&);
	static void fillSequenceMatrix(Matrix&, double, double, double);
};

