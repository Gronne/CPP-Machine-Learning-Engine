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
	Matrix *matrix = new Matrix(3, 4);

	*matrix = { 0, 0, 0, 1,
				0, 0, 0, 0,
				0, 0, 0, 0 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 5,
				1,
				5, };

	try
	{
		Matrix *buffer = new Matrix();

		//std::cout << BMO.determinant(*matrix);
		//std::cout << TM.dependent(*matrix);
		std::cout << BMO.getEchelonForm(*matrix);
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}