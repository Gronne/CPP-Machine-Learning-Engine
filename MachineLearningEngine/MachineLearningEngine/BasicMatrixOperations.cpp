#include "BasicMatrixOperations.h"



BasicMatrixOperations::BasicMatrixOperations()
{
}

BasicMatrixOperations::~BasicMatrixOperations()
{

}


void BasicMatrixOperations::rowReduce(Matrix &matrix)
{
	matrix = getRowReduction(matrix);
}


Matrix & BasicMatrixOperations::getRowReduction(const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	*returnMatrix = rref.rowReduceUnder(matrix);
	return *returnMatrix;
}


void BasicMatrixOperations::echelonForm(Matrix &matrix)
{
	matrix = getEchelonForm(matrix);
}


Matrix & BasicMatrixOperations::getEchelonForm(const Matrix &matrix)
{
	Matrix *returnMatrix = new Matrix();
	*returnMatrix = rref.rowReduceUnder(matrix);
	*returnMatrix = rref.rowReduceOver(*returnMatrix);
	return *returnMatrix;
}


void BasicMatrixOperations::echelonInverse(Matrix &matrix)
{
	matrix = getEchelonInverse(matrix);
}


Matrix & BasicMatrixOperations::getEchelonInverse(const Matrix &matrix)
{
	Matrix *resultMatrix = new Matrix();
	*resultMatrix = matrix;

	SimpleMatrixOperations SMO;
	resultMatrix->appendMatrix(SMO.makeIdentityMatrix(matrix.getNumberOfRows()));
	
	resultMatrix->print();
	echelonForm(*resultMatrix);

	std::vector<int> columns;
	for (int col = matrix.getNumberOfColumns(); col < resultMatrix->getNumberOfColumns(); col++)
		columns.push_back(col);
	resultMatrix->setMatrix(&resultMatrix->getColumns(columns));
	return *resultMatrix;
}


Matrix & BasicMatrixOperations::getEigenValues(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}


Matrix & BasicMatrixOperations::getEigenVectors(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}


MatrixResult & BasicMatrixOperations::findSolution(const Matrix &)
{
	MatrixResult *matrix = new MatrixResult();
	return *matrix;
}


Matrix & BasicMatrixOperations::getOrthonormal(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}

