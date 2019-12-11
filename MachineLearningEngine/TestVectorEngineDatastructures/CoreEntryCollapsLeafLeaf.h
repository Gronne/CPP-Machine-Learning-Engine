#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_addition_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(number + number);

	CoreEntry result(EntryFactory::Number(10));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_addition_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(number + complex);

	CoreEntry result(number + complex);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_addition_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number + variable);

	CoreEntry result(number + variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_addition_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(complex + number);

	CoreEntry result(complex + number);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_addition_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(complex + complex);

	CoreEntry result(EntryFactory::Complex(10));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_addition_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(complex + variable);

	CoreEntry result(complex + variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_addition_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable + number);

	CoreEntry result(variable + number);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_addition_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable + complex);

	CoreEntry result(variable + complex);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_addition_variable_diff)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable + EntryFactory::Variable("b"));

	CoreEntry result(variable + EntryFactory::Variable("b"));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_addition_variable_same)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable + variable);

	CoreEntry result(CoreEntry(EntryFactory::Number(2)) * variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_subtraction_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(number - number);

	CoreEntry result(EntryFactory::Number(0));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_subtraction_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(number - complex);

	CoreEntry result(number - complex);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_subtraction_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number - variable);

	CoreEntry result(number - variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_subtraction_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(complex - number);

	CoreEntry result(complex - number);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_subtraction_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(complex - complex);

	CoreEntry result(EntryFactory::Complex(0));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_subtraction_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(complex - variable);

	CoreEntry result(complex - variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_subtraction_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable - number);

	CoreEntry result(variable - number);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_subtraction_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable - complex);

	CoreEntry result(variable - complex);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_subtraction_variable_diff)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable - EntryFactory::Variable("b"));

	CoreEntry result(variable - EntryFactory::Variable("b"));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_subtraction_variable_same)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable - variable);

	CoreEntry result(EntryFactory::Number(0));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_multiplication_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(number * number);

	CoreEntry result(EntryFactory::Number(5*5));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_multiplication_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(number * complex);

	CoreEntry result(EntryFactory::Complex(5*5));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_number_multiplication_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number * variable);

	CoreEntry result(number * variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_multiplication_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(complex * number);

	CoreEntry result(EntryFactory::Complex(5*5));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_multiplication_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object(complex * complex);

	CoreEntry result(EntryFactory::Number(-5*5));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_complex_multiplication_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(complex * variable);

	CoreEntry result(complex * variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_multiplication_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * number);

	CoreEntry result(variable * number);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_multiplication_complex)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * complex);

	CoreEntry result(variable * complex);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_multiplication_variable_diff)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * EntryFactory::Variable("b"));

	CoreEntry result(variable * EntryFactory::Variable("b"));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_multiplication_variable_same)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * variable);

	CoreEntry result(variable * variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_numberOne_multiplication_variable)
{
	CoreEntry number(EntryFactory::Number(1));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number * variable);

	CoreEntry result(variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_multiplication_numberOne)
{
	CoreEntry number(EntryFactory::Number(1));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * number);

	CoreEntry result(variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_minusNumberOne_multiplication_variable)
{
	CoreEntry number(EntryFactory::Number(-1));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number * variable);

	CoreEntry result(number * variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_variable_multiplication_minusNumberOne)
{
	CoreEntry number(EntryFactory::Number(-1));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * number);

	CoreEntry result(variable * number);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroNumber_addition_complex)
{
	CoreEntry number(EntryFactory::Number(0));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number + complex);

	CoreEntry result(complex);


	EXPECT_TRUE(object == result);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroNumber_addition_variable)
{
	CoreEntry number(EntryFactory::Number(0));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number + variable);

	CoreEntry result(variable);


	EXPECT_TRUE(object == result);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroNumber_multiplication_complex)
{
	CoreEntry number(EntryFactory::Number(0));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number * complex);

	CoreEntry result(number);


	EXPECT_TRUE(object == result);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroNumber_multiplication_variable)
{
	CoreEntry number(EntryFactory::Number(0));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number * variable);

	CoreEntry result(number);


	EXPECT_TRUE(object == result);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroComplex_addition_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(0));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number + complex);

	CoreEntry result(number);


	EXPECT_TRUE(object == result);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroComplex_addition_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(0));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(complex + variable);

	CoreEntry result(variable);


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroComplex_multiplication_number)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(0));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(number * complex);

	CoreEntry result(EntryFactory::Number(0));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafLeaf, Collaps_zeroComplex_multiplication_variable)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(0));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable * complex);

	CoreEntry result(EntryFactory::Number(0));


	EXPECT_TRUE(object == result);
	EXPECT_TRUE(object.isLeaf() == false);
}