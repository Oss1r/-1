#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

void main()
{
	system("chcp 1251>NUL");
	double h, r, Sповне, S1, l, S2;
	int i;
	cin >> i;
if (i == 1)
{
	ofstream out;
	out.open("D:\\результат обчислення.txt", ios::app);
	out << "\tрезультат обчислення\n" << "\nSповне=" << Sповне << "\nSбічне=" << S1 << "\tSкруга=" << S2 << "\tдовжина кола=" << l << endl;
	cout << "\nфайл знаходиться в (Локальний диск D>>Результат обчислення)" << endl;
}
}