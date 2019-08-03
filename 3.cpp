#include <iostream>
#include <cmath>

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

int main() {
	
	f5();

	system("pause");
	return 0;
}