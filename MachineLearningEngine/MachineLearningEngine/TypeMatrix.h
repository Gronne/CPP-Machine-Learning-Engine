#pragma once
#include "Matrix.h"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"

class TypeMatrix
{
public:
	static bool dependent(const Matrix&);
	static bool homogeneous(const Matrix&);
	static bool trivial(const Matrix&);
	static bool basis(const Matrix&);
	//static bool basis(Matrix&, MatrixSpace&);
	static bool orthogonal(Matrix&, Matrix&);
	static bool orthogonal(const Matrix&);
	static int rank(const Matrix&);
	//static int rank(const MatrixResult&);
	static bool fullRank(const Matrix&);
	//static bool fullRank(const MatrixResult&);
	static int span(const Matrix&);
	static bool isInSpan(const Matrix&, const Matrix&, bool = 0);
	static bool checkSpan(const Matrix&, const Matrix&);
	static bool isomorphic(Matrix&, Matrix&);
	static bool isSquare(const Matrix&);
	static bool isEqual(const Matrix&, const Matrix&, double = 0);
	static bool isZeroMatrix(const Matrix&);
	static bool isSameSize(const Matrix&, const Matrix&);
	static bool isFullDependent(const Matrix&);

private:
	static int findRankFromRREF(Matrix&);
	static bool isEqualEntry(double, double, double);
	static bool checkIfAllRowsIsEqual(const Matrix&);
	static void makeRowsSameSize(Matrix&);
};

