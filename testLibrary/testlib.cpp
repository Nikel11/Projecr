#include "function.h"
#include "gtest/gtest.h"
//���� �������� �����
TEST(function, raz)
{
	double a= raz(14, 2);

	EXPECT_EQ(a, 12);
}
// ���� ������������ �����
TEST(function, proiz)
{
	double pr=proiz(3,6.7);

	EXPECT_EQ(pr, 20.1);
}
// ���� ���������� �����
TEST(function, fact)
{
	double pr = fact(5);

	EXPECT_EQ(pr, 120);
}