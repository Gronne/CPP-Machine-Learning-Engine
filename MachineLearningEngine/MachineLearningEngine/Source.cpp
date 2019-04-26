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

	Matrix *matrix = new Matrix(4, 5);
	*matrix = { 1, 2, 3, 4, 5,
				3, 1, 5, 6, 2,
				5, 1, 6, 2, 2,
				5, 1, 6, 2, 3 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, -4.285714 };


	try
	{
		BMO.rowReduce(*matrix);
		std::cout << *matrix << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}