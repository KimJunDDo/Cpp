#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int num = 0;
	int alpha[27] = {0};
	char str[10000];

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(str, 10000, ';');

	for (int i = 0; i < strlen(str); i++) {
		if (isalpha(str[i]) != 0) {
			tolower(str[i]);
			++alpha[str[i] - 97];
			++num;
		}
	}
	cout << "총 알파벳 수 " << num << "\n";
	for (int i = 0; i < 26; i++) {
		char ascii = i + 'a';
		cout << ascii << "(" << alpha[i] << ")";
		for (int j = 0; j < 4 - alpha[i] / 10; j++)
			cout << " ";
		cout << ":  ";
		for (int j = 1; j <= alpha[i]; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}