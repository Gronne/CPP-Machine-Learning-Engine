#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 3);
	matrix->setEntry(1, 2, 1);
	matrix->setEntry(2, 0, 4);
	matrix->setEntry(2, 1, 6);
	matrix->setEntry(2, 2, 2);

	
	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	try {
		matrix->print();
		BMO.getEchelonInverse(*matrix).print();
	}
	catch (std::exception ex) {
		std::cout << ex.what() << std::endl;
	}
	
	

	delete matrix;

	exit(0);
}