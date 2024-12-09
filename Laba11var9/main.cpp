#include <iostream>
using namespace std;
#include "DelSum.h"
#include <Windows.h>

int n, kol = 0, sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите число n" << endl;
	cin >> n;
	DelSum(n, &kol, &sum);
	cout << "Количество делителей: " << kol << "\nСумма делителей: " << sum;
	return 0;
}