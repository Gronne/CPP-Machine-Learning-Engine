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
	void reduceColumnUnder(Matrix&, int, int);
	void reduceColumnOver(Matrix&, int);

	void sameSizeColumnUnder(Matrix&, int, std::vector<double>&);
	void sameSizeColumnOver(Matrix&, int, std::vector<double>&);
	void substractRow(Matrix&, int, int);
	void minimizeRow(Matrix&, int, double);
	void checkForZeroRow(Matrix&, int);
	void checkForZeroRowOver(Matrix&, int);
	void checkForFreePivot(Matrix&, int);
};

