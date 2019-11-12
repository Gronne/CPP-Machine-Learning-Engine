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
#include "CoreMemoryFactory.h"
#include "AllMemory.h"
#include "ClusterMemory.h"
#include "NextMemory.h"
#include "AllMemory.h"

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
		/*

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

		*/

		ICoreMemory *matrix = &CoreMemoryFactory::all({ 3, 3, 3 });
		matrix->set({ 0, 0, 0 }, CoreEntryFactory::Number(5));
		matrix->set({ 1, 0, 2 }, CoreEntryFactory::Complex(4));
		matrix->set({ 0, 1, 2 }, CoreEntryFactory::Variable("A"));

		std::cout << matrix->get({ 0, 0, 0 }) << std::endl;
		std::cout << matrix->get({ 1, 0, 2 }) << std::endl;
		std::cout << matrix->get({ 0, 1, 2 }) << std::endl;

		matrix->set({ 0, 0, 0 }, CoreEntry(matrix->get({ 0, 0, 0 }) + matrix->get({ 1, 0, 2 })));
		std::cout << matrix->get({ 0, 0, 0 }) << std::endl;

	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?