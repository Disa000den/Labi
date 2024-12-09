#include <iostream>
using namespace std;
#include <Windows.h>
#include "FuncStr.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 81;
	const char* str2 = "1234567890";
	char*p;
	char str1[SIZE], str3[SIZE];
	cout << "Введите строку" << endl;
	cin.getline(str1, SIZE);
	p = FuncStr(str1, str2, str3);
	if (p[0] == 0)
	{
		cout << "Строка пустая или вы не ввели ни одну цифру" << endl;
	}
	else
	{
		cout << "Итоговая строка: " << endl;
		for (int i = 0; p[i] != 0; i++)
		{
			cout << p[i];
		}
	}
	return 0;
}