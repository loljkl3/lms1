#include <iostream>
#include "Header.h"
using namespace std;
void print(const std::vector<int>& vec) {
    setlocale(LC_ALL, "Rus");
    cout << "�������������� �����: ";
    for (auto au : vec)
    {
        cout << au << " ";
    }
    cout << endl;
};