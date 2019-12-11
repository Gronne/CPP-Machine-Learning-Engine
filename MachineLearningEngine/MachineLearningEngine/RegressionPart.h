#pragma once

#include <string>
#include <vector>
#include <math.h>

#include "Matrix.h"

class RegressionPart
{
public:
	RegressionPart();
	RegressionPart(int type, std::string);
	~RegressionPart();

	void addNewDependency(int, std::string);
	void addNewDependency(RegressionPart);

	double calculateValue(Matrix& vector);

	std::string print(void);

private:
	struct _dependency
	{
		int type = 1;
		std::vector<int> dependencies;
	};


	std::string printDependency(_dependency);
	std::string printDependentVariables(_dependency);

	void convertStringToDependencies(std::string, std::vector<int>&);

	double calculateDependency(_dependency, Matrix&);
	double applyType(double, int);


	std::vector<_dependency> _dependencies;
	
};

