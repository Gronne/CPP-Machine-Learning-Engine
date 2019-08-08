#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"

typedef long int li;


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	Matrix *matrix = new Matrix(1, 1);
	matrix->setEntry(0, 0, 5);

	Matrix *buffer = new Matrix();
	*buffer = *matrix;

	

	try
	{
		std::cout << *matrix << std::endl;
		std::cout << SimpleMatrixOperations::getInverse(*matrix) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?