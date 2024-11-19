#include <iostream>
using namespace std;
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 5;
	double* p = 0;
	int i;

	p = new double[SIZE];
	cout << "Введите числа\n";
	for (i = 0; i < SIZE; i++)
	{
		cin >> *(p + i);
	}
	for (i = 0; i < SIZE; i++) 
	{
		if (*(p + i) < 0)
		{
			cout << "Первое отрицательное число: " << *(p + i) << endl;
			cout << "Его номер: " << i + 1 << endl;
			break;
		}
		else if (i == SIZE)
		{
			cout << "Отрицательные числа не были введены" << endl;
		}
	}
	delete[] p;
	return 0;
}