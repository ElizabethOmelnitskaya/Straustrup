#include <iostream>
#include <string>

using namespace std;

// пример вы€влени€ повтор€ющихс€ слов
void f1() {
	string previous = " ";
	string current;
	while (std::cin >> current) { // the cat cat jumped
								  // She she laughed He He He because what he did did not look very very good good
		if (previous == current)
			cout << "Word: " << current << '\n';
		previous = current;
	}
}

// пример вы€влени€ повтор€ющихс€ слов с определением места повтор€ющегос€ слова
void f2() {
	int number_of_words = 0;
	string previous = " ";
	string current;
	while (std::cin >> current) { // the cat cat jumped
								  // She she laughed He He He because what he did did not look very very good good
		++number_of_words; 
		if (previous == current)
			cout << "Word: " << current << " after " << number_of_words << " words. \n" ;
		previous = current;
	}
}

int main() {

	/*cout << "f1: " << endl;
	f1();*/

	cout << "f2: " << endl;
	f2();

	system("pause");
	return 0;
}