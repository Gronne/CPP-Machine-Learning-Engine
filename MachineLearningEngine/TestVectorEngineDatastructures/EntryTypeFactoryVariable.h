#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypesFactoryVariable, factoryStringEmpty)
{
	std::string initValue = "";

	EntryType object = EntryFactory::Variable(initValue);

	EXPECT_TRUE(object.isVariable());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeVariable(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryVariable, factoryStringOne)
{
	std::string initValue = "a";

	EntryType object = EntryFactory::Variable(initValue);

	EXPECT_TRUE(object.isVariable());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeVariable(initValue)));
}


TEST(TensorCoreTensorCoreEntryTypesFactoryVariable, factoryStringMany)
{
	std::string initValue = "abc";

	EntryType object = EntryFactory::Variable(initValue);

	EXPECT_TRUE(object.isVariable());
	EXPECT_TRUE(object.isPossible());
	EXPECT_TRUE(object == EntryType(EntryTypeVariable(initValue)));
}

