#pragma once
#include "VectorEngineDatastructureHeader.h"


TEST(VectorEngineSimpleMatrixOperationsCross, crossHolePositive)
{
	Matrix *vec1 = new Matrix(2, 3);
	vec1->setEntry(0, 0, 1);
	vec1->setEntry(0, 1, 2);
	vec1->setEntry(0, 2, 3);
	vec1->setEntry(1, 0, 1);
	vec1->setEntry(1, 1, 3);
	vec1->setEntry(1, 2, 1);

	double resultValue = 0;
	SimpleMatrixOperations SMO;
	EXPECT_NO_THROW(resultValue = SMO.dot(*vec1, 1, 1));
	EXPECT_EQ(-7, resultValue);
}