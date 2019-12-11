#pragma once
#include "VectorEngineHeaders.h"

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_num_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());

	
	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_num_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + complex));
	CoreEntry object_2(number + (number - complex));
	CoreEntry object_3(number + (number * complex));
	CoreEntry object_4(number + (number / complex));

	CoreEntry object_5(number - (number + complex));
	CoreEntry object_6(number - (number - complex));
	CoreEntry object_7(number - (number * complex));
	CoreEntry object_8(number - (number / complex));

	CoreEntry object_9(number * (number + complex));
	CoreEntry object_10(number * (number - complex));
	CoreEntry object_11(number * (number * complex));
	CoreEntry object_12(number * (number / complex));

	CoreEntry object_13(number / (number + complex));
	CoreEntry object_14(number / (number - complex));
	CoreEntry object_15(number / (number * complex));
	CoreEntry object_16(number / (number / complex));


	CoreEntry result_1(CoreEntry(EntryFactory::Number(10)) + CoreEntry(EntryFactory::Complex(5)));
	CoreEntry result_2(CoreEntry(EntryFactory::Number(10)) - CoreEntry(EntryFactory::Complex(5)));
	CoreEntry result_3(CoreEntry(EntryFactory::Number(5)) + CoreEntry(EntryFactory::Complex(25)));
	CoreEntry result_4(CoreEntry(EntryFactory::Number(5)) - CoreEntry(EntryFactory::Complex(1)));

	CoreEntry result_5(CoreEntry(EntryFactory::Complex(5)));
	CoreEntry result_6(CoreEntry(EntryFactory::Complex(-5)));
	CoreEntry result_7(CoreEntry(EntryFactory::Number(5)) - CoreEntry(EntryFactory::Complex(25)));
	CoreEntry result_8(CoreEntry(EntryFactory::Number(4)) + CoreEntry(EntryFactory::Complex(1)));

	CoreEntry result_9(CoreEntry(EntryFactory::Number(25) + EntryFactory::Complex(25)));
	CoreEntry result_10(CoreEntry(EntryFactory::Number(25) - EntryFactory::Complex(25)));
	CoreEntry result_11(CoreEntry(EntryFactory::Complex(125)));
	CoreEntry result_12(CoreEntry(EntryFactory::Number(-5)));

	CoreEntry result_13(CoreEntry(EntryFactory::Number(1)) - CoreEntry(EntryFactory::Complex(1)));
	CoreEntry result_14(CoreEntry(EntryFactory::Number(INFINITY)));
	CoreEntry result_15(CoreEntry(EntryFactory::Complex(-0.04)));
	CoreEntry result_16(CoreEntry(EntryFactory::Number(-1)));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_num_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry variable(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + variable));
	CoreEntry object_2(number + (number - variable));
	CoreEntry object_3(number + (number * variable));
	CoreEntry object_4(number + (number / variable));

	CoreEntry object_5(number - (number + variable));
	CoreEntry object_6(number - (number - variable));
	CoreEntry object_7(number - (number * variable));
	CoreEntry object_8(number - (number / variable));

	CoreEntry object_9(number * (number + variable));
	CoreEntry object_10(number * (number - variable));
	CoreEntry object_11(number * (number * variable));
	CoreEntry object_12(number * (number / variable));

	CoreEntry object_13(number / (number + variable));
	CoreEntry object_14(number / (number - variable));
	CoreEntry object_15(number / (number * variable));
	CoreEntry object_16(number / (number / variable));


	CoreEntry result_1(CoreEntry(EntryFactory::Number(10)) + CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_2(CoreEntry(EntryFactory::Number(10)) - CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_3(CoreEntry(EntryFactory::Number(5)) + (CoreEntry(EntryFactory::Number(5)) * CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_3_1(CoreEntry(EntryFactory::Number(10)) * CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_3_2(CoreEntry(EntryFactory::Number(10)) + CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_4(CoreEntry(EntryFactory::Number(5)) + (CoreEntry(EntryFactory::Number(5)) / CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_4_1(CoreEntry(EntryFactory::Number(10)) / CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_4_2(CoreEntry(EntryFactory::Number(10)) + CoreEntry(EntryFactory::Variable("a")));


	CoreEntry result_5(CoreEntry(EntryFactory::Number(0)) - CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_6(CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_7(CoreEntry(EntryFactory::Number(5)) - (CoreEntry(EntryFactory::Number(5)) * CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_7_1(CoreEntry(EntryFactory::Number(0)) * CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_8(CoreEntry(EntryFactory::Number(5)) - (CoreEntry(EntryFactory::Number(5)) / CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_8_1(CoreEntry(EntryFactory::Number(0)) / CoreEntry(EntryFactory::Variable("a")));

	CoreEntry result_9(CoreEntry(EntryFactory::Number(5)) * (CoreEntry(EntryFactory::Number(5)) + CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_9_1(CoreEntry(EntryFactory::Number(5*5)) + (CoreEntry(EntryFactory::Number(5)) * CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_10(CoreEntry(EntryFactory::Number(5)) * (CoreEntry(EntryFactory::Number(5)) - CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_10_1(CoreEntry(EntryFactory::Number(5 * 5)) - (CoreEntry(EntryFactory::Number(5)) * CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_11(CoreEntry(EntryFactory::Number(5 * 5)) * CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_12(CoreEntry(EntryFactory::Number(5 * 5)) / CoreEntry(EntryFactory::Variable("a")));

	CoreEntry result_13(CoreEntry(EntryFactory::Number(5)) / (CoreEntry(EntryFactory::Number(5)) + CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_13_1(CoreEntry(EntryFactory::Number(1)) + CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_13_2(CoreEntry(EntryFactory::Number(1)) + (CoreEntry(EntryFactory::Number(5)) / CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_14(CoreEntry(EntryFactory::Number(5)) / (CoreEntry(EntryFactory::Number(5)) - CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_14_1(CoreEntry(EntryFactory::Number(1)) - CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_14_2(CoreEntry(EntryFactory::Number(1)) - (CoreEntry(EntryFactory::Number(5)) / CoreEntry(EntryFactory::Variable("a"))));
	CoreEntry result_15(CoreEntry(EntryFactory::Number(1)) / CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_15_1(CoreEntry(EntryFactory::Variable("a")));
	CoreEntry result_16(EntryFactory::Variable("a"));


	EXPECT_TRUE(object_1 == result_1);

	EXPECT_TRUE(object_2 == result_2);

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3 != result_3_1);
	EXPECT_TRUE(object_3 != result_3_2);

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4 == result_4_1);
	EXPECT_TRUE(object_4 == result_4_2 );


	EXPECT_TRUE(object_5 == result_5);

	EXPECT_TRUE(object_6 == result_6);

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7 != result_7_1);

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8 != result_8_1);


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9 != result_9_1);

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10 != result_10_1);

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13 != result_13_1);
	EXPECT_TRUE(object_13 != result_13_2);

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14 != result_14_1);
	EXPECT_TRUE(object_14 != result_14_2);

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15 != result_15_1);

	EXPECT_TRUE(object_16 == result_16);
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_com_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_com_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_com_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_var_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_var_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_num_var_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_num_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_num_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_num_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_com_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_com_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_com_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_var_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_var_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_com_var_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_num_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_num_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_num_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_com_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_com_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_com_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_var_num)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}


TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_var_com)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}

TEST(TensorCoreTensorCoreEntryCollapsLeafTree, Collaps_var_var_var)
{
	CoreEntry number(EntryFactory::Number(5));
	CoreEntry complex(EntryFactory::Complex(5));
	CoreEntry varaible(EntryFactory::Variable("a"));

	CoreEntry object_1(number + (number + number));
	CoreEntry object_2(number + (number - number));
	CoreEntry object_3(number + (number * number));
	CoreEntry object_4(number + (number / number));

	CoreEntry object_5(number - (number + number));
	CoreEntry object_6(number - (number - number));
	CoreEntry object_7(number - (number * number));
	CoreEntry object_8(number - (number / number));

	CoreEntry object_9(number * (number + number));
	CoreEntry object_10(number * (number - number));
	CoreEntry object_11(number * (number * number));
	CoreEntry object_12(number * (number / number));

	CoreEntry object_13(number / (number + number));
	CoreEntry object_14(number / (number - number));
	CoreEntry object_15(number / (number * number));
	CoreEntry object_16(number / (number / number));


	CoreEntry result_1(EntryFactory::Number(15));
	CoreEntry result_2(EntryFactory::Number(5));
	CoreEntry result_3(EntryFactory::Number(30));
	CoreEntry result_4(EntryFactory::Number(6));

	CoreEntry result_5(EntryFactory::Number(-5));
	CoreEntry result_6(EntryFactory::Number(5));
	CoreEntry result_7(EntryFactory::Number(-20));
	CoreEntry result_8(EntryFactory::Number(4));

	CoreEntry result_9(EntryFactory::Number(50));
	CoreEntry result_10(EntryFactory::Number(0));
	CoreEntry result_11(EntryFactory::Number(125));
	CoreEntry result_12(EntryFactory::Number(5));

	CoreEntry result_13(EntryFactory::Number(0.5));
	CoreEntry result_14(EntryFactory::Number(INFINITY));
	CoreEntry result_15(EntryFactory::Number(0.20));
	CoreEntry result_16(EntryFactory::Number(5));


	EXPECT_TRUE(object_1 == result_1);
	EXPECT_TRUE(object_1.isLeaf());

	EXPECT_TRUE(object_2 == result_2);
	EXPECT_TRUE(object_2.isLeaf());

	EXPECT_TRUE(object_3 == result_3);
	EXPECT_TRUE(object_3.isLeaf());

	EXPECT_TRUE(object_4 == result_4);
	EXPECT_TRUE(object_4.isLeaf());


	EXPECT_TRUE(object_5 == result_5);
	EXPECT_TRUE(object_5.isLeaf());

	EXPECT_TRUE(object_6 == result_6);
	EXPECT_TRUE(object_6.isLeaf());

	EXPECT_TRUE(object_7 == result_7);
	EXPECT_TRUE(object_7.isLeaf());

	EXPECT_TRUE(object_8 == result_8);
	EXPECT_TRUE(object_8.isLeaf());


	EXPECT_TRUE(object_9 == result_9);
	EXPECT_TRUE(object_9.isLeaf());

	EXPECT_TRUE(object_10 == result_10);
	EXPECT_TRUE(object_10.isLeaf());

	EXPECT_TRUE(object_11 == result_11);
	EXPECT_TRUE(object_11.isLeaf());

	EXPECT_TRUE(object_12 == result_12);
	EXPECT_TRUE(object_12.isLeaf());


	EXPECT_TRUE(object_13 == result_13);
	EXPECT_TRUE(object_13.isLeaf());

	EXPECT_TRUE(object_14 == result_14);
	EXPECT_TRUE(object_14.isLeaf());

	EXPECT_TRUE(object_15 == result_15);
	EXPECT_TRUE(object_15.isLeaf());

	EXPECT_TRUE(object_16 == result_16);
	EXPECT_TRUE(object_16.isLeaf());
}