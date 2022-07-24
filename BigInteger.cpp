#include <iostream>
using namespace std;

int main() {
	int first, second;
	cout << "두 수를 입력하라>>";
	cin >> first >> second;

	if (first > second) {
		int big = first;
		cout << "큰 수 = " << big;
	}
	else if (first < second) {
		int big = second;
		cout << "큰 수 = " << big;
	}
	else
		cout << "큰 수 = " << first;

	return 0;
}