#include<iostream>
#include<iomanip>
#include "..\Library\function.h"
#include "..\Library\inoutput.h"
using namespace std;

//������� �������
void main()
{
	setlocale(LC_ALL, "rus");
	//���������� �������� �������� � ����������
	int n;
	double  k, b, A, B, C, D;
	double *t, *s;
	cout << "������� ���������� ��������� n: ";
	cin >> n;
	t = new double[n];
	s = new double[n];
	//���� ������� t(xi)
	cout << "������� ������ t \n";
	inputv(t, n);
	cout << "\n ***������ t***";
	outputv(t, n);
	//���� ������� s
	cout << "\n ������� ������ s \n";
	inputv(s, n);
	cout << "\n ***������ s***";
	outputv(s, n);
	A = skp(t, s, n);
	cout << "\n C�������� ������������ \n" << A;
	B = suma(t, n);
	cout << "\n ����� ��������� ������� t \n" << B;
	C = suma(s, n);
	cout << "\n ����� ��������� ������� s \n" << C;
	D = sk(t, n);
	cout << "\n ����� ��������� ��������� ������� t \n" << D;
	k = (n*A - B*C) / (n*D - pow(B, 2));
	cout << "\n ����������� k \n" << k;
	b = (C - k*B) / n;
	cout << "\n ����������� b \n" << b;
	cout << endl;
}