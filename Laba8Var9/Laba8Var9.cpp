#include <iostream>
using namespace std;
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 5;
	int a;
	int mass[SIZE];

	cout << "Введите значение a" << endl;
	cin >> a;
	cout << "Введите массив" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> mass[i];
	}

	int pos = -1;

	for (int i = 0; i < SIZE; i++)
	{
		if (mass[i] == a)
		{
			pos = i;
			break;
		}
	}

	if (pos != -1) 
	{
		cout << "Первое число" << a << "находится в массиве на позиции " << pos + 1 << endl;
	}
	else
	{
		cout << "Число a не найдено в массиве" << endl;
	}

	return 0;
}