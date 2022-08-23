#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;
	else
		big = (a > b) ? a : b;
		return false;
}

int main() {
	int a, b, big;
	cout << "두 개의 정수를 입력하시오 >> ";
	cin >> a >> b;

	if (bigger(a, b, big))
		cout << "두 정수는 같습니다" << endl;
	else
		cout << "두 정수 중 큰 수는 " << big << "입니다." << endl;

	return 0;
}