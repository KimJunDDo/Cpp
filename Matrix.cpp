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
	Matrix operator+(Matrix op2) {
		Matrix tmp;
		for (int i = 0; i < 4; i++) {
			tmp.m[i] = this->m[i] + op2.m[i];
		}
		return tmp;
	}
	Matrix& operator+=(Matrix& op2) {
		for (int i = 0; i < 4; i++) {
			this->m[i] += op2.m[i];
		}
		return *this;
	}
	bool operator ==(Matrix op2) {
		for (int i = 0; i < 4; i++) {
			if (this->m[i] != op2.m[i])
				return false;
		}
		return true;
	}
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;

	return 0;
}