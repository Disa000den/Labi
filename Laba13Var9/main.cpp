#include <iostream>
using namespace std;
#include <Windows.h>
#include "NewMass.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 5;
	double Mas1[SIZE], Mas2[SIZE] ;
	int a, index;
	cout << "Введите массив" << endl;
	InMas(Mas1, SIZE);
	cout << "Ваш массив: ";
	OutMas(Mas1, SIZE);
	cout << "\nВведите число a" << endl;
	cin >> a;
	cout << "Новый массив: " << endl;
	index = NewMas(Mas1, SIZE, a, Mas2);
	OutMas(Mas2, index);
	
	
	return 0;
}