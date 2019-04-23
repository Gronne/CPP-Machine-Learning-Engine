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

	Matrix *matrixA = new Matrix(2, 3);
	*matrixA = { -1, 2, -3,
				 4, -5, 6 };

	Matrix *matrixB = new Matrix(2, 3);
	*matrixB = { -0.9999, 2, -3,
				 4, -5, 6 };

	try
	{
		std::cout << TM.isEqual(*matrixA, *matrixB, 1) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrixA;
	delete matrixB;

	exit(0);
}