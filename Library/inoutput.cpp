#include "stdafx.h"
#include<iomanip>
#include<iostream>
using namespace std;
//����������� ������� ��� ����� ������ � ���
void inputv(double x[], int n)
{
	//���������� ����������
	int i;
	//����
	for (i = 0; i < n - 1; i++)
		cin >> x[i];
}
//���������� ������� ��� ������ ������ �� �������
void outputv(double x[], int n)
{
	int i;
	//�����
	for (i = 0; i < n - 1; i++)
	{
		if (i % 8 == 0) cout << endl;
		cout << setw(10) << x[i];
	}
}