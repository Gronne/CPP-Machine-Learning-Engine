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
#include "RegressionPart.h"
#include "Regression.h"

typedef long int li;


#define Entry CoreEntryFactory


int main(int argc, char ** argv) {

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
		RegressionPart part1(1, "110");
		RegressionPart part3(1, "000");
		RegressionPart part5(2, "010");
		RegressionPart part6(1, "001");
		RegressionPart part7(4, "011");

		Matrix matrix(3, 10);
		matrix = {  1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
					11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
					21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };

		std::cout << matrix << std::endl << std::endl;

		Regression regression;
		regression.addPartLeft(part3);
		regression.addPartLeft(part1);
		regression.addPartLeft(part5);

		regression.addPartRight(part6);
		regression.addPartRight(part7);

		std::cout << regression.print() << std::endl;

		regression.fitData(matrix);
		std::cout << regression.print() << std::endl;

		std::cout << regression.calculateValue(matrix.getColumn(1)) << std::endl;

	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?