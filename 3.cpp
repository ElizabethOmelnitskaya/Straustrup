#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Преобразование дюймов в сантиметры и наоборот
// Суффикс ' i ' или 'с' озна чает единицу измерения на входе

void f1() {
	constexpr double cm_per_inch = 2.54;
	double lenqth = 1;
	char unit = ' ';
	cout << "Пожапуйста , введите длину"
		<< "и единицу измерения (c или i) : \n";
	cin >> lenqth >> unit;
	if (unit == 'i')
		cout << lenqth << "in == "
		<< cm_per_inch * lenqth << "cm\n";
	else if (unit == 'c')
		cout << lenqth << "cm == "
		<< lenqth / cm_per_inch << " in\n";
	else cout << "Извините, я не знаю, что это такое" << unit << "\n";
}

void f2() {
	constexpr double cm_per_inch = 2.54;
	double lenqth = 1;
	char unit = 'a';
	cout << "Пожапуйста , введите длину и единицу измерения (c или i) : \n";
	cin >> lenqth >> unit;
	switch (unit) {
	case 'i':
		cout << lenqth << "in == " << cm_per_inch * lenqth << "cm\n";
		break;
	case 'c':
		cout << lenqth << "cm == " << lenqth / cm_per_inch << " in\n";
		break;
	default:
		cout << "Извините, я не знаю, что это такое" << unit << "\n";
		break;
	}
}

// Вычисляем и распеча тываем таблицу квадратов чисел 0-99
void f3() {
	int i = 0; // На чинаем с нуля
	while (i < 100) {
		cout << i << "\t" << i*i << "\n";
		++i; // Инкремент i (i становится равным i+l) 
	}
}

//вывод символов и соответствующих им целочисленных значений
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

	cout << "После сортировки: \n";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";

	int min = 0;
	int max = 0;
	min = v[0];
	max = v[v.size() - 1];
	
	cout << "\nНаименьшее число равно: " << min << endl;
	cout << "Наибольшее число равно: " << max << endl;

	for (int i = 1; i < v.size(); i++)
		if (v[i] == v[i - 1])
			cout << "Числа равны: " << v[i] << " " << v[i-1] << "\n"; 
}

void f8() {

	vector<double> v;
	double num = 0;
	while (cin >> num) {
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cout << "После сортировки: \n";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";


	for (int i = 1; i < v.size(); i++)
		if (v[i] == v[i - 1] + 1.0 / 100 || v[i] == v[i - 1] || v[i] == v[i - 1] - 1.0 / 100)
			cout << "Числа почти равны: " << v[i-1] << " " << v[i] << "\n";

}

void f9() {

	vector<double> v;
	double num = 0, min = 0, max = 0;
	bool flag = true;
	while (cin >> num) {
		cout << "Вы ввели число: " << num << endl;
		if (flag) {
			flag = false;
			min = num;
			max = num;
		}
		else {
			if (num > max)
			{
				max = num;
				cout << "Наибольшее среди введенных: " << max << endl;
			}
			else if (num < min)
			{
				min = num;
				cout << "Наименьшее среди введенных: " << min << endl;
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
		cout << "Вы ввели число: " << num << " " << unit << endl << endl;
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
			cout << "Вы ввели не правильную меру длины!\n";
			break;
		}
		if (flag) {
			flag = false;
			max = num;
			min = num;
		}
		else if (num > max) {
			max = num;
			cout << "Наибольшее: " << max << " m\n";
		}
		else if (num < min) {
			min = num;
			cout << "Наименьшее: " << min << " m\n";
		}
		i++;
		sum += num;
	}
	cout << "Количество введенных значений: " << i;
	cout << "\nСумма введенных значений: " << sum << " m";
	cout << "\nНаибольшее: " << max << " m";
	cout << "\nНаименьшее: " << min << " m";

	sort(v.begin(), v.end());

	cout << "\nВсе введенные значения (преобразованные в метры): ";
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