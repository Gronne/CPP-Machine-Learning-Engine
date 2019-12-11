#include "Regression.h"



Regression::Regression()
{
}


Regression::~Regression()
{
}

void Regression::addPartLeft(RegressionPart part)
{
	_partsLeft.push_back(part);
	this->_resultsInitialised = false;
}

void Regression::addPartRight(RegressionPart part)
{
	_partsRight.push_back(part);
	this->_resultsInitialised = false;
}

void Regression::fitData(Matrix data)
{
	Matrix *leftData = new Matrix(1, 1);
	Matrix *rightData = new Matrix(1, 1);
	*leftData = createDataFit(_partsLeft, data);
	*rightData = createDataFit(_partsRight, data);

	this->_alphaValues = leastSquareMethod(*leftData, *rightData);
	this->_resultsInitialised = true;

	std::cout << _alphaValues << std::endl;

	delete leftData;
	delete rightData;
}


Matrix & Regression::createDataFit(std::vector<RegressionPart> &regression, Matrix &matrix)
{
	Matrix *fittedMatrix = new Matrix(regression.size(), matrix.getNumberOfColumns());

	for (size_t column = 0; column < fittedMatrix->getNumberOfColumns(); ++column)
		for (size_t row = 0; row < fittedMatrix->getNumberOfRows(); row++)
		{
			RegressionPart part = regression[row];
			double fittedValue = part.calculateValue(matrix.getColumn(column));

			fittedMatrix->setEntry(row, column, fittedValue);
		}

	return *fittedMatrix;
}

Matrix & Regression::leastSquareMethod(Matrix &leftData, Matrix &rightData)
{
	Matrix *gramMatrix = new Matrix;
	*gramMatrix = leftData * leftData.transpose(1);

	Matrix *invertedMatrix = new Matrix;
	*invertedMatrix = BasicMatrixOperations::getEchelonInverse(*gramMatrix);

	Matrix *multipliedMatrix = new Matrix;
	*multipliedMatrix = leftData * rightData.transpose(1);

	return (*invertedMatrix * *multipliedMatrix);
}


void Regression::calculate(Matrix vector)
{
	if (_resultsInitialised == false)
		throw std::exception("No data fitted to the current version of the regression");
}


std::string Regression::print(void)
{
	std::string regressionString = "";

	if (getNumberOfSolutions() == 1)
		regressionString = printLeftParts(_partsLeft, 0) + " = " + printRightParts(_partsRight);
	
	else if(getNumberOfSolutions() > 1)
		for (size_t solutionNr = 0; solutionNr < getNumberOfSolutions(); ++solutionNr)
			regressionString += printLeftParts(_partsLeft, solutionNr) + " = " + "y" + "\n";

	return regressionString;
}


std::string Regression::printLeftParts(std::vector<RegressionPart> &parts, int solutionNr)
{
	std::string partsString = "";

	if(parts.size() > 0)
		partsString += getAlphaString(solutionNr, 0) + parts[0].print();

	for (size_t partNr = 1; partNr < parts.size(); partNr++)
	{
		partsString += " + " + getAlphaString(solutionNr, partNr);

		if (parts[partNr].print().size() > 0)
			partsString += "*";

		partsString += parts[partNr].print();
	}	

	return partsString;
}

std::string Regression::printRightParts(std::vector<RegressionPart> &parts)
{
	std::string partsString = "";

	if (parts.size() > 0)
		partsString += parts[0].print();

	for (size_t partNr = 1; partNr < parts.size(); partNr++)
		partsString += ", " + parts[partNr].print();

	return partsString;
}


std::string Regression::getAlphaString(int solutionNr, int partNr)
{
	std::string alphaString = "";

	if (_resultsInitialised)
		alphaString = std::to_string(getAlphaValue(solutionNr, partNr));
	else 
		alphaString = "A" + std::to_string(partNr);

	return alphaString;
}


double Regression::getAlphaValue(int solutionNr, int partNr)
{
	return _alphaValues.getEntry(partNr, solutionNr);
}


int Regression::getNumberOfSolutions(void)
{
	return _partsRight.size();
}

