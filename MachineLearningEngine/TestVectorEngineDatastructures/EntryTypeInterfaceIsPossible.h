#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_False_noInitialisation)
{
	EntryType object;

	EXPECT_FALSE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_False_noInitialisation2)
{
	EntryType object_1;
	EntryType object_2(object_1);

	EXPECT_FALSE(object_2.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_False_noInitialisation_number)
{
	EntryTypeNumber numberObject;
	EntryType object(numberObject);

	EXPECT_FALSE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_False_noInitialisation_complex)
{
	EntryTypeComplex complexObject;
	EntryType object(complexObject);

	EXPECT_FALSE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_False_noInitialisation_variable)
{
	EntryTypeVariable variableObject;
	EntryType object(variableObject);

	EXPECT_FALSE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_True_initialisation)
{
	EntryTypeNumber numberObject(5);
	EntryType object_1(numberObject);
	EntryType object_2(object_1);

	EXPECT_TRUE(object_1.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_True_initialisation_number)
{
	EntryTypeNumber numberObject(5);
	EntryType object(numberObject);

	EXPECT_TRUE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_True_initialisation_complex)
{
	EntryTypeComplex complexObject(5);
	EntryType object(complexObject);

	EXPECT_TRUE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_True_initialisation_variable)
{
	EntryTypeVariable variableObject("A");
	EntryType object(variableObject);

	EXPECT_TRUE(object.isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_Calculations_addition)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("a");
	EntryTypeVariable variableObject2("b");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);
	EntryType variable_b(variableObject2);


	EXPECT_TRUE((number + number).isPossible());
	EXPECT_FALSE((number + complex).isPossible());
	EXPECT_FALSE((number + variable).isPossible());
	EXPECT_FALSE((number + complex + variable).isPossible());
	EXPECT_FALSE((number + variable + complex).isPossible());
	
	EXPECT_TRUE((complex + complex).isPossible());
	EXPECT_FALSE((complex + number).isPossible());
	EXPECT_FALSE((complex + variable).isPossible());
	EXPECT_FALSE((complex + number + variable).isPossible());
	EXPECT_FALSE((complex + variable + number).isPossible());

	EXPECT_FALSE((variable + variable).isPossible());
	EXPECT_FALSE((variable + variable_b).isPossible());
	EXPECT_FALSE((variable + number).isPossible());
	EXPECT_FALSE((variable + complex).isPossible());
	EXPECT_FALSE((variable + number + complex).isPossible());
	EXPECT_FALSE((variable + complex + number).isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_Calculations_subtraction)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("a");
	EntryTypeVariable variableObject2("b");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);
	EntryType variable_b(variableObject2);


	EXPECT_TRUE((number - number).isPossible());
	EXPECT_FALSE((number - complex).isPossible());
	EXPECT_FALSE((number - variable).isPossible());
	EXPECT_FALSE((number - complex - variable).isPossible());
	EXPECT_FALSE((number - variable - complex).isPossible());

	EXPECT_TRUE((complex - complex).isPossible());
	EXPECT_FALSE((complex - number).isPossible());
	EXPECT_FALSE((complex - variable).isPossible());
	EXPECT_FALSE((complex - number - variable).isPossible());
	EXPECT_FALSE((complex - variable - number).isPossible());

	EXPECT_FALSE((variable - variable).isPossible());
	EXPECT_FALSE((variable - variable_b).isPossible());
	EXPECT_FALSE((variable - number).isPossible());
	EXPECT_FALSE((variable - complex).isPossible());
	EXPECT_FALSE((variable - number - complex).isPossible());
	EXPECT_FALSE((variable - complex - number).isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_Calculations_multiplication)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("a");
	EntryTypeVariable variableObject2("b");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);
	EntryType variable_b(variableObject2);


	EXPECT_TRUE((number * number).isPossible());
	EXPECT_TRUE((number * complex).isPossible());
	EXPECT_FALSE((number * variable).isPossible());
	EXPECT_FALSE((number * complex * variable).isPossible());
	EXPECT_FALSE((number * variable * complex).isPossible());

	EXPECT_TRUE((complex * complex).isPossible());
	EXPECT_TRUE((complex * number).isPossible());
	EXPECT_FALSE((complex * variable).isPossible());
	EXPECT_FALSE((complex * number * variable).isPossible());
	EXPECT_FALSE((complex * variable * number).isPossible());

	EXPECT_FALSE((variable * variable).isPossible());
	EXPECT_FALSE((variable * variable_b).isPossible());
	EXPECT_FALSE((variable * number).isPossible());
	EXPECT_FALSE((variable * complex).isPossible());
	EXPECT_FALSE((variable * number * complex).isPossible());
	EXPECT_FALSE((variable * complex * number).isPossible());
}

TEST(TensorCoreTensorCoreEntryTypeIsPossible, IsPossible_Calculations_division)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("a");
	EntryTypeVariable variableObject2("b");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);
	EntryType variable_b(variableObject2);


	EXPECT_TRUE((number / number).isPossible());
	EXPECT_TRUE((number / complex).isPossible());
	EXPECT_FALSE((number / variable).isPossible());
	EXPECT_FALSE((number / complex / variable).isPossible());
	EXPECT_FALSE((number / variable / complex).isPossible());

	EXPECT_TRUE((complex / complex).isPossible());
	EXPECT_TRUE((complex / number).isPossible());
	EXPECT_FALSE((complex / variable).isPossible());
	EXPECT_FALSE((complex / number / variable).isPossible());
	EXPECT_FALSE((complex / variable / number).isPossible());

	EXPECT_FALSE((variable / variable).isPossible());
	EXPECT_FALSE((variable / variable_b).isPossible());
	EXPECT_FALSE((variable / number).isPossible());
	EXPECT_FALSE((variable / complex).isPossible());
	EXPECT_FALSE((variable / number / complex).isPossible());
	EXPECT_FALSE((variable / complex / number).isPossible());
}


