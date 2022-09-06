#include <iostream>
using namespace std;

class Matrix {
	int m[4];
public:
	Matrix(int m1 = 0, int m2 = 0, int m3 = 0, int m4 = 0) {
		m[0] = m1;
		m[1] = m2;
		m[2] = m3;
		m[3] = m4;
	}
	void show() {
		cout << "Matrix = { " << m[0] << " " << m[1] << " " << m[2] << " " << m[3] << " }" << endl;
	}
	int operator>>(int x[]) {
		for (int i = 0; i < 4; i++) {
			x[i] = this->m[i];
		}
		return *x;
	}
	Matrix& operator<<(int y[]) {
		for (int i = 0; i < 4; i++) {
			this->m[i] = y[i];
		}
		return *this;
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();

	return 0;
}