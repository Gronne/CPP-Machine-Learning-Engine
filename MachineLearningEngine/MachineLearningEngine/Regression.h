#pragma once

#include "Matrix.h"
#include "BasicMatrixOperations.h"
#include "RegressionPart.h"
#include <string>
#include <iostream>

class Regression
{
public:
	Regression();
	~Regression();

	void addPartLeft(RegressionPart part);
	void addPartRight(RegressionPart part);
	void fitData(Matrix data);

	void calculate(Matrix vector);

	std::string print(void);


private:
	std::string printLeftParts(std::vector<RegressionPart>&, int);
	std::string printRightParts(std::vector<RegressionPart>&);

	std::string getAlphaString(int, int);
	double getAlphaValue(int, int);
	int getNumberOfSolutions(void);

	Matrix& createDataFit(std::vector<RegressionPart>&, Matrix&);
	Matrix& leastSquareMethod(Matrix&, Matrix&);


	std::vector<RegressionPart> _partsLeft;
	std::vector<RegressionPart> _partsRight;

	Matrix _alphaValues = new Matrix;
	bool _resultsInitialised = false;
};




