#include <iostream>
#include "Matrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 2);
	matrix->setEntry(1, 0, NULL);
	std::cout << matrix->getEntry(1, 0) << std::endl << std::endl;
	delete matrix;

	Matrix *matrix1 = new Matrix(2, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);

	std::vector<int> intVector = { 0, 1 };

	Matrix *matrix2 = new Matrix();
	*matrix2 = matrix1->getRows(intVector);

	delete matrix1;

	std::cout << matrix2->getEntry(0, 0) << std::endl;
	std::cout << matrix2->getEntry(0, 1) << std::endl;
	std::cout << matrix2->getEntry(0, 2) << std::endl;
	std::cout << matrix2->getEntry(1, 0) << std::endl;
	std::cout << matrix2->getEntry(1, 1) << std::endl;
	std::cout << matrix2->getEntry(1, 2) << std::endl;

	
	delete matrix2;

	exit(0);
}