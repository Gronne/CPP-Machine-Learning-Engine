#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *matrix = new Matrix(2, 3);
	matrix->setEntry(0, 0, 1);
	matrix->setEntry(0, 1, 2);
	matrix->setEntry(0, 2, 5);
	matrix->setEntry(1, 0, 3);
	matrix->setEntry(1, 1, 5);
	matrix->setEntry(1, 2, 1);

	Matrix *matrix2 = new Matrix(2, 1);
	matrix2->setEntry(0, 0, 20);
	matrix2->setEntry(1, 0, 4);

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	

	try
	{
		*matrix = { 1, 2, 3, 
					4, 5, 6 };
		
		std::cout << *matrix;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}