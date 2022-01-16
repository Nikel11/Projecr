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
	//Вычиcление
	sk = 0;
	for (i = 0; i < n - 1; i++)
		sk += pow(x[i], 2);
	return sk;
}
//Определение функции для вычисления разности чисел
double raz(double x, double y)
{
	double raz = x - y;
	return raz;
}
//Определение функции для вычисления произведения чисел
double proiz(double x, double y)
{
	double pr = x * y;
	return pr;
}
//Определение функции для вычисления факториала 
long double fact (int N)
{
	if (N < 0) // если пользователь ввел отрицательное число
		return 0; // возвращаем ноль
	if (N == 0) // если пользователь ввел ноль,
		return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
	else // Во всех остальных случаях
		return N * fact(N - 1); // делаем рекурсию.
}