#include <iostream>
#include <Windows.h>
using namespace std;
#include "FUNCFIBO.H"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n; 
	cout << "Введите число n" << endl;
	cin >> n;
	cout << "Число Фибоначчи под номером " << n << ": " << fibonacci(n) << endl;
	
	return 0;
}