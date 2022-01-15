#include "stdafx.h"
#include<iomanip>
#include<iostream>
using namespace std;
//Определение функции для ввода ветора в ОЗУ
void inputv(double x[], int n)
{
	//Объявление переменной
	int i;
	//Ввод
	for (i = 0; i < n - 1; i++)
		cin >> x[i];
}
//Определене функции для вывода ветора на монитор
void outputv(double x[], int n)
{
	int i;
	//Вывод
	for (i = 0; i < n - 1; i++)
	{
		if (i % 8 == 0) cout << endl;
		cout << setw(10) << x[i];
	}
}