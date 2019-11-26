#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesFactoryComplex, factoryDoubleZero)
{
	double initValue = 0;

	EntryType object = EntryFactory::Complex(initValue);

	EXPECT_TRUE(object.isComplex());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeComplex(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryComplex, factoryDoubleNegativeWhole)
{
	double initValue = -21;

	EntryType object = EntryFactory::Complex(initValue);

	EXPECT_TRUE(object.isComplex());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeComplex(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryComplex, factoryDoubleNegativeDecimal)
{
	double initValue = -5.3;

	EntryType object = EntryFactory::Complex(initValue);

	EXPECT_TRUE(object.isComplex());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeComplex(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryComplex, factoryDoublePositiveWhole)
{
	double initValue = 21;

	EntryType object = EntryFactory::Complex(initValue);

	EXPECT_TRUE(object.isComplex());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeComplex(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryComplex, factoryDoublePositveDecimal)
{
	double initValue = 5.3;

	EntryType object = EntryFactory::Complex(initValue);

	EXPECT_TRUE(object.isComplex());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeComplex(initValue)));
}

