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

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix1;
	matrix2->transpose();

	//(*matrix1 + *matrix2).print();
	Matrix *matrix3 = new Matrix();
	*matrix3 = *matrix1;
	matrix3->transpose();

	*matrix2 = *matrix1 + *matrix1;
	*matrix2 = *matrix1 - *matrix1;
	*matrix2 = *matrix1 * *matrix3;
	*matrix2 = *matrix1 * 4;
	*matrix2 = *matrix1 / 0.25;

	delete matrix1;
	delete matrix2;
	delete matrix3;

	exit(0);
}