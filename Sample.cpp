#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};
inline void Sample::read() {
	for (int i = 0; i < size; i++) 
		cin >> p[i];
}
inline void Sample::write() {
	for (int i = 0; i < size; i++)
		cout << p[i] << ' ';
	cout << endl;
}
inline int Sample::big() {
	int big = p[0];
	for (int i = 0; i < size; i++) {
		if (big <= p[i])
			big = p[i];
	}
	return big;
}
inline Sample::~Sample() {
	delete[] p;
}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}