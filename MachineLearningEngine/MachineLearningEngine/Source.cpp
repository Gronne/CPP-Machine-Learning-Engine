#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"

typedef long int li;


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	Matrix *matrixA = new Matrix(2, 4);
	*matrixA = { 1, 2, 3, 4,
				4, 5, 6, 7 };

	Matrix *rows = new Matrix(3, 1);
	*rows = { 0, 2, 3 };


	try
	{
		matrixA->deleteColumn(*rows);
		std::cout << *matrixA;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrixA;

	exit(0);
}