#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix1 = new Matrix(5, 5);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(0, 3, 4);
	matrix1->setEntry(0, 4, 5);
	matrix1->setEntry(1, 0, 6);
	matrix1->setEntry(1, 1, -2);
	matrix1->setEntry(1, 2, 3);
	matrix1->setEntry(1, 3, 1);
	matrix1->setEntry(1, 4, 1);
	matrix1->setEntry(2, 0, 2);
	matrix1->setEntry(2, 1, 3);
	matrix1->setEntry(2, 2, 4);
	matrix1->setEntry(2, 3, -5);
	matrix1->setEntry(2, 4, 6);
	matrix1->setEntry(3, 0, 7);
	matrix1->setEntry(3, 1, 2);
	matrix1->setEntry(3, 2, 1);
	matrix1->setEntry(3, 3, 1);
	matrix1->setEntry(3, 4, 2);
	matrix1->setEntry(4, 0, 3);
	matrix1->setEntry(4, 1, 4);
	matrix1->setEntry(4, 2, 5);
	matrix1->setEntry(4, 3, 6);
	matrix1->setEntry(4, 4, -7);
	
	SimpleMatrixOperations SMO;
	std::cout << SMO.determinant(*matrix1) << std::endl;
	SMO.inverse(*matrix1).print();

	delete matrix1;

	exit(0);
}