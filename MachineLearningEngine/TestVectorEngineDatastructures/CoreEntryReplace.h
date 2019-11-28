#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryReplace, Replace_Variable_ToNoInit)
{
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable);

	CoreEntry number;


	EXPECT_NO_THROW(object.replace(variable, number), std::exception);
	EXPECT_TRUE(object == number);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Variable_ToNumber)
{
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable);

	CoreEntry number(EntryFactory::Number(5));


	EXPECT_NO_THROW(object.replace(variable, number), std::exception);
	EXPECT_TRUE(object == number);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Variable_ToComplex)
{
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable);

	CoreEntry complex(EntryFactory::Complex(5));


	EXPECT_NO_THROW(object.replace(variable, complex), std::exception);
	EXPECT_TRUE(object == complex);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Variable_ToVariable)
{
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object(variable);

	CoreEntry variable_2(EntryFactory::Variable("b"));


	EXPECT_NO_THROW(object.replace(variable, variable_2), std::exception);
	EXPECT_TRUE(object == variable_2);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Number_ToNoInit)
{
	CoreEntry number(EntryFactory::Number(5));

	CoreEntry object(number);

	CoreEntry number_2;


	EXPECT_NO_THROW(object.replace(number, number_2), std::exception);
	EXPECT_TRUE(object == number_2);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Number_ToNumber)
{
	CoreEntry number(EntryFactory::Number(5));

	CoreEntry object(number);

	CoreEntry number_2(EntryFactory::Number(10));


	EXPECT_NO_THROW(object.replace(number, number_2), std::exception);
	EXPECT_TRUE(object == number_2);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Number_ToComplex)
{
	CoreEntry number(EntryFactory::Number(5));

	CoreEntry object(number);

	CoreEntry complex(EntryFactory::Complex(10));


	EXPECT_NO_THROW(object.replace(number, complex), std::exception);
	EXPECT_TRUE(object == complex);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Number_ToVariable)
{
	CoreEntry number(EntryFactory::Number(5));

	CoreEntry object(number);

	CoreEntry variable(EntryFactory::Variable("b"));


	EXPECT_NO_THROW(object.replace(number, variable), std::exception);
	EXPECT_TRUE(object == variable);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Complex_ToNoInit)
{
	CoreEntry complex(EntryFactory::Complex(5));

	CoreEntry object(complex);

	CoreEntry number;


	EXPECT_NO_THROW(object.replace(complex, number), std::exception);
	EXPECT_TRUE(object == number);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Complex_ToNumber)
{
	CoreEntry complex(EntryFactory::Complex(5));

	CoreEntry object(complex);

	CoreEntry number(EntryFactory::Number(10));


	EXPECT_NO_THROW(object.replace(complex, number), std::exception);
	EXPECT_TRUE(object == number);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Complex_ToComplex)
{
	CoreEntry complex(EntryFactory::Complex(5));

	CoreEntry object(complex);

	CoreEntry complex_2(EntryFactory::Complex(10));


	EXPECT_NO_THROW(object.replace(complex, complex_2), std::exception);
	EXPECT_TRUE(object == complex_2);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_Complex_ToVariable)
{
	CoreEntry complex(EntryFactory::Complex(5));

	CoreEntry object(complex);

	CoreEntry variable(EntryFactory::Variable("a"));


	EXPECT_NO_THROW(object.replace(complex, variable), std::exception);
	EXPECT_TRUE(object == variable);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_MultipleBranches)
{
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));
	CoreEntry number(EntryFactory::Number(10));

	CoreEntry object(number * variable + number);

	CoreEntry new_variable(EntryFactory::Variable("b"));
	CoreEntry result(number * new_variable + number);


	EXPECT_NO_THROW(object.replace(variable, new_variable), std::exception);
	EXPECT_TRUE(object == result);
}


TEST(TensorCoreTensorCoreEntryReplace, Replace_MultipleBranches_collaps)
{
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));
	CoreEntry number(EntryFactory::Number(10));

	CoreEntry object(number * variable + number);

	CoreEntry result(number * complex + number);


	EXPECT_NO_THROW(object.replace(variable, complex), std::exception);
	EXPECT_TRUE(object == result);
}