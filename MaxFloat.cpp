#include <iostream>
using namespace std;

int main() {
	double num[5];
	int i;
	double max = 0;
	cout << "5���� �Ǽ��� �Է��϶�>>";
	for(i = 0; i < 5; i++) {
		cin >> num[i];
	}
	for (i = 0; i < 5; i++) {
		if (num[i] > max)
			max = num[i];
	}
	cout << "���� ū �� = " << max;
	return 0;
}