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
	Regression(Regression&);
	~Regression();

	void addPartLeft(RegressionPart part);
	void addPartRight(RegressionPart part);

	void fitData(Matrix& data);
	void fitData(Matrix& trainingData, Matrix& resultData);

	double error(void);
	double errorNormalized(void);

	double calculateValue(Matrix&, int = 0);

	std::string print(void);


private:
	std::string printLeftParts(std::vector<RegressionPart>&, int);
	std::string printRightParts(std::vector<RegressionPart>&);

	std::string getAlphaString(int, int);
	double getAlphaValue(int, int);
	int getNumberOfSolutions(void);

	Matrix& createDataFit(std::vector<RegressionPart>&, Matrix&);
	Matrix& leastSquareMethod(Matrix&, Matrix&);
	void calculateErrors(Matrix&, Matrix&);

	double norm(double);


	std::vector<RegressionPart> _partsLeft;
	std::vector<RegressionPart> _partsRight;

	Matrix *_alphaValues = new Matrix;
	bool _resultsInitialised = false;
	
	double _errorFull = 0;
	double _errorNormalized = 0;
};




