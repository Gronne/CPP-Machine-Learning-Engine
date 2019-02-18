#include <iostream>
#include "Matrix.h"
#include "SimpleMatrixOperations.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 2);
	matrix->setEntry(1, 0, NULL);
	std::cout << matrix->getEntry(1, 0) << std::endl << std::endl;
	delete matrix;

	Matrix *matrix1 = new Matrix(3, 3);
	matrix1->setEntry(0, 0, 1);
	matrix1->setEntry(0, 1, 2);
	matrix1->setEntry(0, 2, 3);
	matrix1->setEntry(1, 0, 4);
	matrix1->setEntry(1, 1, 5);
	matrix1->setEntry(1, 2, 6);
	matrix1->setEntry(2, 0, 7);
	matrix1->setEntry(2, 1, 8);
	matrix1->setEntry(2, 2, 9);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	
	SimpleMatrixOperations SMO;

	SMO.addition(*matrix1, *matrix2).print();
	SMO.substraction(*matrix1, *matrix2).print();
	SMO.multiplication(*matrix1, *matrix2).print();
	SMO.hadarmard(*matrix1, *matrix2).print();
	SMO.multiplication(*matrix1, 10).print();


	delete matrix1;
	delete matrix2;

	exit(0);
}