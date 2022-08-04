#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = stoi("1234");
	int b = stoi("3.141592");
	int c = stoi("135 with happy");
  //int d = stoi("happy with 246");
	int e = stoi("135 with happy with 246");

	cout << a << endl; // 결과: 1234
	cout << b << endl; // 결과: 3
	cout << c << endl; // 결과: 135 (숫자 뒤에 문자는 다 사라짐)
  //cout << d << endl; // 에러: 문자가 숫자보다 앞에 있으면 안 됨
	cout << e << endl; // 결과: 135 (문자가 시작되면 뒤에 있는 숫자 다 사라짐)

	return 0;
}