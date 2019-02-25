#pragma once
#include "Matrix.h"
class MatrixRREF
{
public:
	MatrixRREF();
	~MatrixRREF();

	Matrix& rowReduceUnder(const Matrix&);
	Matrix& rowReduceOver(Matrix&);

private:
	void reduceColumnUnder(Matrix&, int);
	void reduceColumnOver(Matrix&, int);

	void sameSizeColumn(Matrix&, int, std::vector<double>&);
	void substractRow(Matrix&, int, int);
	void minimizeRow(Matrix&, int, double);
	void chechForZeroRow(Matrix&, int);
};

