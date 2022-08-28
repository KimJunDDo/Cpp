#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack() {
	tos = -1;
}
MyIntStack::MyIntStack(int size) {
	tos = -1;
	this->size = size;
	p = new int[size];
}
MyIntStack::MyIntStack(const MyIntStack& s) {
	this->size = s.size;
	this->tos = s.tos;
	this->p = new int[s.size];
}
MyIntStack::~MyIntStack() {
	if(p) //조건문을 사용하지 않으면, 반환된 메모리를 다시 반환하기 때문에 에러가 일어남.
		delete[] p;
}
bool MyIntStack::push(int n) {
	if (tos == (size - 1))
		return false;
	else {
		tos++;
		p[tos] = n;
		return true;
	}
}
bool MyIntStack::pop(int& n) {
	if (tos != -1) {
		n = p[tos];
		tos--;
		return true;
	}
	else
		return false;
}
int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;

	return 0;
}