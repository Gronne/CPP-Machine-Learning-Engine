#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	Matrix *vec1 = new Matrix(2, 2);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 1);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 1);
	Matrix *vec2 = new Matrix(2, 2);
	vec2->setEntry(0, 0, 2);
	vec2->setEntry(0, 1, 2);
	vec2->setEntry(1, 0, 2);
	vec2->setEntry(1, 1, 2);

	
	SimpleMatrixOperations SMO;
	try {
		vec1->print();
		vec1->appendMatrix(*vec2, 1);
		vec1->print();
	}
	catch (std::exception ex) {
		std::cout << ex.what() << std::endl;
	}
	
	

	delete vec1;

	exit(0);
}