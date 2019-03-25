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

	Matrix *matrix2 = new Matrix(2, 1);
	matrix2->setEntry(0, 0, 20);
	matrix2->setEntry(1, 0, 4);

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	

	try
	{
		*matrix = { 1, 1,
				    2, 2 };
		
		std::cout << *matrix;
		std::cout << GM.pivotColumnsNumber(*matrix);
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}