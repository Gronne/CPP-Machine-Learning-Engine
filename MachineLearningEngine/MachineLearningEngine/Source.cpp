#include <iostream>
#include "Matrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 2);
	matrix->setEntry(1, 0, NULL);
	std::cout << matrix->getEntry(1, 0) << std::endl << std::endl;
	delete matrix;

	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 100.32);
	matrix1->setEntry(0, 1, 10);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 10);
	matrix1->setEntry(1, 2, 1);
	matrix1->setEntry(2, 0, 41);
	matrix1->setEntry(2, 1, 14);
	matrix1->setEntry(2, 2, 6);

	matrix1->scale(5);
	matrix1->print();

	delete matrix1;

	exit(0);
}