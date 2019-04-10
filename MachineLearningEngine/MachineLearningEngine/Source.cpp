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

	Matrix *buffer = new Matrix();
	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 1, 2, 3,
				3, 2, 1,
				2, 3, 1};

	Matrix *secMat = new Matrix(3, 3);
	*secMat = { 1, 0, 0,
				0, 1, 0,
				0, 0, 1 };

	try
	{
		std::cout << *matrix * *secMat;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}