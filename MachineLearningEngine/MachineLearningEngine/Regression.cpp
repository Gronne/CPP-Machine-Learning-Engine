#include "Regression.h"



Regression::Regression()
{
}

Regression::Regression(Regression &regression)
{
	*this->_alphaValues = regression._alphaValues;
	this->_resultsInitialised = regression._resultsInitialised;
	this->_partsLeft = regression._partsLeft;
	this->_partsLeft = regression._partsRight;
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

void Regression::fitData(Matrix &data)
{
	Matrix *leftData = new Matrix(1, 1);
	Matrix *rightData = new Matrix(1, 1);
	*leftData = createDataFit(_partsLeft, data);
	*rightData = createDataFit(_partsRight, data);

	*this->_alphaValues = leastSquareMethod(*leftData, *rightData);
	this->_resultsInitialised = true;

	calculateErrors(data, *rightData);

	delete leftData;
	delete rightData;
}

void Regression::fitData(Matrix & trainingData, Matrix & resultData)
{
	Matrix *leftData = new Matrix(1, 1);
	Matrix *rightData = new Matrix(1, 1);
	*leftData = createDataFit(_partsLeft, trainingData);
	*rightData = createDataFit(_partsRight, resultData);

	*this->_alphaValues = leastSquareMethod(*leftData, *rightData);
	this->_resultsInitialised = true;

	calculateErrors(trainingData, *rightData);

	delete leftData;
	delete rightData;
}


double Regression::error(void)
{
	if (_resultsInitialised)
		return _errorFull;
	else
		throw std::exception("The current model haven't been fittet to any data");
}


double Regression::errorNormalized(void)
{
	if (_resultsInitialised)
		return _errorNormalized;
	else
		throw std::exception("The current model haven't been fittet to any data");
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

void Regression::calculateErrors(Matrix &traningDataFit, Matrix &resultsFit)
{
	double fullError = 0;

	for (size_t solutionNr = 0; solutionNr < getNumberOfSolutions(); ++solutionNr)
		for (size_t column = 0; column < traningDataFit.getNumberOfColumns(); ++column)
		{
			double modelValue = calculateValue(traningDataFit.getColumn(column));
			double trueValue = resultsFit.getEntry(solutionNr, column);

			fullError += norm((modelValue - trueValue));
		}

	_errorFull = fullError;
	_errorNormalized = fullError / traningDataFit.getNumberOfColumns();
}

double Regression::norm(double value)
{
	return (value > 0) ? value : -value;
}


double Regression::calculateValue(Matrix &vector, int resultNr)
{
	if (_resultsInitialised == false)
		throw std::exception("No data fitted to the current version of the regression");

	double accumulatedValue = 0;

	for (size_t partNr = 0; partNr < this->_partsLeft.size(); ++partNr)
	{
		double alphaValue = getAlphaValue(resultNr, partNr);
		double partValue  = this->_partsLeft[partNr].calculateValue(vector);
		
		accumulatedValue +=  alphaValue * partValue;
	}

	return accumulatedValue;
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
		partsString += parts[0].print('Y');

	for (size_t partNr = 1; partNr < parts.size(); partNr++)
		partsString += ", " + parts[partNr].print('Y');

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
	return _alphaValues->getEntry(partNr, solutionNr);
}


int Regression::getNumberOfSolutions(void)
{
	return _partsRight.size();
}

