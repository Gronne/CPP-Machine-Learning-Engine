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
	Matrix *matrix = new Matrix(2, 3);
	*matrix = { 0, 0, 1,
				0, 0, 1 };

	Matrix *secMat = new Matrix(3, 1);
	*secMat = { 5,
				1,
				5, };

	try
	{
		std::cout << GM.innerProductSpace(*matrix) << std::endl;
		double value = SMO.lengthOfVector(matrix->getRow(0));
		double value2 =  SMO.dot(matrix->getRow(0), matrix->getRow(1));

		std::cout << value << std::endl;
		std::cout << value*value << std::endl;
		std::cout << value2 << std::endl;
		std::cout << value2 / (value*value) << std::endl;
		std::cout << acos(value2 / (value*value)) << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	delete matrix;

	exit(0);
}