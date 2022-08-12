#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	int sum = 0;
	int index = 0;

	cout << "문자열 입력>> ";
	getline(cin, text, '\n');

	for (int i = 0; i < text.length(); i++) {
		if (text.at(i) == 'a')
			sum++;
	}
	cout << "문자 a는 " << sum << "개 있습니다." << endl;
	cout << "문자 a의 인덱스 위치: ";

	for (int i = index; i < text.length(); i++) {
		int n = text.find('a', index);
		if (n > index)
			index = n + 1;
		else if (n == -1)
			break;
		cout << n << ' ';
	}

	return 0;
}