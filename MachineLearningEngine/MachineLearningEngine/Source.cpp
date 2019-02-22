#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix1 = new Matrix(3, 4);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(1, 0, -1);
	matrix1->setEntry(1, 1, -2);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(1, 3, 3);
	matrix1->setEntry(2, 0, 3);
	matrix1->setEntry(2, 1, 1);
	matrix1->setEntry(2, 2, 4);
	matrix1->setEntry(2, 3, 1);

	
	SimpleMatrixOperations SMO;
	SMO.cross(*matrix1).print();
	

	delete matrix1;

	exit(0);
}