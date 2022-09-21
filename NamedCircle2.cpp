#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() { }
	NamedCircle(int r, string name) : Circle(r) {
		this->name = name;
	}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name;
	}
};

int main() {
	NamedCircle pizza[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	int r;
	string n;

	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		cin >> r >> n;
		pizza[i].setRadius(r);
		pizza[i].setName(n);
	}

	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			n = pizza[i].getName();
		}
	}
	cout << "가장 면적이 큰 피자는 " << n << "입니다";

	return 0;
}