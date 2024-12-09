#ifndef MAT_H
#define MAT_H
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
template<class T11, class T12>


void fillmat(T11** mat, int m, int n, int k, T12** mat1)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[i][j] = int(rand() % (2 * k + 1) - k);
			mat1[i][j] = double((rand() % (2 * k + 1) - k) * 0.997);
		}
	}
}

template<class T21, class T22>

void printmat(T21** mat, int n, int m, T22** mat1)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout << mat[i][j] << "\t";
		}
	}
	cout << "\n" << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout << mat1[i][j] << "\t";
		}
	}
}

template<class T31, class T32>

void maxmat(T31** mat, int n, int m, int* mxn, int* mxm,int *max, int *mxn1, int *mxm1, double* maxd, T32** mat1)
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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mat1[i][j] > *maxd)
			{
				*mxn1 = i + 1;
				*mxm1 = j + 1;
				*maxd = mat1[i][j];
			}
		}
	}
}

#endif // !MAT_H

