#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Empty_Empty)
{
	CoreEntry object_1;
	CoreEntry object_2;

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Empty_Number_same)
{
	CoreEntry object_1;
	CoreEntry object_2(EntryFactory::Number(0));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Empty_Number_diff)
{
	CoreEntry object_1;
	CoreEntry object_2(EntryFactory::Number(5));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Empty_Complex)
{
	CoreEntry object_1;
	CoreEntry object_2(EntryFactory::Complex(0));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Empty_Variable)
{
	CoreEntry object_1;
	CoreEntry object_2(EntryFactory::Variable("a"));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_Number_same)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Number(5));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_Number_diff)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Number(10));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_Complex)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Complex(5));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_Variable)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Variable("a"));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Variable_Variable_one_same)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	CoreEntry object_2(EntryFactory::Variable("a"));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Variable_Variable_one_Diff)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	CoreEntry object_2(EntryFactory::Variable("b"));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Variable_Variable_Many_same)
{
	CoreEntry object_1(EntryFactory::Variable("abc"));
	CoreEntry object_2(EntryFactory::Variable("abc"));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Variable_Variable_Many_Diff)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	CoreEntry object_2(EntryFactory::Variable("abc"));

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


//----------------------

TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_to_NumberComplex)
{
	CoreEntry object_1(EntryFactory::Number(5));

	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_2(number + complex);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_to_NumberVariable)
{
	CoreEntry object_1(EntryFactory::Number(5));

	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_2(number + variable);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_to_ComplexVariable)
{
	CoreEntry object_1(EntryFactory::Number(5));

	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_2(complex + variable);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Number_to_VariableVariable)
{
	CoreEntry object_1(EntryFactory::Number(5));

	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_2(variable + variable);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


//------------------------

TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_NumberComplex_NumberComplex_True)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1(number + complex);
	CoreEntry object_2(number + complex);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_NumberComplex_NumberComplex_False)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1((number + number) + complex);
	CoreEntry object_2(number + complex);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_NumberVariable_NumberVariable_True)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1(number + variable);
	CoreEntry object_2(number + variable);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_NumberVariable_NumberVAriable_False)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1((number + number) + variable);
	CoreEntry object_2(number + variable);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_NumberComplex_ComplexVariable_False)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1(number + complex);
	CoreEntry object_2(complex + variable);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_FALSE(object_1 == object_2);
}


TEST(TensorCoreTensorCoreEntryEqualTo, EqualTo_Long)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1(number + variable * number - complex + variable * complex);
	CoreEntry object_2(number + variable * number - complex + variable * complex);

	EXPECT_NO_THROW(object_1 == object_2);
	EXPECT_TRUE(object_1 == object_2);
}
