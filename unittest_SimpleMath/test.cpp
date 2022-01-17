
#include "gtest/gtest.h"
#include "..\Library\function.h"
#include "..\Library\inoutput.h"

TEST(function, raz)
{
	double a = raz(14, 2);

	EXPECT_EQ(a, 12);
}

TEST(function, proiz)
{
	double pr = proiz(3, 6.7);

	EXPECT_EQ(pr, 20.1);
}