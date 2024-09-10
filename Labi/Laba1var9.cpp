#include<iostream>
using namespace std;
#include<Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double diag, plosh;
	cout << "Введите диагональ квадрата\n"; cin >> diag;
	plosh = diag * diag;
	cout << "Площадь квадрата = " << plosh;
	return 0;
}