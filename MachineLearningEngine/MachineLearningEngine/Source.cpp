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
		Regression regression;

		regression.addPartLeft({ 1, "0" });
		regression.addPartLeft({ 1, "1" });

		regression.addPartRight({ 1, "1" });

		
		std::cout << std::endl << " Regression: " << regression.print() << std::endl << std::endl;


		Matrix trainingData(1, 10);
		trainingData = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		Matrix results(1, 10);
		results = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };


		regression.fitData(trainingData, results);


		std::cout << std::endl << " Fitted Regression: " << regression.print() << std::endl << std::endl;

		double error = regression.error();
		double errorNorm = regression.errorNormalized();

		std::cout << " Error: " << error << std::endl;
		std::cout << " Normalized Error: " << errorNorm << std::endl << std::endl;



		Matrix solutionValues(1, 1);
		solutionValues.setEntry(0, 0, 5);

		double solution = regression.calculateValue(solutionValues);

		std::cout << " Calculated Solution: " << solution << std::endl;
		std::cout << " Correct Solution:    " << results.getEntry(0, 4) << std::endl;


		

	}
	catch (const std::exception ex)
	{
		std::cout << ex.what() << std::endl;
	}
	

	exit(0);
}

//assert() - instead of exception?