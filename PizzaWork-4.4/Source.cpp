#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	string mainString, entry;
	cout << "������� �������� �������: ";
	getline(cin, mainString); 

	cout << "������� �������� �������: ";
	getline(cin, entry);  
	int point = mainString.find(entry);
	int count = 0;
	while (point != string::npos) {
		count++;
		point = mainString.find(entry, point + 1);
	}

	cout << "���-�� ���������: " << count << endl;

	return 0;
}