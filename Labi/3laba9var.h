#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c;
	cout << "Введите значение стороны a\n";
	cin >> a;
	cout << "Введите значение стороны b\n";
	cin >> b;
	cout << "Введите значение стороны c\n";
	cin >> c;
	if (a + b > c)
	{
		if (a + c > b)
		{
			if (b + c > a)
			{
				cout << "Треугольник существует" << endl;
			}
			else {
				cout << "Треугольник не существует" << endl;
			}
		}
		else {
			cout << "Треугольник не существует" << endl;
		}
	}
	else {
		cout << "Треугольник не существует" << endl;
	}
}