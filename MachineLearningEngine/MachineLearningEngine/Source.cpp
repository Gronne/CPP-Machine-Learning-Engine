#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix1 = new Matrix(3, 3);
	Matrix *matrix2 = new Matrix(3, 2);

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;

	if (*matrix1 == *matrix2)
		std::cout << "Not possible" << std::endl;

	delete matrix1;
	delete matrix2;

	exit(0);
}