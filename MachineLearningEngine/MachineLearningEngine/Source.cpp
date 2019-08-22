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

		CoreEntry core1 = (Entry::Variable("A") + Entry::Number(2)) + (Entry::Variable("B") + Entry::Number(4));
		std::cout << core1 << std::endl << std::endl;

		CoreEntry core2 = (Entry::Variable("A") + Entry::Number(2)) - (Entry::Variable("B") + Entry::Number(4));
		std::cout << core2 << std::endl << std::endl;

		CoreEntry core3 = (Entry::Number(2) + Entry::Complex(2)) + (Entry::Number(4) + Entry::Complex(4));
		std::cout << core3 << std::endl << std::endl;

		CoreEntry core4 = (Entry::Number(2) + Entry::Complex(2)) - (Entry::Number(4) + Entry::Complex(4));
		std::cout << core4 << std::endl << std::endl;

		CoreEntry core5 = (Entry::Number(2) + Entry::Complex(2)) + (Entry::Complex(4) + Entry::Number(4));
		std::cout << core5 << std::endl << std::endl;

		CoreEntry core6 = (Entry::Variable("A") + Entry::Number(2)) + (Entry::Variable("B") + Entry::Complex(4));
		std::cout << core6 << std::endl << std::endl;

		CoreEntry core7 = (Entry::Variable("A") / Entry::Number(2)) + (Entry::Variable("B") + Entry::Number(4));
		std::cout << core7 << std::endl << std::endl;

		CoreEntry core8 = Entry::Number(6) / Entry::Complex(6);
		std::cout << core8 << std::endl << std::endl;

		CoreEntry core9 = (Entry::Number(5) +  Entry::Complex(3)) * (Entry::Number(2) + Entry::Complex(6));
		std::cout << core9 << std::endl << std::endl;

		CoreEntry core10 = (Entry::Number(5) + Entry::Complex(3)) / (Entry::Number(2) + Entry::Complex(6));
		std::cout << core10 << std::endl << std::endl;

		CoreEntry core11 = (Entry::Number(4) + Entry::Complex(-12)) + (Entry::Number(36) + Entry::Complex(12));
		std::cout << core11 << std::endl << std::endl;

		CoreEntry core12 = Entry::Complex(6) * Entry::Complex(-6);
		std::cout << core12 << std::endl << std::endl;

		CoreEntry core13 = (Entry::Number(2) + Entry::Complex(6)) * (Entry::Number(2) + Entry::Complex(-6));
		std::cout << core13 << std::endl << std::endl;

		std::cout << "------------------" << std::endl;

		CoreEntry core14 = (Entry::Variable("A") + Entry::Number(2)) + (Entry::Variable("B") + Entry::Complex(4));
		std::cout << core14 << std::endl << std::endl;

		core14.replace(Entry::Variable("A"), Entry::Number(6));
		std::cout << core14 << std::endl << std::endl;

		core14.replace(Entry::Variable("B"), Entry::Number(6));
		std::cout << core14 << std::endl << std::endl;

		core14.replace(Entry::Number(14), Entry::Complex(6));
		std::cout << core14 << std::endl << std::endl;
		

	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?