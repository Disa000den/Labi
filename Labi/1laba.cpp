int 1laba()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double focus, distance, size, h;
	cout << "\n ������� �������� ����������"; cin >> focus;
	cout << "\n ������� ���������� �������� �� ������"; cin >> distance;
	cout << "\n ������� ������ ��������"; cin >> size;
	h = focus * size / distance;
	cout << "������� �����������" << h;
	cout << "��\n";
	return 0;
}