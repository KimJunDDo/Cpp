#include <iostream>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;

	char string[100];
	cin.getline(string, 100, '\n');
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (string[i] == 'x') {
			cnt++;
		}
	}
	cout << "x�� ������ " << cnt;
	return 0;
}