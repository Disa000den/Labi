#include <iostream>
using namespace std;


double* InMas(double *p, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin >> p[i];
	}
	return p;
}

int OutMas(double* p, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << p[i] << " ";
	}
	return 0;
}

int NewMas(double* p, const int SIZE, int a, double* np)
{
	int index = 0;
	for (int i = 0; i < SIZE; i++)
	{
		int temp = p[i];
		if ((temp % a) == 0)
		{
			np[index++] = p[i];
		}
	}
	return index;
}