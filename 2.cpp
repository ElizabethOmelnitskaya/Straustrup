/*
1) �������� �� ����� �++ ���������, ������� ����������� ���� � ���������. ���� ��������� ������ ��������� 
�������� ����������� ������������ ������ ����. ��������: � ����� ���� 1.609 ��. 
2) �������� ���������. ������������ ������������ ������ ��� ������������� ��������. �������� ��� �������� � 
���������� ���� int � ������� vall � val2. �������� ���������, ������������ ���������� � ���������� ��������, 
� ����� �����, ��������, ������������ � ������� ���� ��������.
3) �������� ���������. ������������ ������������ ������ ��� ����� �����, � ����� ������� �� � ������� �����������, 
�������� ��������. ��������, ���� ������������ ������ ����� 10 4 6. �� ��������� ������ ������� �� ����� �����
4, 6, 10. ���� ��� ����� ���������. �� ��� ������ ���� ���� �� ������. ��������. ���� ������������ ������ ����� 
	4 5 4, �� ��������� ������ ������� �� ����� 4, 4, 5. 
4) �������� ���������. ����������� �������� ��� ���������� ����� �����. ��� ������. ���������, ��� ����� ��������� 
���� � �����. ����� ������ ���� �������������, �������� "����� 4 �������� ������".
5) �������� ���������, ������������� ����� "����", "���" � ��� ����� � ����� �. 2 � �.�. ����� ������������ ������
����� � ���� �����, ��������� ������ ������� �� ����� ��������������� �����. ��������� ��� ��������� ��� ���� 
�, 1, 2, 3 � 4. ���� ������������ ������ ���-������ ������, �������� ����� "r����� ���������!", ��������� ������ 
�������� "� �� ���� ����r� �����!" 
6) �������� ���������, ����������� �� ����� ������ �������� � ����� ���������� � ��������� �� ����� ��������� 
����������. ��������:
+ 100 3.14
* 4 5 
�������� ������ �������� � ������ � ������ operation �, ��������� ���������� if, ��������, ����� �������� ����� 
��������� ������������, �������� if (operation="+" ) . ���������� �������� � ���������� ���� double. 
��������� �������� +, -, *� /, plus, minus. mul � div, ������� ��������� �����. 
7) �������� ���������. ������������ ������������ ������ ������������ ���������� 1 -, 5-, 10-, 25-, 50-�������� � ���������� �����.
������������ ������ �� ����������� ������ ���������� ����� ������� �����������, �������� "������� � ��� ������������ �����?"
����� ��������� ������ ������� ��������� �������� ������ ����.
� ��� 23 ����������w� ����� .
� ��� 17 ����������w� ����� .
� ��� 14 ������������w� ����� .
� ��� 7 ������������������w� ����� .
� ��� 3 ����������������w� ����� .
����� ��������� ����� ����� ����� 573 ������.
���������������� ���������: ���� � ������������ ������ ���� ������, �������� ����� � ������������� ���������� �����. ��������,
" 14 �������������� �����" � "1 ������������ ������" (� �� "1 ������������ �����"). ����� ����, �������� ��������� � �������� �
������, �.�. 5 �������� 73 �����. � �� 573 �����. 
*/

#include <iostream>
#include "string"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	/*// 1. 
	int mil;
	cout << "������� ���������� ����: " << endl;
	cin >> mil;
	double killometers = mil * 1.609;
	cout << killometers;
	cout << endl;

	// 2.
	double val1, val2;
	cout << "������� 2 ������������� ��������: ";
	cin >> val1 >> val2;
	
	double min, max;
	min = 0;
	min = val1;
	if (val2 < min) min = val2;
	
	max = 0;
	max = val2;
	if (val1 > max) max = val1;
	
	cout << "����������: " << max << " ����������: " << min;

	double sum = val1 + val2;
	cout << "\n�����: " << sum << endl;
	double difference = max - min;
	cout << "��������: " << difference << endl;;
	double multi = val1 * val2;
	cout << "���������: " << multi << endl;
	double division = max / min;
	cout << "�������: " << division << endl;
	
	// 3.
	int x, y, z;
	cout << "������� 3 ����� �����: " << endl;
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
	cout << "������� ����� �����: " << endl;
	cin >> num;
	if (num % 2 == 0) cout << "\n����� " << num << " �������� ������ \n";
	else cout << "\n����� " << num << " �������� �������� \n";

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
			cout << "� �� ���� ������ �����!\n";
			break;
		}
	}
	
	// 6.

	string operation = " ";
	string plus = "+";
	string minus = "-";
	string mul = "*";
	string div = "/";
	cout << "������� ��������, ������� ������ ���������: " << endl;
	cin >> operation;
	double a, b;
	cout << "������� �����: " << endl;
	cin >> a >> b;

	if (operation == plus) cout << plus << "\t" << a << "\t" << b << "\nresult = " << a + b << endl;
	else if (operation == minus) cout << minus << "\t" << a << "\t" << b << "\nresult = " << a - b << endl;
	else if (operation == mul) cout << mul << "\t" << a << "\t" << b << "\nresult = " << a * b << endl;
	else if (operation == div) cout << div << "\t" << a << "\t" << b << "\nresult = " << a / b << endl;
	else cout << "��� ��� �� ��� ����!!\n"; */

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

	cent = cent_1 + 5 * cent_5 + 10 * cent_10 + 25 * cent_25 + 50 * cent_50; // ����� ������
	dollars = cent / 100; // ��������� ����� � ������� 
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