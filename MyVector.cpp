#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 10, int val = 0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++) {
			mem[i] = val;
			cout << mem[i] << ' ';
		}
		cout << endl;
		cout << val << "이/가 " << n << "개 있습니다." << endl;
	}
	~MyVector() { delete[] mem; }
};

int main() {
	MyVector x;
	MyVector y(20, 8);

	return 0;
}