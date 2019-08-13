#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

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

void f6() {
	int buf;
	while (cin >> buf) {
		cout << buf << endl;
	}
}

void f7() {

	vector<int> v;
	int num = 0;
	while (cin >> num) {
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << "����� ����������: \n";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";

	int min = 0;
	int max = 0;
	min = v[0];
	max = v[v.size() - 1];
	
	cout << "\n���������� ����� �����: " << min << endl;
	cout << "���������� ����� �����: " << max << endl;

	for (int i = 1; i < v.size(); i++)
		if (v[i] == v[i - 1])
			cout << "����� �����: " << v[i] << " " << v[i-1] << "\n"; 
}

void f8() {

	vector<double> v;
	double num = 0;
	while (cin >> num) {
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << "����� ����������: \n";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";


	for (int i = 1; i < v.size(); i++)
		if (v[i] == v[i - 1] + 1.0 / 100 || v[i] == v[i - 1] || v[i] == v[i - 1] - 1.0 / 100)
			cout << "����� ����� �����: " << v[i-1] << " " << v[i] << "\n";

}

void f9() {

	vector<double> v;
	double num = 0, min = 0, max = 0;
	bool flag = true;
	while (cin >> num) {
		cout << "�� ����� �����: " << num << endl;
		if (flag) {
			flag = false;
			min = num;
			max = num;
		}
		else {
			if (num > max)
			{
				max = num;
				cout << "���������� ����� ���������: " << max << endl;
			}
			else if (num < min)
			{
				min = num;
				cout << "���������� ����� ���������: " << min << endl;
			}
		}
		
	}

}

void f10() {
	vector<double> v;
	double num = 0, min = 0, max = 0;
	double m, cm, in, ft;
	bool flag = true;
	int i = 0;
	double sum = 0;
	string unit = " ";
	while (cin >> num >> unit) {
		cout << "�� ����� �����: " << num << " " << unit << endl << endl;
		if (unit == "m") {
			cout << num << " m\n";
			v.push_back(num);
		}
		else if (unit == "cm") {
			num = num * 0.01;
			cout << num << " m\n";
			v.push_back(num);
		}
		else if (unit == "in") {
			num = num * 0.0254;
			cout << num << " m\n";
			v.push_back(num);
		}
		else if (unit == "ft") {
			num = num * 0.3048;
			cout << num << " m\n";
			v.push_back(num);
		}
		else {
			cout << "�� ����� �� ���������� ���� �����!\n";
			break;
		}
		if (flag) {
			flag = false;
			max = num;
			min = num;
		}
		else if (num > max) {
			max = num;
			cout << "����������: " << max << " m\n";
		}
		else if (num < min) {
			min = num;
			cout << "����������: " << min << " m\n";
		}
		i++;
		sum += num;
	}
	cout << "���������� ��������� ��������: " << i;
	cout << "\n����� ��������� ��������: " << sum << " m";
	cout << "\n����������: " << max << " m";
	cout << "\n����������: " << min << " m";

	sort(v.begin(), v.end());

	cout << "\n��� ��������� �������� (��������������� � �����): ";
	for (int j = 0; j < v.size(); j++) {
		cout << v[j] << " ";
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "russian");
	f10();

	system("pause");
	return 0;
}