#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *vec1 = new Matrix(2, 1);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(1, 0, 1);

	
	SimpleMatrixOperations SMO;
	try {
		std::cout << SMO.dot(*vec1, 0, 1, 1) << std::endl;
	}
	catch (std::exception ex) {
		std::cout << ex.what() << std::endl;
	}
	
	

	delete vec1;

	exit(0);
}