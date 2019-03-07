#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 2);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 6);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 8);
	matrix->setEntry(2, 2, 1);

	Matrix *spanMatrix = new Matrix(3, 1);
	spanMatrix->setEntry(0, 0, 1);
	spanMatrix->setEntry(1, 0, 3);
	spanMatrix->setEntry(2, 0, 5);


	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;

	try
	{
		matrix->print();
		std::cout << TM.checkSpan(*matrix, *spanMatrix) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}