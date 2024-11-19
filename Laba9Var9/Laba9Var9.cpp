#include <iostream>
#include <iomanip>
using namespace std;
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int STR = 3, STLB = 3;
	int matr[STR][STLB];
	int mn;
	int i, j, nmstlb = STLB + 1;

	cout << "Введите матрицу" << endl;
	for (i = 0; i < STR; i++)
	{
		for (j = 0; j < STLB; j++)
		{
			cin >> matr[i][j];
		}
	}

	cout << "Исходная матрица" << endl;
	for (i = 0; i < STR; i++)
	{
		for (j = 0; j < STLB; j++)
		{
			cout << setw(8) << matr[i][j];
		}
		cout << endl;
	}

	while (nmstlb > STLB and nmstlb > 0)
	{
		cout << "Введите номер столбца" << endl;
		cin >> nmstlb;
	}

	j = nmstlb - 1;
	mn = matr[0][j];

	for (i = 0; i < STR; i++)
	{
		if (matr[i][j] < mn)
		{
			mn = matr[i][j];
		}
	}

	cout << "Минимальное число в столбце " << nmstlb << ": " << mn;

	return 0;

}