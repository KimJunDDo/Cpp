#include <iostream>
using namespace std;
int sum(); // 함수 원형 선언

//main 함수보다 위에 함수를 정의하면 3번 줄의 함수 원형을 선언해주지 않고 사용이 가능함.
int sum(int a, int b) { // 함수 선언 
	int sum = 0;
	for (int k = a; k <= b; k++)
		sum += k;
	return sum;
}

int main() {
	int n;
	cout << "끝 수를 입력하세요>>";
	cin >> n;

	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.";
	return 0;
}

/* main 함수보다 밑에 함수를 정의하면 3번 줄처럼 함수 원형을 선언해줘야 함.
int sum(int a, int b) {
	int sum = 0;
	for (int k = a; k <= b; k++)
		sum += k;
	return sum;
}*/