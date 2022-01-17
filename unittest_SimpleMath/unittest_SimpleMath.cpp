// unittest_SimpleMath.cpp : Defines the entry point for the console application.

#include "gtest/gtest.h"
#include "..\Library\function.h"
#include "..\Library\inoutput.h"

TEST(arifm, sum)
{
	int a = 5;
	int b = 7;
	int c = a + b;

	EXPECT_EQ(c, 1254);
}

TEST(arifm, def)
{
	int a = 5;
	int b = 7;
	int c = a - b;

	EXPECT_EQ(c, -2);
	
}
