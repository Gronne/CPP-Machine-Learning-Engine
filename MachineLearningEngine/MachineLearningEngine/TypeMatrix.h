#pragma once
#include "Matrix.h"
#include "MatrixSpace.h"
#include "MatrixResult.h"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"

class TypeMatrix
{
public:
	TypeMatrix();
	~TypeMatrix();

	bool dependent(const Matrix&);
	bool homogeneous(const Matrix&);
	bool trivial(const Matrix&);
	bool basis(const Matrix&);
	bool basis(Matrix&, MatrixSpace&) const;
	bool orthogonal(Matrix&, Matrix&) const;
	bool orthogonal(const Matrix&);
	int rank(const Matrix&);
	int rank(const MatrixResult&);
	bool fullRank(const Matrix&);
	bool fullRank(const MatrixResult&);
	bool checkSpan(Matrix&, Matrix&) const;
	bool isomorphic(Matrix&, Matrix&) const;

private:


};

