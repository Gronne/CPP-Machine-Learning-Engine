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

	Matrix *matrix = new Matrix();
	Matrix *resizeMatrix = new Matrix();

	

	try
	{
		resizeMatrix->setMatrixSize(1, 1);
		matrix->setMatrixSize(*resizeMatrix);
		std::cout << matrix->getNumberOfRows() << std::endl;
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	


	exit(0);
}