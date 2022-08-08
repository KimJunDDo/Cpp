#include <iostream>
using namespace std;

class Add {
private:
	int a;
	int b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int claculate() {
		return a + b;
	}
};

class Sub {
private:
	int a;
	int b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int claculate() {
		return a - b;
	}
};

class Mul {
private:
	int a;
	int b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int claculate() {
		return a * b;
	}
};

class Div {
private:
	int a;
	int b;
public:
	void setValue(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int claculate() {
		return a / b;
	}
};

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	char sign;
	int x, y;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> sign;
		if (sign == '+') {
			a.setValue(x, y);
			cout << a.claculate() << endl;
		}
		else if (sign == '-') {
			s.setValue(x, y);
			cout << s.claculate() << endl;
		}
		else if (sign == '*') {
			m.setValue(x, y);
			cout << m.claculate() << endl;
		}
		else if (sign == '/') {
			d.setValue(x, y);
			cout << d.claculate() << endl;
		}
		else {
			cout << "입력을 잘못하셨습니다.";
			break;
		}
	}

	return 0;
}