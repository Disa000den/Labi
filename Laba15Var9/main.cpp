#include <iostream>
#include <Windows.h>
using namespace std;
#include "mat.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, n, m, mxn, mxm, max, mxn1, mxm1;
	double maxd;
	cout << "Введите диапозон k" << endl;
	cin >> k;
	cout << "Введите количество строк" << endl;
	cin >> n;
	cout << "Введите количество столбцов" << endl;
	cin >> m;
	max = 0 - (k * 100);
	maxd = 0 - (k * 100);
	int** mat = new int* [n];
	for (int i = 0; i < n; i++)
	{
		mat[i] = new int[m];
	}
	double** mat1 = new double* [n];
	for (int i = 0; i < n; i++)
	{
		mat1[i] = new double[m];
	}
	fillmat<int, double>(mat, m, n, k, mat1);
	cout << "Сгенерированная матрица: " << endl;
	printmat<int, double>(mat, n, m, mat1);
	maxmat<int, double>(mat, n, m, &mxn, &mxm, &max, &mxn1, &mxm1, &maxd, mat1);
	cout << "\nМаксимум матрицы из целых чисел: " << max << endl;
	cout << "Номер строки:" << mxn << endl;
	cout << "Номер столбца" << mxm << endl;
	cout << "\nМаксимум матрицы из не целых чисел: " << maxd << endl;
	cout << "Номер строки:" << mxn1 << endl;
	cout << "Номер столбца" << mxm1 << endl;

	for (int i = 0; i < n; i++)
	{
		delete[] mat[i];
	}
	delete[] mat;
	return 0;
}