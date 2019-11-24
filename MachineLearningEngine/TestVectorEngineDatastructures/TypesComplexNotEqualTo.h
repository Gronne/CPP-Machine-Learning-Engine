#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, noInitialisation_noInitialisation)
{
	EntryTypeComplex noArgumentObject;
	EntryTypeComplex noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, noInInitialisation_initialisation)
{
	EntryTypeComplex noArgumentObject;
	EntryTypeComplex noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, noInInitialisation_initialisation_zero)
{
	EntryTypeComplex noArgumentObject;
	EntryTypeComplex noArgumentObject_2(0);

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, initialisation_noInitialisation)
{
	EntryTypeComplex noArgumentObject(5);
	EntryTypeComplex noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, initialisation_noInitialisation_zero)
{
	EntryTypeComplex noArgumentObject(0);
	EntryTypeComplex noArgumentObject_2;

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, initialisation_initialisation_false)
{
	EntryTypeComplex noArgumentObject(5);
	EntryTypeComplex noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_FALSE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, initialisation_initialisation_true)
{
	EntryTypeComplex noArgumentObject(10);
	EntryTypeComplex noArgumentObject_2(5);

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}


TEST(TensorCoreTensorCoreEntryTypescomplexNotEqualTo, initialisation_initialisation_true2)
{
	EntryTypeComplex noArgumentObject(5);
	EntryTypeComplex noArgumentObject_2(10);

	EXPECT_NO_THROW(noArgumentObject != noArgumentObject_2, std::exception);
	EXPECT_TRUE(noArgumentObject != noArgumentObject_2);
}
