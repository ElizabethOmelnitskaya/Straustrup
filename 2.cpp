/*
1) Напишите на языке С++ программу, которая преобразует мили в километры. Ваша программа должна содержать 
понятное приглашение пользователю ввести миль. Указание: в одной миле 1.609 км. 
2) Напишите программу. предлагающую пользователю ввести два целочисленных значения. Запишите эти значения в 
переменные типа int с именами vall и val2. Напишите программу, определяющую наименьшее и наибольшее значения, 
а также сумму, разность, произведение и частное этих значений.
3) Напишите программу. предлагающую пользователю ввести три целых числа, а затем выводит их в порядке возрастания, 
разделяя запятыми. Например, если пользователь вводит числа 10 4 6. то программа должна вывести на экран числа
4, 6, 10. Если два числа совпадают. то они должны идти одно за другим. Например. если пользователь вводит числа 
	4 5 4, то программа должна вывести на экран 4, 4, 5. 
4) Напишите программу. проверяющую четность или нечетность целых чисел. Как всегда. убедитесь, что вывод программы 
ясен и полон. Вывод должен быть информативным, например "Число 4 является четным".
5) Напишите программу, преобразующую слова "нуль", "два" и так далее в цифры О. 2 и т.д. Когда пользователь вводит
число в виде слова, программа должна вывести на экран соответствующую цифру. Выполните эту программу для цифр 
О, 1, 2, 3 и 4. Если пользователь введет что-нибудь другое, например фразу "rлупый компьютер!", программа должна 
ответить "Я не знаю такоrо числа!" 
6) Напишите программу, принимающую на входе символ операции с двумя операндами и выводящую на экран результат 
вычисления. Например:
+ 100 3.14
* 4 5 
Считайте символ операции в строку с именем operation и, используя инструкцию if, выясните, какую операцию хочет 
выполнить пользователь, например if (operation="+" ) . Считывайте операнды в переменные типа double. 
Выполните операции +, -, *· /, plus, minus. mul и div, имеющие очевидный смысл. 
7) Напишите программу. предлагающую пользователю ввести определенное количество 1 -, 5-, 10-, 25-, 50-центовых и долларовых монет.
Пользователь должен по отдельности ввести количество монет каждого достоинства, например "Сколько у вас одвоцентовых монет?"
Затем программа должна вывести результат примерно такого вида.
У аас 23 одноцентовwх нонет .
У аас 17 пятицентовwх нонет .
У вас 14 десятицентовwх нонет .
У вас 7 двадцатипятицентовwх нонет .
У вас 3 пятидесятицентовwх нонет .
Общая стоимость ваших нонет равна 573 центам.
Усовершенствуйте программу: если у пользователя только одна монета, выведите ответ в грамматически правильной форме. Например,
" 14 десятицентовых монет" и "1 одвоцевтовая монета" (а не "1 одноцевтовых монет"). Кроме того, выведите результат в долларах и
центах, т.е. 5 долларов 73 цента. а не 573 цента. 
*/

#include <iostream>
#include "string"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	/*// 1. 
	int mil;
	cout << "Введите количество миль: " << endl;
	cin >> mil;
	double killometers = mil * 1.609;
	cout << killometers;
	cout << endl;

	// 2.
	double val1, val2;
	cout << "Введите 2 целочисленных значения: ";
	cin >> val1 >> val2;
	
	double min, max;
	min = 0;
	min = val1;
	if (val2 < min) min = val2;
	
	max = 0;
	max = val2;
	if (val1 > max) max = val1;
	
	cout << "Наибольшее: " << max << " наименьшее: " << min;

	double sum = val1 + val2;
	cout << "\nСумма: " << sum << endl;
	double difference = max - min;
	cout << "Разность: " << difference << endl;;
	double multi = val1 * val2;
	cout << "Умножение: " << multi << endl;
	double division = max / min;
	cout << "Частное: " << division << endl;
	
	// 3.
	int x, y, z;
	cout << "Введите 3 целых числа: " << endl;
	cin >> x >> y >> z;
	int sum = x + y + z;
	int min, max;
	min = 0; max = 0;
	min = x;
	if (y < min) min = y;
	if (z < min) min = z;
	cout << "Min: " << min << endl;

	max = z;
	if (y > max) max = y;
	if (x > max) max = x;
	cout << "Max: " << max << endl;

	cout << min << " , " << sum - min - max << " , " << max << endl;

	// 4.
	int num;
	cout << "Введите целое число: " << endl;
	cin >> num;
	if (num % 2 == 0) cout << "\nЧисло " << num << " является четным \n";
	else cout << "\nЧисло " << num << " является нечетным \n";

	// 5.
	string slovo;
	while (cin >> slovo) {
		if (slovo == "nul") cout << "0\n";
		else if (slovo == "odine") cout << "1\n";
		else if (slovo == "dva") cout << "2\n";
		else if (slovo == "tri") cout << "3\n";
		else if (slovo == "chetyre") cout << "4\n";
		else
		{
			cout << "Я не знаю такого числа!\n";
			break;
		}
	}
	
	// 6.

	string operation = " ";
	string plus = "+";
	string minus = "-";
	string mul = "*";
	string div = "/";
	cout << "Введите операцию, которую хотите выполнить: " << endl;
	cin >> operation;
	double a, b;
	cout << "Введите числа: " << endl;
	cin >> a >> b;

	if (operation == plus) cout << plus << "\t" << a << "\t" << b << "\nresult = " << a + b << endl;
	else if (operation == minus) cout << minus << "\t" << a << "\t" << b << "\nresult = " << a - b << endl;
	else if (operation == mul) cout << mul << "\t" << a << "\t" << b << "\nresult = " << a * b << endl;
	else if (operation == div) cout << div << "\t" << a << "\t" << b << "\nresult = " << a / b << endl;
	else cout << "Мне это не под силу!!\n"; */

	// 7.
	int cent_1, cent_5, cent_10, cent_25, cent_50, dCoin;
	int cent, dollars;
	cout << "1 cent monets: \n";
	cin >> cent_1;
	cout << "5 cent monets: \n";
	cin >> cent_5;
	cout << "10 cent monets: \n";
	cin >> cent_10;
	cout << "25 cent monets: \n";
	cin >> cent_25;
	cout << "50 cent monets: \n";
	cin >> cent_50;

	cent = cent_1 + 5 * cent_5 + 10 * cent_10 + 25 * cent_25 + 50 * cent_50; // сумма центов
	dollars = cent / 100; // переводим центы в доллары 
	cent = cent % 100;

	if (cent_1 == 1) cout << "You have " << cent_1 << " coin\n";
	else if(cent_1 > 1) cout << "You have " << cent_1 << " coins\n";
	if (cent_5 == 1) cout << "You have " << cent_5 << " coin\n";
	else if (cent_5 > 1) cout << "You have " << cent_5 << " coins\n";
	if (cent_10 == 1) cout << "You have " << cent_10 << " coin\n";
	else if (cent_10 > 1) cout << "You have " << cent_10 << " coins\n";
	if (cent_25 == 1) cout << "You have " << cent_25 << " coin\n";
	else if (cent_25 > 1) cout << "You have " << cent_25 << " coins\n";
	if (cent_50 == 1) cout << "You have " << cent_50 << " coin\n";
	else if (cent_50 > 1) cout << "You have " << cent_50 << " coins\n";
	cout << "All you monet: " << dollars << " d " << cent << " c\n";
	
	system("pause");
	return 0;
}