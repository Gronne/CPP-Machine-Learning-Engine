#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 2.5);
	vec1->setEntry(0, 2, 3.5);
	vec1->setEntry(0, 0, 1.5);
	vec1->setEntry(0, 1, 3.5);
	vec1->setEntry(0, 2, 1.5);

	
	SimpleMatrixOperations SMO;
	try {
		 SMO.cross(*vec1).print();
	}
	catch (std::exception ex) {
		std::cout << ex.what() << std::endl;
	}
	
	

	delete vec1;

	exit(0);
}