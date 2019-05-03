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

	Matrix *matrix1 = new Matrix(2, 5);
	*matrix1 = { 5,   3.5, 1, 2.5, 4,
				 4.5, 5.5, 4, 2.5, 3.5 };

	Matrix *matrix2 = new Matrix(3, 4);
	*matrix2 = { 1, 2, 3, 4,
				 1, 2, 3, 4,
				 1, 2, 3, 4 };

	try
	{
		std::cout << GM.span(*matrix2) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	


	exit(0);
}