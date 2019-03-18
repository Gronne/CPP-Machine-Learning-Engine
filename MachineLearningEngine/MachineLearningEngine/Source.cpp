#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(2, 2);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 5);
	matrix->setEntry(1, 0, 4);
	matrix->setEntry(1, 1, 3);

	Matrix *matrix2 = new Matrix(2, 2);
	matrix2->setEntry(0, 0, 20);
	matrix2->setEntry(0, 1, 33);
	matrix2->setEntry(1, 0, 46);
	matrix2->setEntry(1, 1, 47);

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	try
	{
		matrix->print();
		matrix2->print();
		std::cout << GM.forbeniusProductSpace(*matrix) << std::endl;
		GM.getTransformationMatrix(*matrix, *matrix2).print();
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}