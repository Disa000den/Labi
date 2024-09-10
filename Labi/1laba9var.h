#include<iostream>
using namespace std;
#include<Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double diag, plosh;
	cout << "\n ¬ведите диагональ квадрата"; cin >> diag;
	plosh = diag * diag;
	cout << "\n ѕлощадь квадрата =" << plosh;
	return 0;
}