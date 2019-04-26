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

	Matrix *matrix = new Matrix(3, 4);
	*matrix = { 1.5, -2.5, 3.5, -4.5,
				3.5, -1.5, 5.5, -6.5,
				5.5, -1.5, 6.5, -2.5 };

	Matrix *result = new Matrix(3, 4);
	*result = { 1, 0, 0,  4.14285,
				0, 1, 0, -1.71428,
				0, 0, 1, -4.285714 };


	try
	{
		std::cout << BMO.getEchelonForm(*matrix) << std::endl;
		TM.isEqual(BMO.getEchelonForm(*matrix), *result, 0.0001);
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}