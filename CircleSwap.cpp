#include <iostream>
using namespace std;

class Circle {
	int r;
public:
	Circle() {
		r = 1;
	}
	Circle(int r) {
		this->r = r;
	}
	~Circle() {}
	double getArea() { return 3.14 * r * r;  }
	int getRadius() { return r; }
	void setRadius(int r) { this->r = r; }
};

void swap(Circle& a, Circle& b) {
	Circle tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a;
	Circle b(10);

	cout << "a원의 반지름: " << a.getRadius() << " b원의 반지름: " << b.getRadius() << endl;

	swap(a, b);
	cout << "참조에 의한 호출로 객체 교환" << endl;
	cout << "a원의 반지름: " << a.getRadius() << " b원의 반지름: " << b.getRadius() << endl;

	return 0;
}