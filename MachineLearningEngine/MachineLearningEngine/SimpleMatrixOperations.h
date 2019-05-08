#ifndef H_SIMPLEMATRIXOPERATIONS
#define H_SIMPLEMATRIXOPERATIONS

#include "Matrix.h"
#include "GetMatrix.h"

class SimpleMatrixOperations
{
public:
	SimpleMatrixOperations();
	~SimpleMatrixOperations();
	Matrix& addition(Matrix&, Matrix&) const;
	Matrix& addition(Matrix&, double) const;
	Matrix& substraction(Matrix&, Matrix&) const;
	Matrix& substraction(Matrix&, double) const;
	Matrix& multiplication(Matrix&, Matrix&) const;
	Matrix& multiplication(Matrix&, double) const;
	Matrix& hadamard(Matrix&, Matrix&) const;
	void inverse(Matrix&);
	Matrix& getInverse(const Matrix&);
	double determinant(const Matrix&);
	Matrix& cross(const Matrix&);
	double dot(const Matrix&, const Matrix&);
	double dot(const Matrix&, int, int, bool = 0);
	double lengthOfVector(const Matrix&);
	double lengthOfVector(const Matrix&, bool, int);
	double norm(const Matrix&, bool = 1);
	double sum(Matrix&) const;
	double findMaxValue(const Matrix&);

private:
	void setDeterminantMatrix(const Matrix&, Matrix&, int, int);
	void setInverseMatrix(const Matrix&, Matrix&);
	double calculateDotProduct(const Matrix&, const Matrix&);
	double calculateVectorLength(const Matrix&);
	void shiftInverseEntries(Matrix&);
	Matrix& calculateInverse(const Matrix&, double);
	void inverseExceptions(const Matrix&, double);
	void setInverseMatrix2x2(const Matrix&, Matrix&);
	void setDeterminantEntry(const Matrix&, Matrix&, int, int);
	double determinantRecursive(const Matrix&);
	Matrix& transformSingleCrossValues(const Matrix&);
	double calculateCrossValue(const Matrix&, int);
	void lengthOfVectorExceptions(const Matrix&, bool, int);
	Matrix& createNormBuffer(const Matrix&, bool);
	void fillNormVector(const Matrix&, Matrix&, bool);
	double calculateDeterminantValue(const Matrix&, int);
};

#endif

