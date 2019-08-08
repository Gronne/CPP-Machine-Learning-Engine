#ifndef H_SIMPLEMATRIXOPERATIONS
#define H_SIMPLEMATRIXOPERATIONS

#include "Matrix.h"
#include "GetMatrix.h"

class SimpleMatrixOperations
{
public:
	static Matrix& addition(Matrix&, Matrix&);
	static Matrix& addition(Matrix&, double);
	static Matrix& substraction(Matrix&, Matrix&);
	static Matrix& substraction(Matrix&, double);
	static Matrix& multiplication(Matrix&, Matrix&);
	static Matrix& multiplication(Matrix&, double);
	static Matrix& hadamard(Matrix&, Matrix&);
	static void inverse(Matrix&);
	static Matrix& getInverse(const Matrix&);
	static double determinant(const Matrix&);
	static Matrix& cross(const Matrix&);
	static double dot(const Matrix&, const Matrix&);
	static double dot(const Matrix&, int, int, bool = 0);
	static double lengthOfVector(const Matrix&);
	static double lengthOfVector(const Matrix&, bool, int);
	static double norm(const Matrix&, bool = 1);
	static double sum(Matrix&);
	static double findMaxValue(const Matrix&);

private:
	static void setDeterminantMatrix(const Matrix&, Matrix&, int, int);
	static void setInverseMatrix(const Matrix&, Matrix&);
	static double calculateDotProduct(const Matrix&, const Matrix&);
	static double calculateVectorLength(const Matrix&);
	static void shiftInverseEntries(Matrix&);
	static Matrix& calculateInverse(const Matrix&, double);
	static void inverseExceptions(const Matrix&, double);
	static void setInverseMatrix2x2(const Matrix&, Matrix&);
	static void setDeterminantEntry(const Matrix&, Matrix&, int, int);
	static double determinantRecursive(const Matrix&);
	static Matrix& transformSingleCrossValues(const Matrix&);
	static double calculateCrossValue(const Matrix&, int);
	static void lengthOfVectorExceptions(const Matrix&, bool, int);
	static Matrix& createNormBuffer(const Matrix&, bool);
	static void fillNormVector(const Matrix&, Matrix&, bool);
	static double calculateDeterminantValue(const Matrix&, int);
	static void hadamardExceptions(const Matrix&, const Matrix&);
	static void determinantExceptions(const Matrix&);
	static void crossExceptions(const Matrix&);
	static void dotExceptions(const Matrix&, const Matrix&);
};

#endif

