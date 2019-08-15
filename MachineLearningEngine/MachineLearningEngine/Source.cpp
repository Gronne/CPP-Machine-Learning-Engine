#include <iostream>
#include "Matrix.h"
#include "string"
#include "SimpleMatrixOperations.h"
#include "BasicMatrixOperations.h"
#include "TypeMatrix.h"
#include "GetMatrix.h"
#include "ICoreEntryType.h"
#include "EntryTypeNumber.h"
#include "EntryTypeComplex.h"
#include "EntryTypeVariable.h"
#include "CoreEntry.h"

typedef long int li;


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
		std::cout << *matrix << std::endl;
		std::cout << TypeMatrix::isFullDependent(*matrix) << std::endl;

		std::cout << "---------" << std::endl;
		std::cout << std::is_same<ICoreEntryType, ICoreEntryType>::value << std::endl;
		std::cout << std::is_same<ICoreEntryType, EntryTypeNumber>::value << std::endl;

		const ICoreEntryType *number = new EntryTypeNumber();
		ICoreEntryType *a = new EntryTypeNumber();
		ICoreEntryType *b = new EntryTypeComplex();

		std::cout << ".." << std::endl;

		std::cout << (typeid(number) == typeid(new ICoreEntryType())) << std::endl;
		std::cout << (typeid(number).name() == typeid(a).name()) << std::endl;
		std::cout << (typeid(number).name() == typeid(b).name()) << std::endl;

		std::cout << ".." << std::endl;

		const EntryTypeNumber* pRect = dynamic_cast<const EntryTypeNumber*>(number);
		const EntryTypeComplex* bRect = dynamic_cast<const EntryTypeComplex*>(number);

		std::cout << (pRect != 0) << std::endl;
		std::cout << (bRect != 0) << std::endl;

		std::cout << ".." << std::endl;

		CoreEntry entry(*number);
	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?