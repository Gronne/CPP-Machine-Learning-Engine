#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, -1.5);
	matrix->setEntry(0, 1, -2.5);
	matrix->setEntry(0, 2, -3.5);
	matrix->setEntry(1, 0, -2.5);
	matrix->setEntry(1, 1, -2.5);
	matrix->setEntry(1, 2, -3.5);
	matrix->setEntry(2, 0, -4.5);
	matrix->setEntry(2, 1, -1.5);
	matrix->setEntry(2, 2, -3.5);

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;

	try
	{
		BMO.getRowReduction(*matrix).print();
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}