#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"
#include "EntryFactory.h"
#include "CoreEntryFactory.h"
#include "EntryType.h"
#include "CoreEntry.h"
#include "ICoreMemory.h"
#include "AllMemory.h"
#include "ClusterMemory.h"
#include "NextMemory.h"

typedef long int li;


#define Entry CoreEntryFactory


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

		CoreEntry A = CoreEntryFactory::Number(5) + CoreEntryFactory::Complex(6);
		CoreEntry B = CoreEntryFactory::Variable("A") + CoreEntryFactory::Complex(5);
		std::cout << A << std::endl;
		std::cout << B << std::endl;

		A += B;

		std::cout << A << std::endl;

		A.replace(CoreEntryFactory::Variable("A"), CoreEntryFactory::Number(5));

		A *= CoreEntryFactory::Complex(2);

		std::cout << A << std::endl;
		


	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?