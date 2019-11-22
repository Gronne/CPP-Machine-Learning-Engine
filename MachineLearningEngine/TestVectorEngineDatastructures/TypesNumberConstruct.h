#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructNoArgument)
{
	EntryTypeNumber noArgumentObject;

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = noArgumentObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructDoubleZero)
{
	EntryTypeNumber NumberObject(0);

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructDoubleNegativeWhole)
{
	EntryTypeNumber NumberObject(-21);

	double stateBuffer;
	double expectedState = -21;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructDoubleNegativeDecimal)
{
	EntryTypeNumber NumberObject(-5.3);

	double stateBuffer;
	double expectedState = -5.3;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructDoublePositiveWhole)
{
	EntryTypeNumber NumberObject(21);

	double stateBuffer;
	double expectedState = 21;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructDoublePositveDecimal)
{
	EntryTypeNumber NumberObject(5.3);

	double stateBuffer;
	double expectedState = 5.3;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructCopyDoubleZero)
{
	EntryTypeNumber NumberObject(0);

	double stateBuffer;
	double expectedState = 0;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructCopyDoubleNegativeWhole)
{
	EntryTypeNumber NumberObject(-21);

	double stateBuffer;
	double expectedState = -21;

	EXPECT_NO_THROW(stateBuffer = NumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructCopyDoubleNegativeDecimal)
{
	EntryTypeNumber NumberObject(-5.3);

	double stateBuffer;
	double expectedState = -5.3;

	EntryTypeNumber newNumberObject(NumberObject);

	EXPECT_NO_THROW(stateBuffer = newNumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructCopyDoublePositiveWhole)
{
	EntryTypeNumber NumberObject(21);

	double stateBuffer;
	double expectedState = 21;

	EntryTypeNumber newNumberObject(NumberObject);

	EXPECT_NO_THROW(stateBuffer = newNumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}


TEST(TensorCoreTensorCoreEntryTypesNumberConstruct, constructCopyDoublePositveDecimal)
{
	EntryTypeNumber NumberObject(5.3);

	double stateBuffer;
	double expectedState = 5.3;

	EntryTypeNumber newNumberObject(NumberObject);

	EXPECT_NO_THROW(stateBuffer = newNumberObject.getState(), std::exception);
	EXPECT_TRUE(stateBuffer == expectedState);
}