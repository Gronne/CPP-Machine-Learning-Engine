#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(4, 4);
	matrix->setEntry(0, 0, 0);
	matrix->setEntry(0, 1, 1);
	matrix->setEntry(0, 2, 0);
	matrix->setEntry(0, 3, 0);
	matrix->setEntry(1, 0, 0);
	matrix->setEntry(1, 1, 0);
	matrix->setEntry(1, 2, 0);
	matrix->setEntry(1, 3, 1);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 0);
	matrix->setEntry(2, 2, 0);
	matrix->setEntry(2, 3, 0);
	matrix->setEntry(3, 0, 0);
	matrix->setEntry(3, 1, 0);
	matrix->setEntry(3, 2, 1);
	matrix->setEntry(3, 3, 0);

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;

	try
	{
		BMO.getEchelonForm(*matrix).print();
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}