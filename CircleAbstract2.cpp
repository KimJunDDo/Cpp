#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원" << endl; }
	friend Circle& operator++(Circle& op1);
	friend Circle operator++(Circle& op1, int x);
	friend Circle operator+(int x, Circle op1);
};

Circle& operator++(Circle& op1) {
	op1.radius++;
	return op1;
}
Circle operator++(Circle& op1, int x) {
	Circle tmp;
	tmp.radius = op1.radius++;
	return tmp;
}
Circle operator+(int x, Circle op1) {
	Circle tmp;
	tmp.radius = x + op1.radius;
	return tmp;
}

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();

	return 0;
}