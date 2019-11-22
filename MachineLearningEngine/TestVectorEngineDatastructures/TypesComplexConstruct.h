#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructNoArgument)
{
	EntryTypeComplex noArgumentObject;

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructDoubleZero)
{
	EntryTypeComplex complexObject(0);
	
	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = complexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructDoubleNegativeWhole)
{
	EntryTypeComplex complexObject(-21);

	double stateBuffer;
	double expectedState = -21;

	EXPECT_NO_THROW(stateBuffer = complexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructDoubleNegativeDecimal)
{
	EntryTypeComplex complexObject(-5.3);

	double stateBuffer;
	double expectedState = -5.3;

	EXPECT_NO_THROW(stateBuffer = complexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructDoublePositiveWhole)
{
	EntryTypeComplex complexObject(21);

	double stateBuffer;
	double expectedState = 21;

	EXPECT_NO_THROW(stateBuffer = complexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructDoublePositveDecimal)
{
	EntryTypeComplex complexObject(5.3);

	double stateBuffer;
	double expectedState = 5.3;

	EXPECT_NO_THROW(stateBuffer = complexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructCopyDoubleZero)
{
	EntryTypeComplex complexObject(0);

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = complexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructCopyDoubleNegativeWhole)
{
	EntryTypeComplex complexObject(-21);

	double stateBuffer;
	double expectedState = -21;

	EntryTypeComplex newComplexObject(complexObject);

	EXPECT_NO_THROW(stateBuffer = newComplexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructCopyDoubleNegativeDecimal)
{
	EntryTypeComplex complexObject(-5.3);

	double stateBuffer;
	double expectedState = -5.3;

	EntryTypeComplex newComplexObject(complexObject);

	EXPECT_NO_THROW(stateBuffer = newComplexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructCopyDoublePositiveWhole)
{
	EntryTypeComplex complexObject(21);

	double stateBuffer;
	double expectedState = 21;

	EntryTypeComplex newComplexObject(complexObject);

	EXPECT_NO_THROW(stateBuffer = newComplexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypescomplexConstruct, constructCopyDoublePositveDecimal)
{
	EntryTypeComplex complexObject(5.3);

	double stateBuffer;
	double expectedState = 5.3;

	EntryTypeComplex newComplexObject(complexObject);

	EXPECT_NO_THROW(stateBuffer = newComplexObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}