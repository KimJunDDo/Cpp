#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string tag[100];
	static string debug[100];
	static int size;
public:
	static void put(string t, string d) {
		tag[size] = t;
		debug[size] = d;
		size++;
	}
	static void print(string t = " ") {
		if (t == " ") {
			cout << "- - - - - 모든 Trace 정보를 출력합니다. - - - - -" << endl;
			for (int i = 0; i < size; i++) {
				cout << tag[i] << ":" << debug[i] << endl;
			}
		}
		else {
			cout << "- - - - - " << t << "태그의 Trace 정보를 출력합니다. - - - - - " << endl;
			for (int i = 0; i < size; i++) {
				if(tag[i] == t)
					cout << tag[i] << ":" << debug[i] << endl;
			}
		}
	}
};
string Trace::tag[100];
string Trace::debug[100];
int Trace::size = 0;

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();

	return 0;
}