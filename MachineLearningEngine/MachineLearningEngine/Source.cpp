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

	Matrix *matrix1 = new Matrix(1, 5);
	*matrix1 = { 5, 3, 1, 2, 4 };

	Matrix *matrix2 = new Matrix(5, 1);
	*matrix2 = { 5, 3, 1, 2, 4 };

	try
	{
		std::cout << matrix2->sort(0, 1, 0) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	


	exit(0);
}