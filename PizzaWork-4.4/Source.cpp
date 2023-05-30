#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	string mainString, entry;
	cout << "Введите основную строчку: ";
	getline(cin, mainString); 

	cout << "Введите входящую строчку: ";
	getline(cin, entry);  
	int point = mainString.find(entry);
	int count = 0;
	while (point != string::npos) {
		count++;
		point = mainString.find(entry, point + 1);
	}

	cout << "Кол-во вхождений: " << count << endl;

	return 0;
}