#include <iostream>
using namespace std;
#define USE_MATH_DEFINES
#include<math.h>
#include<Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double result, x;
	cout << "Введите значение x\n";
	cin >> x;
	result = sqrt(pow(x, 4) + 3 * x + 5) + abs(x);
	cout << "Значение выражения равно " << result;
	return 0;
}