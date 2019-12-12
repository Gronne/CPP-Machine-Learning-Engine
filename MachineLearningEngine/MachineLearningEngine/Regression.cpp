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


//--------------------------------------------------------------------------------------------
//Regression addPartLeft Documentation: Implementation - Archetecture, d... - Chapter 2.7.1.1
//--------------------------------------------------------------------------------------------
void Regression::addPartLeft(RegressionPart part)
{
	_partsLeft.push_back(part);
	this->_resultsInitialised = false;
}


//--------------------------------------------------------------------------------------------
//Regression addPartRight Documentation: Implementation - Archetecture, d... - Chapter 2.7.1.2
//--------------------------------------------------------------------------------------------
void Regression::addPartRight(RegressionPart part)
{
	_partsRight.push_back(part);
	this->_resultsInitialised = false;
}


//--------------------------------------------------------------------------------------------
//Regression fitData Documentation: Implementation - Archetecture, d... - Chapter 2.7.2.1
//--------------------------------------------------------------------------------------------
void Regression::fitData(Matrix &data)
{
	fitData(data, data);
}


//--------------------------------------------------------------------------------------------
//Regression fitData Documentation: Implementation - Archetecture, d... - Chapter 2.7.2.2
//--------------------------------------------------------------------------------------------
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


//------------------------------------------------------------------------------------------------
//Regression error Documentation: Implementation - Archetecture, d... - Chapter 2.7.3.1
//---------------------------------------------f---------------------------------------------------
double Regression::error(void)
{
	if (_resultsInitialised)
		return _errorFull;
	else
		throw std::exception("The current model haven't been fittet to any data");
}


//------------------------------------------------------------------------------------------------
//Regression errorNormalised Documentation: Implementation - Archetecture, d... - Chapter 2.7.3.2
//------------------------------------------------------------------------------------------------
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

//--------------------------------------------------------------------------------------------------
//Regression leastSquareMethod Documentation: Implementation - Archetecture, d... - Chapter 2.7.2.2
//--------------------------------------------------------------------------------------------------
Matrix & Regression::leastSquareMethod(Matrix &MatrixA, Matrix &MatrixB)
{
	Matrix *gramMatrix = new Matrix;
	*gramMatrix = MatrixA * MatrixA.transpose(1);

	Matrix *invertedMatrix = new Matrix;
	*invertedMatrix = BasicMatrixOperations::getEchelonInverse(*gramMatrix);

	Matrix *multipliedMatrix = new Matrix;
	*multipliedMatrix = MatrixA * MatrixB.transpose(1);

	return (*invertedMatrix * *multipliedMatrix);
}


//--------------------------------------------------------------------------------------------------
//Regression calculateErrors Documentation: Implementation - Archetecture, d... - Chapter 2.7.2.2
//--------------------------------------------------------------------------------------------------
void Regression::calculateErrors(Matrix &traningData, Matrix &resultsFit)
{
	double fullError = 0;

	for (size_t solutionNr = 0; solutionNr < getNumberOfSolutions(); ++solutionNr)
		for (size_t column = 0; column < traningData.getNumberOfColumns(); ++column)
		{
			const double modelValue = calculateValue(traningData.getColumn(column));
			const double trueValue = resultsFit.getEntry(solutionNr, column);

			fullError += norm((modelValue - trueValue));
		}

	this->_errorFull = fullError;
	this->_errorNormalized = fullError / traningData.getNumberOfColumns();
}

double Regression::norm(double value)
{
	return (value > 0) ? value : -value;
}

//--------------------------------------------------------------------------------------------------
//Regression calculateValue Documentation: Implementation - Archetecture, d... - Chapter 2.7.3
//--------------------------------------------------------------------------------------------------
double Regression::calculateValue(Matrix &vector, int resultNr)
{
	if (_resultsInitialised == false)
		throw std::exception("The current model haven't been fittet to any data");

	double accumulatedValue = 0;

	for (size_t partNr = 0; partNr < this->_partsLeft.size(); ++partNr)
	{
		const double alphaValue = getAlphaValue(resultNr, partNr);
		const double partValue  = this->_partsLeft[partNr].calculateValue(vector);
		
		accumulatedValue +=  alphaValue * partValue;
	}

	return accumulatedValue;
}


//--------------------------------------------------------------------------------------------------
//Regression Print Documentation: Implementation - Archetecture, d... - Chapter 2.7.4
//--------------------------------------------------------------------------------------------------
std::string Regression::print(void)
{
	std::string regressionString = "";

	if(this->_resultsInitialised == false)
		regressionString = printLeftParts(_partsLeft, 0) + " = " + printRightParts(_partsRight);

	else if (this->_resultsInitialised == true && this->getNumberOfSolutions() == 1)
		regressionString = printLeftParts(_partsLeft, 0) + " = " + printRightParts(_partsRight);

	else if (this->_resultsInitialised == true && this->getNumberOfSolutions() > 1)
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

