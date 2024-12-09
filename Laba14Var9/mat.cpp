#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


void fillmat(int** mat, int m, int n, int k)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[i][j] = rand() % (2 * k + 1) - k;
		}
	}
}

void printmat(int** mat, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout << mat[i][j] << "\t";
		}
	}
}

void maxmat(int** mat, int n, int m, int* mxn, int* mxm, int* max)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mat[i][j] > *max)
			{
				*mxn = i + 1;
				*mxm = j + 1;
				*max = mat[i][j];
			}
		}
	}
}