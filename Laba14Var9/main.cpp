#include <iostream>
#include <Windows.h>
using namespace std;
#include "mat.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, n, m, mxn, mxm, max;
	cout << "Введите диапозон k" << endl;
	cin >> k;
	cout << "Введите количество строк" << endl;
	cin >> n;
	cout << "Введите количество столбцов" << endl;
	cin >> m;
	max = 0 - (k * 100);
	int** mat = new int* [n];
	for (int i = 0; i < n; i++)
	{
		mat[i] = new int[m];
	}
	fillmat(mat, m, n, k);
	cout << "Сгенерированная матрица: " << endl;
	printmat(mat, n, m);
	maxmat(mat, n, m, &mxn, &mxm, &max);
	cout << "\nМаксимум матрицы: " << max << endl;
	cout << "Номер строки:" << mxn << endl;
	cout << "Номер столбца" << mxm << endl;
	
	for (int i = 0; i < n; i++)
	{
		delete[] mat[i];
	}
	delete[] mat;
	return 0;
}