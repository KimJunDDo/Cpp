#include <iostream>
using namespace std;

int main() {
	int first, second;
	cout << "�� ���� �Է��϶�>>";
	cin >> first >> second;

	if (first > second) {
		int big = first;
		cout << "ū �� = " << big;
	}
	else if (first < second) {
		int big = second;
		cout << "ū �� = " << big;
	}
	else
		cout << "ū �� = " << first;

	return 0;
}