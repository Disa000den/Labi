#include<iostream>
using namespace std;
#include<Windows.h>
#include <cstring>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char bukva;
	cout << "������� �����\n";
	cin >> bukva;
	bukva = 'A';
	switch (bukva)
	{
	case 'L':
	case 'M':
	case 'K':
	case 'D':
		cout << "��� ��������� �����\n" << endl;
		break;
	case 'A':
	case 'B':
	case 'C':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		cout << "��������, ��� ������� �����" << endl;
		break;
	default:
		cout << "������ ��������.������� ��������� ����� ���������� ��������." << endl;
		break;
	}
	return 0;
}