#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypePrint, Print_NoInit)
{
	EntryType emptyObject;

	EXPECT_NO_THROW(emptyObject.print(), std::exception);
	EXPECT_TRUE(emptyObject.print() == "");
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_Init_number)
{
	EntryTypeNumber object(5);
	EntryType entryObject(object);

	EXPECT_NO_THROW(entryObject.print(), std::exception);
	EXPECT_TRUE(entryObject.print() == object.print());
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_Init_complex)
{
	EntryTypeComplex object(5);
	EntryType entryObject(object);

	EXPECT_NO_THROW(entryObject.print(), std::exception);
	EXPECT_TRUE(entryObject.print() == object.print());
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_Init_variable_one)
{
	EntryTypeVariable object("a");
	EntryType entryObject(object);

	EXPECT_NO_THROW(entryObject.print(), std::exception);
	EXPECT_TRUE(entryObject.print() == object.print());
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_Init_variable_many)
{
	EntryTypeVariable object("abc");
	EntryType entryObject(object);

	EXPECT_NO_THROW(entryObject.print(), std::exception);
	EXPECT_TRUE(entryObject.print() == object.print());
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_addition)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("A");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);

	EXPECT_NO_THROW((number + number).print(), std::exception);
	EXPECT_TRUE((number + number).print() == EntryTypeNumber(5+5).print());

	EXPECT_NO_THROW((number + complex).print(), std::exception);
	EXPECT_TRUE((number + complex).print() == "");

	EXPECT_NO_THROW((number + variable).print(), std::exception);
	EXPECT_TRUE((number + variable).print() == "");

	EXPECT_NO_THROW((complex + complex).print(), std::exception);
	EXPECT_TRUE((complex + complex).print() == EntryTypeComplex(5 + 5).print());

	EXPECT_NO_THROW((complex + variable).print(), std::exception);
	EXPECT_TRUE((complex + variable).print() == "");

	EXPECT_NO_THROW((variable + variable).print(), std::exception);
	EXPECT_TRUE((variable + variable).print() == "");
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_substraction)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("A");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);

	EXPECT_NO_THROW((number - number).print(), std::exception);
	EXPECT_TRUE((number - number).print() == EntryTypeNumber(5 - 5).print());

	EXPECT_NO_THROW((number - complex).print(), std::exception);
	EXPECT_TRUE((number - complex).print() == "");

	EXPECT_NO_THROW((number - variable).print(), std::exception);
	EXPECT_TRUE((number - variable).print() == "");

	EXPECT_NO_THROW((complex - complex).print(), std::exception);
	EXPECT_TRUE((complex - complex).print() == EntryTypeComplex(5 - 5).print());

	EXPECT_NO_THROW((complex - variable).print(), std::exception);
	EXPECT_TRUE((complex - variable).print() == "");

	EXPECT_NO_THROW((variable - variable).print(), std::exception);
	EXPECT_TRUE((variable - variable).print() == "");
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_multiplication)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("A");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);

	EXPECT_NO_THROW((number * number).print(), std::exception);
	EXPECT_TRUE((number * number).print() == EntryTypeNumber(5 * 5).print());

	EXPECT_NO_THROW((number * complex).print(), std::exception);
	EXPECT_TRUE((number * complex).print() == EntryTypeComplex(5*5).print());

	EXPECT_NO_THROW((number * variable).print(), std::exception);
	EXPECT_TRUE((number * variable).print() == "");

	EXPECT_NO_THROW((complex * complex).print(), std::exception);
	EXPECT_TRUE((complex * complex).print() == EntryTypeNumber(-5 * 5).print());

	EXPECT_NO_THROW((complex * variable).print(), std::exception);
	EXPECT_TRUE((complex * variable).print() == "");

	EXPECT_NO_THROW((variable * variable).print(), std::exception);
	EXPECT_TRUE((variable * variable).print() == "");
}


TEST(TensorCoreTensorCoreEntryTypePrint, Print_division)
{
	EntryTypeNumber numberObject(5);
	EntryTypeComplex complexObject(5);
	EntryTypeVariable variableObject("A");

	EntryType number(numberObject);
	EntryType complex(complexObject);
	EntryType variable(variableObject);

	EXPECT_NO_THROW((number / number).print(), std::exception);
	EXPECT_TRUE((number / number).print() == EntryTypeNumber(5 / 5).print());

	EXPECT_NO_THROW((number / complex).print(), std::exception);
	EXPECT_TRUE((number / complex).print() == EntryTypeComplex(-1).print());

	EXPECT_NO_THROW((number / variable).print(), std::exception);
	EXPECT_TRUE((number / variable).print() == "");

	EXPECT_NO_THROW((complex / complex).print(), std::exception);
	EXPECT_TRUE((complex / complex).print() == EntryTypeNumber(1).print());

	EXPECT_NO_THROW((complex / variable).print(), std::exception);
	EXPECT_TRUE((complex / variable).print() == "");

	EXPECT_NO_THROW((variable / variable).print(), std::exception);
	EXPECT_TRUE((variable / variable).print() == "");
}