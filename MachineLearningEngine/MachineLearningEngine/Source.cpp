#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"
#include "EntryFactory.h"
#include "EntryType.h"
#include "CoreEntry.h"

typedef long int li;


#define Entry EntryFactory


int main(int argc, char ** argv) {
	std::cout << "hello" << std::endl;

	SimpleMatrixOperations SMO;
	BasicMatrixOperations BMO;
	TypeMatrix TM;
	GetMatrix GM;

	Matrix *matrix = new Matrix(3, 3);
	*matrix = { 0, 0, 0,
				0, 0, 0,
				0, 0, 0 };

	try
	{
		std::cout << "Start: " << std::endl << std::endl;

		EntryType number = EntryFactory::Number(5);
		EntryType complex = EntryFactory::Complex(3);
		EntryType variable = EntryFactory::Variable("A");

		std::cout << number.print() << std::endl;
		std::cout << complex.print() << std::endl;
		std::cout << variable.print() << std::endl;

		std::cout << "-------" << std::endl;

		CoreEntry coreNumber(number);
		CoreEntry coreComplex(complex);
		CoreEntry coreVariable(variable);
		
		std::cout << coreNumber.print() << std::endl;
		std::cout << coreComplex.print() << std::endl;
		std::cout << coreVariable.print() << std::endl;

		std::cout << "-------" << std::endl;

		coreVariable = coreComplex;
		coreNumber += coreComplex;

		std::cout << coreNumber.print() << std::endl;
		std::cout << coreComplex.print() << std::endl;
		std::cout << coreVariable.print() << std::endl;

		std::cout << "-------" << std::endl;

		coreComplex -= coreComplex;

		std::cout << coreNumber.print() << std::endl;
		std::cout << coreComplex.print() << std::endl;
		std::cout << coreVariable.print() << std::endl;

		std::cout << "-------" << std::endl;

		coreNumber *= coreComplex;

		std::cout << coreNumber.print() << std::endl;
		std::cout << coreComplex.print() << std::endl;
		std::cout << coreVariable.print() << std::endl;

		std::cout << "-------" << std::endl;

		coreNumber /= coreVariable;

		std::cout << coreNumber.print() << std::endl;
		std::cout << coreComplex.print() << std::endl;
		std::cout << coreVariable.print() << std::endl;

	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?