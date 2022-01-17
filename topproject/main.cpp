#include<iostream>
#include<iomanip>
#include "..\Library\function.h"
#include "..\Library\inoutput.h"
#include <cmath>
double cubic(double d)
{
 return pow(d,3);
}
using namespace std;

//Главная функция
void main()
{
	setlocale(LC_ALL, "rus");
	//Объявление заданных векторов и переменных
	int n;
	double  k, b, A, B, C, D;
	double *t, *s;
	cout << "Введите количество координат n: ";
	cin >> n;
	t = new double[n];
	s = new double[n];
	//Ввод вектора t(xi)
	cout << "Введите вектор t \n";
	inputv(t, n);
	cout << "\n ***Вектор t***";
	outputv(t, n);
	//Ввод вектора s
	cout << "\n Введите вектор s \n";
	inputv(s, n);
	cout << "\n ***Вектор s***";
	outputv(s, n);
	A = skp(t, s, n);
	cout << "\n Cкалярное произведение \n" << A;
	B = suma(t, n);
	cout << "\n Сумма координат вектора t \n" << B;
	C = suma(s, n);
	cout << "\n Сумма координат вектора s \n" << C;
	D = sk(t, n);
	cout << "\n Сумма квадратов координат вектора t \n" << D;
	k = (n*A - B*C) / (n*D - pow(B, 2));
	cout << "\n Коэффициент k \n" << k;
	b = (C - k*B) / n;
	cout << "\n Коэффициент b \n" << b;
	cubic(10);
	

}