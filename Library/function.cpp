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
	//���������
	sk = 0;
	for (i = 0; i < n - 1; i++)
		sk += pow(x[i], 2);
	return sk;
}