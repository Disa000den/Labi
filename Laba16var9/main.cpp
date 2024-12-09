#include <iostream>
#include "func.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int ROWS = 4;
    const int COLS = 5;
    double mat[ROWS][COLS] = {
        {1.2, 3.4, 5.6, 7.8, 9.0},
        {9.1, 7.2, 5.3, 3.4, 1.5},
        {4.5, 6.7, 8.9, 2.1, 0.3},
        {5.5, 4.4, 3.3, 2.2, 1.1}
    };
    cout << "Исходная матрица:" << endl;
    printMat(mat, ROWS, COLS);

    int row;
    cout << "Введите номер строки для сортировки ";
    cin >> row;
    row = row - 1;

    sortRow(mat, row, COLS, compare);

    cout << "Матрица после сортировки строки " << row + 1 << ":" << endl;
    printMat(mat, ROWS, COLS);

    return 0;
}