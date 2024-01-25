#ifndef _Cipher_Chesar_CLASS_H_
#define _Cipher_Chesar_CLASS_H_

class Chesar {
private:
	char AlpE[52] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' ,'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char AlpEn[52] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ,'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	char AlpECode[52];
	char AlpEnCode[52];

	char AlpSymbols[33] = {'1','2','3','4','5','6','7','8','9','0','.',',','<','>','?','!',':',';','@','#','$','%','^','&','*','(',')','-','_','=','+','|', ' '};

	int code;
	char text[999];
	char temp[999];

public:
	void InputData();
	void Coding();
	void Decoding();
	void PrintData();
};

#endif