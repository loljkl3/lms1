#include <iostream>
#include "Header.h"
using namespace std;

void read(std::vector<int>& vec) {
	setlocale(LC_ALL, "Rus");
	int c;
	cout << "сколько чисел ввести? : ";
	cin >> c;
	cout << "пожалуйста введите числа: ";
	for (int i = 0; i < c; i++) {
		int b;
		cin >> b;
		vec.push_back(b);
	}
	cout << "\n\n";
	cout << "количество чисел: " << c << endl;
	cout << "сами числа: ";
	for (auto au : vec)
	{
		cout << au << " ";
	}
	cout << "\n\n";
};