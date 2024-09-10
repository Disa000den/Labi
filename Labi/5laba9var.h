#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, fact = 1, n1, i;
	cout << "Введите число\n"; cin >> n;
	n1 = n;
	while (n1 > 1)
	{
		fact = fact * n1;
		n1 = n1 - 1;
	}
	cout << "Факториал числа " << n << " равен " << fact;
	for (i = 3; i < 1000000; i++)
	{
		if ((i - 2) * (i - 1) * (i) == fact)
		{
			cout << "\nМожно";
			break;
		}
		if (i == 1000000 - 1)
		{
			cout << "\nНельзя";
		}
	}
	return 0;
}