#pragma once
#include "Matrix.h"

class MatrixRREF
{
public:
	MatrixRREF();
	~MatrixRREF();

	Matrix& rowReduceUnder(const Matrix&);
	Matrix& rowReduceOver(Matrix&);

	bool checkForFullDependentMatrix(const Matrix&);

private:
	Matrix& reduceRowsUnder(Matrix&);
	Matrix& reduceRowsOver(Matrix&);
	void reduceColumnUnder(Matrix&, int, int);
	void reduceColumnOver(Matrix&, int);

	void sameSizeColumnUnder(Matrix&, int, std::vector<double>&);
	void sameSizeColumnOver(Matrix&, int, std::vector<double>&);
	void substractRow(Matrix&, int, int);
	Matrix& minimizeAllRows(Matrix&);
	void minimizeRow(Matrix&, int, double);
	void correctForZeroRow(Matrix&, int);
	void correctForZeroRowOver(Matrix&, int);
	void checkForFreePivot(Matrix&, int);

	bool checkIfAllRowsIsEqual(const Matrix&);
	bool checkIfPreColsIsAllZero(const Matrix&, int, int);
	double columnProduct(const Matrix&, int, int, int);
};

