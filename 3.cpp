#include <iostream>
#include <cmath>

using namespace std;

// �������������� ������ � ���������� � ��������
// ������� ' i ' ��� '�' ���� ���� ������� ��������� �� �����

void f1() {
	constexpr double cm_per_inch = 2.54;
	double lenqth = 1;
	char unit = ' ';
	cout << "���������� , ������� �����"
		<< "� ������� ��������� (c ��� i) : \n";
	cin >> lenqth >> unit;
	if (unit == 'i')
		cout << lenqth << "in == "
		<< cm_per_inch * lenqth << "cm\n";
	else if (unit == 'c')
		cout << lenqth << "cm == "
		<< lenqth / cm_per_inch << " in\n";
	else cout << "��������, � �� ����, ��� ��� �����" << unit << "\n";
}

void f2() {
	constexpr double cm_per_inch = 2.54;
	double lenqth = 1;
	char unit = 'a';
	cout << "���������� , ������� ����� � ������� ��������� (c ��� i) : \n";
	cin >> lenqth >> unit;
	switch (unit) {
	case 'i':
		cout << lenqth << "in == " << cm_per_inch * lenqth << "cm\n";
		break;
	case 'c':
		cout << lenqth << "cm == " << lenqth / cm_per_inch << " in\n";
		break;
	default:
		cout << "��������, � �� ����, ��� ��� �����" << unit << "\n";
		break;
	}
}

// ��������� � ������� ������ ������� ��������� ����� 0-99
void f3() {
	int i = 0; // �� ������ � ����
	while (i < 100) {
		cout << i << "\t" << i*i << "\n";
		++i; // ��������� i (i ���������� ������ i+l) 
	}
}

//����� �������� � ��������������� �� ������������� ��������
void f4() {
	char symbol = 'a';
	while (symbol<='z') {
		cout << symbol << "\t" << int(symbol)<< "\n";
		symbol++;
	}
}

void f5() {
	for (char symbol = 'a'; symbol <= 'z'; ++symbol) {
		cout << symbol << "\t" << int(symbol) << "\n";
	}
}

int main() {
	
	f5();

	system("pause");
	return 0;
}