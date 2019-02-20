#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix1 = new Matrix(1, 3);
	Matrix *matrix2 = new Matrix(3, 1);
	matrix1->setEntry(0, 0, 5);
	matrix1->setEntry(0, 1, -4);
	matrix1->setEntry(0, 2, 3);
	matrix2->setEntry(0, 0, -7);
	matrix2->setEntry(1, 0, 2);
	matrix2->setEntry(2, 0, -8);
	
	SimpleMatrixOperations SMO;
	std::cout << SMO.dot(*matrix1, *matrix2) << std::endl;
	SMO.cross(*matrix2, *matrix1).print();

	delete matrix1;
	delete matrix2;

	exit(0);
}