#include <iostream>
#include <windows.h>
#include <math.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

void main()
{
	system("chcp 1251>NUL");
	double p = 3.14;
	double h, r, Sповне, S1, l, S2;
	cout << "\tвведіть значення радіуса" << endl;
	cin >> r;
	cout << "\tвведіть значення висоти" << endl;
	cin >> h;
	l = 2 * p*r;
	S1 = l*h;
	S2 = p*r*r;
	Sповне = 2 * S2 + S1;
	cout << "\tрезультат обчислення\n" << "\nSповне=" << Sповне << "\nSбічне=" << S1 << "\tSкруга=" << S2 << "\tдовжина кола=" << l << endl;
	cout << "\nБажаєте зберегти результат в окремий файл?\n1-так; ні-будь-яка клавіша" << endl;
	int i;
	cin >> (i);
	if (i == 1);
	{
		ofstream out;
		out.open("D:\\результат обчислення.txt", ios::app);
		out << "\tрезультат обчислення\n" << "\nSповне=" << Sповне << "\nSбічне=" << S1 << "\tSкруга=" << S2 << "\tдовжина кола=" << l << endl;
			cout << "\nфайл знаходиться в (Локальний диск D>>Результат обчислення)" << endl;
	}
	system("pause");
}