#include <iostream>
using namespace std;

class Stack {
	int x[10];
	int tos;
public:
	Stack() {
		tos = -1;
	}
	Stack& operator<<(int x) {
		tos++;
		this->x[tos] = x;
		return *this;
	}
	Stack& operator>>(int& x) {
		x = this->x[tos];
		tos--;
		return *this;
	}
	bool operator!() {
		if (tos == -1)
			return true;
		return false;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}