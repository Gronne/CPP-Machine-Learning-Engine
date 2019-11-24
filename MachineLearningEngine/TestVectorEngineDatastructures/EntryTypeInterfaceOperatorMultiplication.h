#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_noInitiliation_noInitialisation)
{
	EntryType emptyObject_1;
	EntryType emptyObject_2;

	EXPECT_NO_THROW(emptyObject_1 * emptyObject_2, std::exception);
	EXPECT_FALSE((emptyObject_1 * emptyObject_2).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_initiliation_noInitialisation)
{
	EntryTypeNumber numberObject(5);
	EntryType number(numberObject);

	EntryType emptyObject;

	EXPECT_NO_THROW(number * emptyObject, std::exception);
	EXPECT_FALSE((number * emptyObject).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_noInitiliation_initialisation)
{
	EntryTypeNumber numberObject(5);
	EntryType number(numberObject);

	EntryType emptyObject;

	EXPECT_NO_THROW(emptyObject * number, std::exception);
	EXPECT_FALSE((emptyObject * number).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_initiliation_initialisation)
{
	EntryTypeNumber numberObject(5);
	EntryType number_1(numberObject);
	EntryType number_2(numberObject);

	EXPECT_NO_THROW(number_1 * number_2, std::exception);
	EXPECT_TRUE((number_1 * number_2).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_number_number)
{
	EntryTypeNumber numberObject_1(5);
	EntryTypeNumber numberObject_2(-5);
	EntryTypeNumber numberObject_3(10);
	EntryTypeNumber numberObject_4(-10);
	EntryTypeNumber numberObject_zero(0);

	EntryType number_1(numberObject_1);
	EntryType number_2(numberObject_2);
	EntryType number_3(numberObject_3);
	EntryType number_4(numberObject_4);
	EntryType number_zero(numberObject_zero);


	EntryTypeNumber resultNumber_1(25);
	EntryTypeNumber resultNumber_2(-25);
	EntryTypeNumber resultNumber_3(50);
	EntryTypeNumber resultNumber_4(-50);
	EntryTypeNumber resultNumber_5(-50);
	EntryTypeNumber resultNumber_6(50);
	EntryTypeNumber resultNumber_7(0);

	EntryType result_1(resultNumber_1);
	EntryType result_2(resultNumber_2);
	EntryType result_3(resultNumber_3);
	EntryType result_4(resultNumber_4);
	EntryType result_5(resultNumber_5);
	EntryType result_6(resultNumber_6);
	EntryType result_7(resultNumber_7);


	EXPECT_NO_THROW(number_1 * number_1);
	EXPECT_TRUE((number_1 * number_1) == result_1);

	EXPECT_NO_THROW(number_1 * number_2);
	EXPECT_TRUE((number_1 * number_2) == result_2);

	EXPECT_NO_THROW(number_1 * number_3);
	EXPECT_TRUE((number_1 * number_3) == result_3);

	EXPECT_NO_THROW(number_1 * number_4);
	EXPECT_TRUE((number_1 * number_4) == result_4);

	EXPECT_NO_THROW(number_2 * number_3);
	EXPECT_TRUE((number_2 * number_3) == result_5);

	EXPECT_NO_THROW(number_2 * number_4);
	EXPECT_TRUE((number_2 * number_4) == result_6);

	EXPECT_NO_THROW(number_zero * number_1);
	EXPECT_TRUE((number_zero * number_1) == result_7);

	EXPECT_NO_THROW(number_1 * number_zero);
	EXPECT_TRUE((number_1 * number_zero) == result_7);

	EXPECT_NO_THROW(number_zero * number_zero);
	EXPECT_TRUE((number_zero * number_zero) == result_7);
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_number_Complex)
{
	EntryTypeNumber numberObject_1(5);
	EntryTypeNumber numberObject_2(-5);
	EntryTypeNumber numberObject_zero(0);

	EntryTypeComplex complexObject_1(5);
	EntryTypeComplex complexObject_2(-5);
	EntryTypeComplex complexObject_zero(0);


	EntryType number_1(numberObject_1);
	EntryType number_2(numberObject_2);
	EntryType number_zero(numberObject_zero);

	EntryType complex_1(complexObject_1);
	EntryType complex_2(complexObject_2);
	EntryType complex_zero(complexObject_zero);


	EntryTypeComplex resultComplex_1(25);
	EntryTypeComplex resultComplex_2(-25);
	EntryTypeComplex resultComplex_3(-25);
	EntryTypeComplex resultComplex_4(25);
	EntryTypeComplex resultComplex_5(0);

	EntryType result_1(resultComplex_1);
	EntryType result_2(resultComplex_2);
	EntryType result_3(resultComplex_3);
	EntryType result_4(resultComplex_4);
	EntryType result_5(resultComplex_5);


	EXPECT_NO_THROW(number_1 * complex_1);
	EXPECT_TRUE((number_1 * complex_1) == result_1);

	EXPECT_NO_THROW(number_1 * complex_2);
	EXPECT_TRUE((number_1 * complex_2) == result_2);

	EXPECT_NO_THROW(number_2 * complex_1);
	EXPECT_TRUE((number_2 * complex_1) == result_3);

	EXPECT_NO_THROW(number_2 * complex_2);
	EXPECT_TRUE((number_2 * complex_2) == result_4);

	EXPECT_NO_THROW(number_zero * complex_2);
	EXPECT_TRUE((number_zero * complex_2) == result_5);

	EXPECT_NO_THROW(number_2 * complex_zero);
	EXPECT_TRUE((number_2 * complex_zero) == result_5);

	EXPECT_NO_THROW(number_zero * complex_zero);
	EXPECT_TRUE((number_zero * complex_zero) == result_5);
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_number_Variable)
{
	EntryTypeNumber numberObject(5);
	EntryTypeVariable variableObject("a");

	EntryType number(numberObject);
	EntryType variable(variableObject);

	EXPECT_NO_THROW(number * variable);
	EXPECT_FALSE((number * variable).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_Complex_Complex)
{
	EntryTypeComplex ComplexObject_1(5);
	EntryTypeComplex ComplexObject_2(-5);
	EntryTypeComplex ComplexObject_3(10);
	EntryTypeComplex ComplexObject_4(-10);
	EntryTypeComplex ComplexObject_zero(0);

	EntryType Complex_1(ComplexObject_1);
	EntryType Complex_2(ComplexObject_2);
	EntryType Complex_3(ComplexObject_3);
	EntryType Complex_4(ComplexObject_4);
	EntryType Complex_zero(ComplexObject_zero);


	EntryTypeNumber resultNumber_1(-25);
	EntryTypeNumber resultNumber_2(25);
	EntryTypeNumber resultNumber_3(-50);
	EntryTypeNumber resultNumber_4(50);
	EntryTypeNumber resultNumber_5(50);
	EntryTypeNumber resultNumber_6(-50);
	EntryTypeNumber resultNumber_7(0);

	EntryType result_1(resultNumber_1);
	EntryType result_2(resultNumber_2);
	EntryType result_3(resultNumber_3);
	EntryType result_4(resultNumber_4);
	EntryType result_5(resultNumber_5);
	EntryType result_6(resultNumber_6);
	EntryType result_7(resultNumber_7);


	EXPECT_NO_THROW(Complex_1 * Complex_1);
	EXPECT_TRUE((Complex_1 * Complex_1) == result_1);

	EXPECT_NO_THROW(Complex_1 * Complex_2);
	EXPECT_TRUE((Complex_1 * Complex_2) == result_2);

	EXPECT_NO_THROW(Complex_1 * Complex_3);
	EXPECT_TRUE((Complex_1 * Complex_3) == result_3);

	EXPECT_NO_THROW(Complex_1 * Complex_4);
	EXPECT_TRUE((Complex_1 * Complex_4) == result_4);

	EXPECT_NO_THROW(Complex_2 * Complex_3);
	EXPECT_TRUE((Complex_2 * Complex_3) == result_5);

	EXPECT_NO_THROW(Complex_2 * Complex_4);
	EXPECT_TRUE((Complex_2 * Complex_4) == result_6);

	EXPECT_NO_THROW(Complex_zero * Complex_4);
	EXPECT_TRUE((Complex_zero * Complex_4) == result_7);

	EXPECT_NO_THROW(Complex_2 * Complex_zero);
	EXPECT_TRUE((Complex_2 * Complex_zero) == result_7);

	EXPECT_NO_THROW(Complex_zero * Complex_zero);
	EXPECT_TRUE((Complex_zero * Complex_zero) == result_7);
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_complex_number)
{
	EntryTypeComplex complexObject_1(5);
	EntryTypeComplex complexObject_2(-5);
	EntryTypeComplex complexObject_zero(0);

	EntryTypeNumber numberObject_1(5);
	EntryTypeNumber numberObject_2(-5);
	EntryTypeNumber numberObject_zero(0);


	EntryType complex_1(complexObject_1);
	EntryType complex_2(complexObject_2);
	EntryType complex_zero(complexObject_zero);

	EntryType number_1(numberObject_1);
	EntryType number_2(numberObject_2);
	EntryType number_zero(numberObject_zero);


	EntryTypeComplex resultComplex_1(25);
	EntryTypeComplex resultComplex_2(-25);
	EntryTypeComplex resultComplex_3(-25);
	EntryTypeComplex resultComplex_4(25);
	EntryTypeComplex resultComplex_5(0);

	EntryType result_1(resultComplex_1);
	EntryType result_2(resultComplex_2);
	EntryType result_3(resultComplex_3);
	EntryType result_4(resultComplex_4);
	EntryType result_5(resultComplex_5);


	EXPECT_NO_THROW(complex_1 * number_1);
	EXPECT_TRUE((complex_1 * number_1) == result_1);

	EXPECT_NO_THROW(complex_1 * number_2);
	EXPECT_TRUE((complex_1 * number_2) == result_2);

	EXPECT_NO_THROW(number_2 * complex_1);
	EXPECT_TRUE((number_2 * complex_1) == result_3);

	EXPECT_NO_THROW(complex_2 * number_2);
	EXPECT_TRUE((complex_2 * number_2) == result_4);

	EXPECT_NO_THROW(complex_zero * number_2);
	EXPECT_TRUE((complex_zero * number_2) == result_5);

	EXPECT_NO_THROW(number_2 * complex_zero);
	EXPECT_TRUE((number_2 * complex_zero) == result_5);

	EXPECT_NO_THROW(complex_zero * number_zero);
	EXPECT_TRUE((complex_zero * number_zero) == result_5);
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_complex_Variable)
{
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("a");

	EntryType complex(complexObject);
	EntryType variable(variableObject);

	EXPECT_NO_THROW(complex * variable);
	EXPECT_FALSE((complex * variable).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_variable_variable)
{
	EntryTypeVariable variableObject_1("a");
	EntryTypeVariable variableObject_2("a");

	EntryType variable_1(variableObject_1);
	EntryType variable_2(variableObject_2);

	EXPECT_NO_THROW(variable_1 * variable_2);
	EXPECT_FALSE((variable_1 * variable_2).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_variable_number)
{
	EntryTypeVariable variableObject("a");
	EntryTypeNumber numberObject(5);

	EntryType variable(variableObject);
	EntryType number(numberObject);

	EXPECT_NO_THROW(variable * number);
	EXPECT_FALSE((variable * number).isPossible());
}


TEST(TensorCoreTensorCoreEntryTypeMultiplication, Multiplication_variable_complex)
{
	EntryTypeVariable variableObject("a");
	EntryTypeComplex complexObject(5);

	EntryType variable(variableObject);
	EntryType complex(complexObject);

	EXPECT_NO_THROW(variable * complex);
	EXPECT_FALSE((variable * complex).isPossible());
}