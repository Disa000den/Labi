#include <iostream>
using namespace std;
#include "DelSum.h"
#include <Windows.h>

int n, kol = 0, sum = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ����� n" << endl;
	cin >> n;
	DelSum(n, &kol, &sum);
	cout << "���������� ���������: " << kol << "\n����� ���������: " << sum;
	return 0;
}