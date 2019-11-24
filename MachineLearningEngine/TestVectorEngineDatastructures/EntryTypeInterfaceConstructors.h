#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeConstructors, emptyConstructor)
{
	EntryType object;

	EXPECT_TRUE(object.isEmpty());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorEmpty)
{
	EntryType object_1;
	EntryType object_2(object_1);

	EXPECT_TRUE(object_2.isEmpty());
	EXPECT_TRUE(object_1 == object_2);
	EXPECT_FALSE(object_1.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorNumber_numberNotInitialised)
{
	EntryTypeNumber numberObject;
	EntryType object_1(numberObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);
	
	EXPECT_TRUE(object_2.isEmpty());
	EXPECT_FALSE(object_2.isNumber());
	EXPECT_FALSE(object_2.isComplex());
	EXPECT_FALSE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorNumber_numberInitialised)
{
	EntryTypeNumber numberObject(5);
	EntryType object_1(numberObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);

	EXPECT_FALSE(object_2.isEmpty());
	EXPECT_TRUE(object_2.isNumber());
	EXPECT_FALSE(object_2.isComplex());
	EXPECT_FALSE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorComplex_complexNotInitialised)
{
	EntryTypeComplex complexObject;
	EntryType object_1(complexObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);

	EXPECT_TRUE(object_2.isEmpty());
	EXPECT_FALSE(object_2.isNumber());
	EXPECT_FALSE(object_2.isComplex());
	EXPECT_FALSE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorComplex_complexInitialised)
{
	EntryTypeComplex complexObject(5);
	EntryType object_1(complexObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);

	EXPECT_FALSE(object_2.isEmpty());
	EXPECT_FALSE(object_2.isNumber());
	EXPECT_TRUE(object_2.isComplex());
	EXPECT_FALSE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorVariable_variableNotInitialised)
{
	EntryTypeVariable variableObject;
	EntryType object_1(variableObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);

	EXPECT_TRUE(object_2.isEmpty());
	EXPECT_FALSE(object_2.isNumber());
	EXPECT_FALSE(object_2.isComplex());
	EXPECT_FALSE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorVariable_variableInitialisedOne)
{
	EntryTypeVariable variableObject("a");
	EntryType object_1(variableObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);

	EXPECT_FALSE(object_2.isEmpty());
	EXPECT_FALSE(object_2.isNumber());
	EXPECT_FALSE(object_2.isComplex());
	EXPECT_TRUE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorVariable_varableInitialised_many)
{
	EntryTypeVariable variableObject("abs");
	EntryType object_1(variableObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);

	EXPECT_FALSE(object_2.isEmpty());
	EXPECT_FALSE(object_2.isNumber());
	EXPECT_FALSE(object_2.isComplex());
	EXPECT_TRUE(object_2.isVariable());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeConstructorNotPossible)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);

	EntryType object_number(numberObject);
	EntryType object_complex(complexObject);

	EntryType object_1;

	object_1 = object_number + object_complex;

	EntryType object_2(object_1);

	EXPECT_TRUE(object_1 == object_2);
	EXPECT_FALSE(object_2.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeNumberConstructor_notInitialised)
{
	EntryTypeNumber numberObject;
	EntryType object(numberObject);

	EXPECT_TRUE(object.isEmpty());
	EXPECT_FALSE(object.isNumber());
	EXPECT_FALSE(object.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeNumberConstructor_initialised)
{
	EntryTypeNumber numberObject(5);
	EntryType object(numberObject);

	EXPECT_FALSE(object.isEmpty());
	EXPECT_TRUE(object.isNumber());
	EXPECT_TRUE(object.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeComplexConstructor_notInitialised)
{
	EntryTypeComplex complexObject;
	EntryType object(complexObject);

	EXPECT_TRUE(object.isEmpty());
	EXPECT_FALSE(object.isComplex());
	EXPECT_FALSE(object.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeComplexConstructor_initialised)
{
	EntryTypeComplex complexObject(5);
	EntryType object(complexObject);

	EXPECT_FALSE(object.isEmpty());
	EXPECT_TRUE(object.isComplex());
	EXPECT_TRUE(object.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeVariableConstructor_notInitialised)
{
	EntryTypeVariable variableObject;
	EntryType object(variableObject);

	EXPECT_TRUE(object.isEmpty());
	EXPECT_FALSE(object.isVariable());
	EXPECT_FALSE(object.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeVariableConstructor_initialised_one)
{
	EntryTypeVariable variableObject("a");
	EntryType object(variableObject);

	EXPECT_FALSE(object.isEmpty());
	EXPECT_TRUE(object.isVariable());
	EXPECT_TRUE(object.isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeConstructors, EntryTypeVariableConstructor_initialised_many)
{
	EntryTypeVariable variableObject("abc");
	EntryType object(variableObject);

	EXPECT_FALSE(object.isEmpty());
	EXPECT_TRUE(object.isVariable());
	EXPECT_TRUE(object.isPossible());
}