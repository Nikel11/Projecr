#include "stdafx.h"
#include<iomanip>
// Определние функции для вычисления суммы координат
double suma(double x[], int n)
{
	double s; int i;
	//Вычисление
	s = 0;
	for (i = 0; i < n - 1; i++)
		s = s + x[i];
	return s;
}
//Определение функции для вычисления скалярного произведения
double skp(double x[], double y[], int n)
{
	double sp; int i;
	//Вычиление
	sp = 0;
	for (i = 0; i < n - 1; i++)
		sp += y[i] * x[i];
	return sp;
}
//Определение функции для вычисления суммы квадратов координат
double sk(double x[], int n)
{
	double sk; int i;
	//Вычиление
	sk = 0;
	for (i = 0; i < n - 1; i++)
		sk += pow(x[i], 2);
	return sk;
}
// Разность чисел
double raz(double x, double y)
{
	double raz = x - y;
	return raz;
}
// Произведение чисел
double proiz(double x, double y)
{
	double pr = x * y;
	return pr;
}