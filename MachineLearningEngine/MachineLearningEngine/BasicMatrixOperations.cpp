#include "BasicMatrixOperations.h"



BasicMatrixOperations::BasicMatrixOperations()
{
}


BasicMatrixOperations::~BasicMatrixOperations()
{
}

void BasicMatrixOperations::rowReduce(Matrix &)
{
}

Matrix & BasicMatrixOperations::getRowReduction(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}

void BasicMatrixOperations::echelonFrom(Matrix &)
{
}

Matrix & BasicMatrixOperations::getEchelonForm(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
}

void BasicMatrixOperations::adjugateInverse(Matrix &)
{
}

Matrix & BasicMatrixOperations::getAdjugateInverse(const Matrix &)
{
	Matrix *matrix = new Matrix();
	return *matrix;
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
