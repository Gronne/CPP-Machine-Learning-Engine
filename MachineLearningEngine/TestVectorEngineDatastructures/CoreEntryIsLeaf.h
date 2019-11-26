#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Empty)
{
	CoreEntry object;

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Number_Empty)
{
	CoreEntry object((EntryType(EntryTypeNumber())));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Number)
{
	CoreEntry object((EntryFactory::Number(5)));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Complex_Empty)
{
	CoreEntry object((EntryType(EntryTypeComplex())));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Complex)
{
	CoreEntry object((EntryFactory::Complex(5)));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Variable_Empty)
{
	CoreEntry object((EntryType(EntryTypeVariable())));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Variable_non)
{
	CoreEntry object((EntryFactory::Variable("")));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Variable)
{
	CoreEntry object((EntryFactory::Variable("a")));

	EXPECT_TRUE(object.isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Number_Number)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Number(10));

	EXPECT_TRUE((object_1 + object_2).isLeaf());
	EXPECT_TRUE((object_1 - object_2).isLeaf());
	EXPECT_TRUE((object_1 * object_2).isLeaf());
	EXPECT_TRUE((object_1 / object_2).isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Number_Complex)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Complex(10));

	EXPECT_FALSE((object_1 + object_2).isLeaf());
	EXPECT_FALSE((object_1 - object_2).isLeaf());
	EXPECT_TRUE((object_1 * object_2).isLeaf());
	EXPECT_TRUE((object_1 / object_2).isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Number_Variable)
{
	CoreEntry object_1(EntryFactory::Number(5));
	CoreEntry object_2(EntryFactory::Variable("a"));

	EXPECT_FALSE((object_1 + object_2).isLeaf());
	EXPECT_FALSE((object_1 - object_2).isLeaf());
	EXPECT_FALSE((object_1 * object_2).isLeaf());
	EXPECT_FALSE((object_1 / object_2).isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Complex_Complex)
{
	CoreEntry object_1(EntryFactory::Complex(5));
	CoreEntry object_2(EntryFactory::Complex(10));

	EXPECT_TRUE((object_1 + object_2).isLeaf());
	EXPECT_TRUE((object_1 - object_2).isLeaf());
	EXPECT_TRUE((object_1 * object_2).isLeaf());
	EXPECT_TRUE((object_1 / object_2).isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Complex_Variable)
{
	CoreEntry object_1(EntryFactory::Complex(5));
	CoreEntry object_2(EntryFactory::Variable("a"));

	EXPECT_FALSE((object_1 + object_2).isLeaf());
	EXPECT_FALSE((object_1 - object_2).isLeaf());
	EXPECT_FALSE((object_1 * object_2).isLeaf());
	EXPECT_FALSE((object_1 / object_2).isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Variable_Variable_1)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	CoreEntry object_2(EntryFactory::Variable("a"));

	EXPECT_FALSE((object_1 + object_2).isLeaf());
	EXPECT_FALSE((object_1 - object_2).isLeaf());
	EXPECT_FALSE((object_1 * object_2).isLeaf());
	EXPECT_FALSE((object_1 / object_2).isLeaf());
}


TEST(TensorCoreTensorCoreEntryIsLeaf, IsLeaf_Variable_Variable_2)
{
	CoreEntry object_1(EntryFactory::Variable("a"));
	CoreEntry object_2(EntryFactory::Variable("b"));

	EXPECT_FALSE((object_1 + object_2).isLeaf());
	EXPECT_FALSE((object_1 - object_2).isLeaf());
	EXPECT_FALSE((object_1 * object_2).isLeaf());
	EXPECT_FALSE((object_1 / object_2).isLeaf());
}