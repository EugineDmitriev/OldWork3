#include <iostream>
#include "Cipher_Chesar.h"

using namespace std;

void Chesar::InputData() {
	cout << "‚ведите текст" << endl;
	cin.getline(text, 999);

	cout << "‘мещение" << endl;
	cin >> code;

	if (code < 0) {
		code = code * -1;
	}

	if (code > 26) {
		while (code > 26) {
			code = code - 26;
		}
	}

	for (int i = 0; i < 52; i++) {
		AlpECode[i] = AlpE[i + code];
		AlpEnCode[i] = AlpEn[i + code];
	}
};

void Chesar::Coding() {
	for (int i = 0; i < strlen(text); i++) {
		for (int k = 0; k < 33; k++) {
			if (text[i] == AlpE[k]) {
				temp[i] = AlpECode[k];
			}
			if (text[i] == AlpEn[k]) {
				temp[i] = AlpEnCode[k];
			}
			if (text[i] == AlpSymbols[k]) {
				temp[i] = text[i];
			}
		}
	}
};

void Chesar::Decoding() {
	for (int i = 0; i < strlen(text); i++) {
		for (int k = 0; k < 33; k++) {
			if (text[i] == AlpECode[k]) {
				temp[i] = AlpE[k];
			}
			if (text[i] == AlpEnCode[k]) {
				temp[i] = AlpEn[k];
			}
			if (text[i] == AlpSymbols[k]) {
				temp[i] = text[i];
			}
		}
	}
};


void Chesar::PrintData() {
	for (int i = 0; i < strlen(text); i++) {
		cout << temp[i];
	}
	cout << endl;
};