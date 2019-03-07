#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(3, 3);
	matrix->setEntry(0, 0, 1.234);
	matrix->setEntry(0, 1, 2.23);
	matrix->setEntry(0, 2, 3);
	matrix->setEntry(1, 0, 1);
	matrix->setEntry(1, 1, 2);
	matrix->setEntry(1, 2, 3.234234);
	matrix->setEntry(2, 0, 1);
	matrix->setEntry(2, 1, 2);
	matrix->setEntry(2, 2, 3);

	Matrix *matrix2 = new Matrix();
	*matrix2 = *matrix;
	*matrix2 *= *matrix + *matrix2;


	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;

	try
	{
		matrix->print();
		std::cout << TM.rank(*matrix) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}