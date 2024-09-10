int 1laba()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double focus, distance, size, h;
	cout << "\n Введите фокусное расстояние"; cin >> focus;
	cout << "\n Введите расстояние предмета от фокуса"; cin >> distance;
	cout << "\n Введите размер предмета"; cin >> size;
	h = focus * size / distance;
	cout << "Размеры изображения" << h;
	cout << "см\n";
	return 0;
}