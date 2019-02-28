#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix1 = new Matrix(1, 2);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);

	
	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	try {
		matrix1->print();
		BMO.getEchelonForm(*matrix1).print();
	}
	catch (std::exception ex) {
		std::cout << ex.what() << std::endl;
	}
	
	

	delete matrix1;

	exit(0);
}