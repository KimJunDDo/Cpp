#include <iostream>
using namespace std;

int main() {
	double num[5];
	int i;
	double max = 0;
	cout << "5개의 실수를 입력하라>>";
	for(i = 0; i < 5; i++) {
		cin >> num[i];
	}
	for (i = 0; i < 5; i++) {
		if (num[i] > max)
			max = num[i];
	}
	cout << "제일 큰 수 = " << max;
	return 0;
}