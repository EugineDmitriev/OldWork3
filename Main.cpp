#include<iostream>
#include "Cipher_Chesar.h"

using namespace std;

int main() {
	setlocale(0, "RUS");

	Chesar chesar;
	chesar.InputData();

	int chose;

	cout << "1 - Кодировать, 2 - Декодировать" << endl;
	cin >> chose;

	switch (chose) {
	case 1:
		chesar.Coding();
		chesar.PrintData();
		break;

	case 2:
		chesar.Decoding();
		chesar.PrintData();
		break;

	default:
		cout << "Ошибка" << endl;
		break;
	}
	
	return 0;
	system("pause");
}