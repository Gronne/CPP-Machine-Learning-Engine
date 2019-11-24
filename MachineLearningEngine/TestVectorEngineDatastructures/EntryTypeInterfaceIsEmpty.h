#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeIsEmpty, emptyNoConstructor)
{
	EntryType object;

	EXPECT_TRUE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, emptyConstructorEntryType)
{
	EntryType object_1;
	EntryType object_2(object_1);

	EXPECT_TRUE(object_2.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, emptyConstructorEntryType_2)
{
	EntryTypeNumber numberObject;
	EntryType object_1(numberObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_2.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, constructorEntryType)
{
	EntryTypeNumber numberObject(5);
	EntryType object_1(numberObject);
	EntryType object_2(object_1);

	EXPECT_FALSE(object_2.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, emptyConstructorEntryType_number)
{
	EntryTypeNumber numberObject;
	EntryType object(numberObject);

	EXPECT_TRUE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, constructorEntryType_number)
{
	EntryTypeNumber numberObject(5);
	EntryType object(numberObject);

	EXPECT_FALSE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, emptyConstructorEntryType_complex)
{
	EntryTypeComplex complexObject;
	EntryType object(complexObject);

	EXPECT_TRUE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, constructorEntryType_complex)
{
	EntryTypeComplex complexObject(5);
	EntryType object(complexObject);

	EXPECT_FALSE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, emptyConstructorEntryType_variable)
{
	EntryTypeVariable variableObject;
	EntryType object(variableObject);

	EXPECT_TRUE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, constructorEntryType_variable_one)
{
	EntryTypeVariable variableObject("a");
	EntryType object(variableObject);

	EXPECT_FALSE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeIsEmpty, constructorEntryType_variable_many)
{
	EntryTypeVariable variableObject("abc");
	EntryType object(variableObject);

	EXPECT_FALSE(object.isEmpty());
}