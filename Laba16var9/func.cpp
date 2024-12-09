#include <iostream>
#include <cstdlib>
#include "func.h"

using namespace std;

void sortRow(double mat[][5], int row, int cols, int (*fcmp)(const void*, const void*)) 
{
    qsort(mat[row], cols, sizeof(double), fcmp);
}

int compare(const void* a, const void* b) 
{
    double arg1 = *(const double*)a;
    double arg2 = *(const double*)b;
    return (arg1 < arg2) - (arg1 > arg2);
}

void printMat(double mat[][5], int rows, int cols) 
{
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}