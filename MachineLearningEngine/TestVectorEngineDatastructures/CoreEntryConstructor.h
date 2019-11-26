#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryConstructors, ConstructorEmpty)
{
	CoreEntry object;

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Number(0).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_NoInit)
{
	CoreEntry object((EntryType()));

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Number(0).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Number_NoInit)
{
	EntryType entry((EntryTypeNumber()));

	CoreEntry object(entry);

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Number(0).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Number)
{
	CoreEntry object(EntryFactory::Number(5));

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Number(5).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Complex_NoInit)
{
	EntryType entry((EntryTypeComplex()));

	CoreEntry object(entry);

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Number(0).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Complex)
{
	CoreEntry object(EntryFactory::Complex(5));

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Complex(5).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Variable_NoInit)
{
	EntryType entry((EntryTypeVariable()));

	CoreEntry object(entry);

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Number(0).print());
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Variable_empty)
{
	CoreEntry object(EntryFactory::Variable(""));

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Variable("").print());
}

TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Variable_One)
{
	CoreEntry object(EntryFactory::Variable("a"));

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Variable("a").print());
}

TEST(TensorCoreTensorCoreEntryConstructors, Constructor_EntryType_Variable_Many)
{
	CoreEntry object(EntryFactory::Variable("abc"));

	EXPECT_TRUE(object.isLeaf());
	EXPECT_TRUE(object.print() == EntryFactory::Variable("abc").print());
}


//-------------------------

TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_SingleLeaf_Number)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(object_1);

	EXPECT_TRUE(object_1.isLeaf());
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);
	
	object_1 += CoreEntry(EntryFactory::Number(5));

	EXPECT_TRUE(object_1 != object_2);
}

TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_SingleLeaf_Complex)
{
	CoreEntry object_1(EntryFactory::Complex(5));
	CoreEntry object_2(object_1);

	EXPECT_TRUE(object_1.isLeaf());
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);

	object_1 += CoreEntry(EntryFactory::Complex(5));

	EXPECT_TRUE(object_1 != object_2);
}

TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_SingleLeaf_Variable)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	CoreEntry object_2(object_1);

	EXPECT_TRUE(object_1.isLeaf());
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);

	object_1 = CoreEntry(EntryFactory::Variable("bc"));

	EXPECT_TRUE(object_1 != object_2);
}


//----------------------------

TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_MultipleLeaf_NumberComplex)
{
	CoreEntry object_1(EntryFactory::Number(5));
	object_1 += EntryFactory::Complex(10);

	CoreEntry object_2(object_1);

	EXPECT_FALSE(object_1.isLeaf());
	EXPECT_FALSE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);

	object_1 += CoreEntry(EntryFactory::Number(5));

	EXPECT_FALSE(object_1 == object_2);

	CoreEntry object_3(EntryFactory::Number(5));
	EXPECT_TRUE(object_1 != object_2);
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_MultipleLeaf_NumberVariable)
{
	CoreEntry object_1(EntryFactory::Number(5));
	object_1 += EntryFactory::Variable("a");

	CoreEntry object_2(object_1);

	EXPECT_FALSE(object_1.isLeaf());
	EXPECT_FALSE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);

	object_1 += CoreEntry(EntryFactory::Number(5));

	EXPECT_TRUE(object_1 != object_2);

	CoreEntry object_3(EntryFactory::Number(5));
	EXPECT_TRUE(object_1 != object_2);
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_MultipleLeaf_ComplexVariable)
{
	CoreEntry object_1(EntryFactory::Complex(5));
	object_1 += EntryFactory::Variable("a");

	CoreEntry object_2(object_1);

	EXPECT_FALSE(object_1.isLeaf());
	EXPECT_FALSE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);

	object_1 += CoreEntry(EntryFactory::Complex(5));

	EXPECT_TRUE(object_1 != object_2);

	CoreEntry object_3(EntryFactory::Complex(5));
	EXPECT_TRUE(object_1 != object_2);
}


TEST(TensorCoreTensorCoreEntryConstructors, Constructor_CoreEntry_MultipleLeaf_VariableVariable)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	object_1 += EntryFactory::Variable("a");

	CoreEntry object_2(object_1);

	EXPECT_FALSE(object_1.isLeaf());
	EXPECT_FALSE(object_2.isLeaf());

	EXPECT_TRUE(object_1 == object_2);

	object_1 += CoreEntry(EntryFactory::Variable("a"));

	EXPECT_FALSE(object_1 == object_2);

	CoreEntry object_3(EntryFactory::Variable("a"));
	EXPECT_FALSE(object_1 == object_2);
}