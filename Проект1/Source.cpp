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
	double h, r, S�����, S1, l, S2;
	cout << "\t������ �������� ������" << endl;
	cin >> r;
	cout << "\t������ �������� ������" << endl;
	cin >> h;
	l = 2 * p*r;
	S1 = l*h;
	S2 = p*r*r;
	S����� = 2 * S2 + S1;
	cout << "\t��������� ����������\n" << "\nS�����=" << S����� << "\nS����=" << S1 << "\tS�����=" << S2 << "\t������� ����=" << l << endl;
	cout << "\n������ �������� ��������� � ������� ����?\n1-���; �-����-��� ������" << endl;
	int i;
	cin >> (i);
	if (i == 1);
	{
		ofstream out;
		out.open("D:\\��������� ����������.txt", ios::app);
		out << "\t��������� ����������\n" << "\nS�����=" << S����� << "\nS����=" << S1 << "\tS�����=" << S2 << "\t������� ����=" << l << endl;
			cout << "\n���� ����������� � (��������� ���� D>>��������� ����������)" << endl;
	}
	system("pause");
}