#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesFactoryNumber, factoryDoubleZero)
{
	double initValue = 0;

	EntryType object = EntryFactory::Number(initValue);

	EXPECT_TRUE(object.isNumber());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeNumber(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryNumber, factoryDoubleNegativeWhole)
{
	double initValue = -21;

	EntryType object = EntryFactory::Number(initValue);

	EXPECT_TRUE(object.isNumber());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeNumber(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryNumber, factoryDoubleNegativeDecimal)
{
	double initValue = -5.3;

	EntryType object = EntryFactory::Number(initValue);

	EXPECT_TRUE(object.isNumber());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeNumber(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryNumber, factoryDoublePositiveWhole)
{
	double initValue = 21;

	EntryType object = EntryFactory::Number(initValue);

	EXPECT_TRUE(object.isNumber());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeNumber(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryNumber, factoryDoublePositveDecimal)
{
	double initValue = 5.3;

	EntryType object = EntryFactory::Number(initValue);

	EXPECT_TRUE(object.isNumber());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeNumber(initValue)));
}

