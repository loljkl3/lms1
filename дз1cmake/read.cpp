#include <iostream>
#include "Header.h"
using namespace std;

void read(std::vector<int>& vec) {
	setlocale(LC_ALL, "Rus");
	int c;
	cout << "������� ����� ������? : ";
	cin >> c;
	cout << "���������� ������� �����: ";
	for (int i = 0; i < c; i++) {
		int b;
		cin >> b;
		vec.push_back(b);
	}
	cout << "\n\n";
	cout << "���������� �����: " << c << endl;
	cout << "���� �����: ";
	for (auto au : vec)
	{
		cout << au << " ";
	}
	cout << "\n\n";
};