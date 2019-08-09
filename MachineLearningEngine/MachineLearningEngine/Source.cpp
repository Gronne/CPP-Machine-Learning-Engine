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

	Matrix *matrix = new Matrix(4, 6);
	*matrix = { 1, 2, 3, 4, 5, 5,
				3, 1, 5, 6, 2, 3,
				5, 1, 6, 2, 2, 2,
				5, 1, 6, 2, 3, 3 };

	

	try
	{
		std::cout << *matrix << std::endl;
		std::cout << BasicMatrixOperations::getEchelonForm(*matrix) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?