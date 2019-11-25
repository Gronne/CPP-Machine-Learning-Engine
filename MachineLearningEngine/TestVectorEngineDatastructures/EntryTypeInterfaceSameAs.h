#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NoState_NoState)
{
	EntryType emptyObject_1;
	EntryType emptyObject_2;

	EXPECT_NO_THROW(emptyObject_1.sameAs(emptyObject_2), std::exception);
	EXPECT_TRUE(emptyObject_1.sameAs(emptyObject_2));

	EXPECT_NO_THROW(emptyObject_2.sameAs(emptyObject_1), std::exception);
	EXPECT_TRUE(emptyObject_2.sameAs(emptyObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NonState_State)
{
	EntryTypeNumber numberObject(5);

	EntryType emptyObject_1;
	EntryType number(numberObject);

	EXPECT_NO_THROW(emptyObject_1.sameAs(number), std::exception);
	EXPECT_FALSE(emptyObject_1.sameAs(number));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_State_NoState)
{
	EntryTypeNumber numberObject(5);

	EntryType number(numberObject);
	EntryType emptyObject_2;

	EXPECT_NO_THROW(number.sameAs(emptyObject_2), std::exception);
	EXPECT_FALSE(number.sameAs(emptyObject_2));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_SelfReference)
{
	EntryTypeNumber object_init(5);

	EntryType entryObject(object_init);
	EntryType emptyObject;


	EXPECT_NO_THROW(entryObject.sameAs(entryObject), std::exception);
	EXPECT_TRUE(entryObject.sameAs(entryObject));

	EXPECT_NO_THROW(emptyObject.sameAs(emptyObject), std::exception);
	EXPECT_TRUE(emptyObject.sameAs(emptyObject));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberNoInit_NumberNoInit)
{
	EntryTypeNumber object_1;
	EntryTypeNumber object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_NumberNoInit)
{
	EntryTypeNumber object_1(5);
	EntryTypeNumber object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberNoInit_NumberInit)
{
	EntryTypeNumber object_1;
	EntryTypeNumber object_2(5);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_NumberInit_Same)
{
	EntryTypeNumber object_1(5);
	EntryTypeNumber object_2(5);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_NumberInit_NotSame)
{
	EntryTypeNumber object_1(5);
	EntryTypeNumber object_2(10);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberNoInit_ComplexNoInit)
{
	EntryTypeNumber object_1;
	EntryTypeComplex object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_ComplexNoInit)
{
	EntryTypeNumber object_1(5);
	EntryTypeComplex object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberNoInit_ComplexInit)
{
	EntryTypeNumber object_1;
	EntryTypeComplex object_2(5);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_ComplexInit_Same)
{
	EntryTypeNumber object_1(5);
	EntryTypeComplex object_2(5);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_ComplexInit_NotSame)
{
	EntryTypeNumber object_1(5);
	EntryTypeComplex object_2(10);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}

TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberNoInit_VariableNoInit)
{
	EntryTypeNumber object_1;
	EntryTypeVariable object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_VariableNoInit)
{
	EntryTypeNumber object_1(5);
	EntryTypeVariable object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberNoInit_VariableInit)
{
	EntryTypeNumber object_1;
	EntryTypeVariable object_2("A");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_VariableInit_One)
{
	EntryTypeNumber object_1(5);
	EntryTypeVariable object_2("A");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_NumberInit_VariableInit_Many)
{
	EntryTypeNumber object_1(5);
	EntryTypeVariable object_2("Abc");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexNoInit_ComplexNoInit)
{
	EntryTypeComplex object_1;
	EntryTypeComplex object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexInit_ComplexNoInit)
{
	EntryTypeComplex object_1(5);
	EntryTypeComplex object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexNoInit_ComplexInit)
{
	EntryTypeComplex object_1;
	EntryTypeComplex object_2(5);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexInit_ComplexInit_Same)
{
	EntryTypeComplex object_1(5);
	EntryTypeComplex object_2(5);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexInit_ComplexInit_NotSame)
{
	EntryTypeComplex object_1(5);
	EntryTypeComplex object_2(10);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexNoInit_VariableNoInit)
{
	EntryTypeComplex object_1;
	EntryTypeVariable object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexInit_VariableNoInit)
{
	EntryTypeComplex object_1(5);
	EntryTypeVariable object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexNoInit_VariableInit)
{
	EntryTypeComplex object_1;
	EntryTypeVariable object_2("A");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexInit_VariableInit_One)
{
	EntryTypeComplex object_1(5);
	EntryTypeVariable object_2("A");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_ComplexInit_VariableInit_Many)
{
	EntryTypeComplex object_1(5);
	EntryTypeVariable object_2("Abc");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}

TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableNoInit_VariableNoInit)
{
	EntryTypeVariable object_1;
	EntryTypeVariable object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableInit_VariableNoInit)
{
	EntryTypeVariable object_1("");
	EntryTypeVariable object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableNoInit_VariableInit)
{
	EntryTypeVariable object_1;
	EntryTypeVariable object_2("");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableInit_VariableInit_Same_one)
{
	EntryTypeVariable object_1("a");
	EntryTypeVariable object_2("a");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableInit_VariableInit_NotSame_one)
{
	EntryTypeVariable object_1("a");
	EntryTypeVariable object_2("b");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableInit_VariableInit_Same_many)
{
	EntryTypeVariable object_1("abc");
	EntryTypeVariable object_2("abc");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_TRUE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_TRUE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_VariableInit_VariableInit_NotSame_many)
{
	EntryTypeVariable object_1("abc");
	EntryTypeVariable object_2("cba");

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_Zero_1)
{
	EntryTypeNumber object_1;
	EntryTypeNumber object_2(0);

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}


TEST(TensorCoreTensorCoreEntryTypeSameAs, SameAs_Zero_2)
{
	EntryTypeNumber object_1(0);
	EntryTypeNumber object_2;

	EntryType entryObject_1(object_1);
	EntryType entryObject_2(object_2);

	EXPECT_NO_THROW(entryObject_1.sameAs(entryObject_2), std::exception);
	EXPECT_FALSE(entryObject_1.sameAs(entryObject_2));

	EXPECT_NO_THROW(entryObject_2.sameAs(entryObject_1), std::exception);
	EXPECT_FALSE(entryObject_2.sameAs(entryObject_1));
}