#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

void main()
{
	system("chcp 1251>NUL");
	double h, r, S�����, S1, l, S2;
	int i;
	cin >> i;
if (i == 1)
{
	ofstream out;
	out.open("D:\\��������� ����������.txt", ios::app);
	out << "\t��������� ����������\n" << "\nS�����=" << S����� << "\nS����=" << S1 << "\tS�����=" << S2 << "\t������� ����=" << l << endl;
	cout << "\n���� ����������� � (��������� ���� D>>��������� ����������)" << endl;
}
}