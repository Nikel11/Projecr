#include "stdafx.h"
#include<iomanip>
// ���������� ������� ��� ���������� ����� ���������
double suma(double x[], int n)
{
	double s; int i;
	//����������
	s = 0;
	for (i = 0; i < n - 1; i++)
		s = s + x[i];
	return s;
}
//����������� ������� ��� ���������� ���������� ������������
double skp(double x[], double y[], int n)
{
	double sp; int i;
	//���������
	sp = 0;
	for (i = 0; i < n - 1; i++)
		sp += y[i] * x[i];
	return sp;
}
//����������� ������� ��� ���������� ����� ��������� ���������
double sk(double x[], int n)
{
	double sk; int i;
	//����c�����
	sk = 0;
	for (i = 0; i < n - 1; i++)
		sk += pow(x[i], 2);
	return sk;
}
//����������� ������� ��� ���������� �������� �����
double raz(double x, double y)
{
	double raz = x - y;
	return raz;
}
//����������� ������� ��� ���������� ������������ �����
double proiz(double x, double y)
{
	double pr = x * y;
	return pr;
}
//����������� ������� ��� ���������� ���������� 
long double fact (int N)
{
	if (N < 0) // ���� ������������ ���� ������������� �����
		return 0; // ���������� ����
	if (N == 0) // ���� ������������ ���� ����,
		return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
	else // �� ���� ��������� �������
		return N * fact(N - 1); // ������ ��������.
}