#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"

int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	Matrix *matrix = new Matrix(2, 4);
	*matrix = { 1, 2, 3, 4,
				5, 6, 7, 8 };

	try
	{
		std::cout << GM.frobeniusProductSpace(*matrix) << std::endl;
		std::cout << GM.frobeniusProductSpace(*matrix, *matrix) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}