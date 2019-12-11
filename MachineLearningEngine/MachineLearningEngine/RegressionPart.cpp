#include "RegressionPart.h"



RegressionPart::RegressionPart()
{
	addNewDependency(1, "");
}

RegressionPart::RegressionPart(int type, std::string dependencies)
{
	addNewDependency(type, dependencies);
}


RegressionPart::~RegressionPart()
{
}


void RegressionPart::addNewDependency(int type, std::string dependencies)
{
	if (type < 0 || type > 4)
		throw std::exception("Needs to be a valid type");

	_dependency newDependency;
	newDependency.type = type;

	convertStringToDependencies(dependencies, newDependency.dependencies);

	if (newDependency.dependencies.size())
		_dependencies.push_back(newDependency);
}


void RegressionPart::addNewDependency(RegressionPart part)
{
	for(auto &dependency : part._dependencies)
		this->_dependencies.push_back(dependency);
}


double RegressionPart::calculateValue(Matrix &vector)
{
	double result = 1;

	for (auto &dependency : _dependencies)
		result *= calculateDependency(dependency, vector);

	return result;
}


std::string RegressionPart::print(void)
{
	std::string regressionPartString = "";


	if(_dependencies.size() > 0)
		regressionPartString += printDependency(_dependencies[0]);
	
	for (size_t index = 1; index < _dependencies.size(); ++index)
	{
		regressionPartString += "*" + printDependency(_dependencies[index]);
	}

	return regressionPartString;
}


std::string RegressionPart::printDependency(_dependency dependency)
{
	std::string part = "";

	switch (dependency.type)
	{
	case 1: part += "(" + printDependentVariables(dependency) + ")";
		break;

	case 2: part += "sin(" + printDependentVariables(dependency) + ")";
		break;

	case 3: part += "e^(" + printDependentVariables(dependency) + ")";
		break;

	case 4: part += "log2(" + printDependentVariables(dependency) + ")";
		break;
	}

	return part;
}

std::string RegressionPart::printDependentVariables(_dependency dependency)
{
	std::string dependentVariables = "";

	if(dependency.dependencies.size() > 0)
		dependentVariables += "X" + std::to_string(dependency.dependencies[0]);
	
	for (size_t dependencyIndex = 1; dependencyIndex < dependency.dependencies.size(); ++dependencyIndex)
	{
		dependentVariables += "*";
		dependentVariables += "X" + std::to_string(dependency.dependencies[dependencyIndex]);
	}
		
	return dependentVariables;
}


void RegressionPart::convertStringToDependencies(std::string dependencies, std::vector<int>& buffer)
{
	for (size_t count = 0; count < dependencies.size(); ++count)
		if (dependencies[count] == '1')
			buffer.push_back(count);
}


double RegressionPart::calculateDependency(_dependency dependency, Matrix &vector)
{
	if (dependency.dependencies.size() == 0)
		return 1;

	double assumulatedValue = 1;

	for (auto &row : dependency.dependencies)
		assumulatedValue *= vector.getEntry(row, 0);

	return applyType(assumulatedValue, dependency.type);
}


double RegressionPart::applyType(double value, int type)
{
	double result = 0;

	switch (type)
	{
		case 1: result = value;
			break;

		case 2: result = sin(value);
			break;

		case 3: result = exp(value);
			break;

		case 4: result = log2f(value);
			break;
	}

	return result;
}

