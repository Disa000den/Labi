#include <iostream>
using namespace std;
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int LEN = 50;
	char str[LEN];
	cout << "Введите строку" << endl;
	cin.getline(str, LEN);

	int n = 0;
	while (str[n] != '\0')
	{
		n = n++;
	}
	
	for (int i = 0; i < n / 2; i++)
	{
		char temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}

	cout << "Инвертированая строка: " << str << endl;

	return 0;
}