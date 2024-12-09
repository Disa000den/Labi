const int ROWS = 4;
const int COLS = 5;
#ifndef FUNC_H
#define FUNC_H
void sortRow(double mat[][5], int row, int cols, int (*fcmp)(const void*, const void*));
int compare(const void* a, const void* b);
void printMat(double mat[][5], int rows, int cols);
#endif // !FUNC_H
