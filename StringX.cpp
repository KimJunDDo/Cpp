#include <iostream>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만)." << endl;

	char string[100];
	cin.getline(string, 100, '\n');
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (string[i] == 'x') {
			cnt++;
		}
	}
	cout << "x의 개수는 " << cnt;
	return 0;
}