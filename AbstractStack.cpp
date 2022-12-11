#include <iostream>
using namespace std;

class AbstractStack {
public:
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int size() = 0;
};

class IntStack : public AbstractStack {
    int* p;
    int tos;
    int stackSize;
public:
    IntStack(int size) { this->stackSize = size; p = new int[stackSize]; tos = -1; }
    ~IntStack() { delete[] p; }
    bool push(int n);
    bool pop(int& n);
    int size();
};
bool IntStack::push(int n) {
    if (tos == (stackSize - 1)) return false;
    ++tos;
    p[tos] = n;
    return true;
}
bool IntStack::pop(int& n) {
    if (tos == (-1)) return false;
    n = p[tos];
    --tos;
    return true;
}
int IntStack::size() {
    return tos + 1;
}

int main() {
    IntStack a(5);
    for (int i = 0; i < 10; i++) {
        if (a.push(i)) cout << "push 성공" << endl;
        else cout << "스택 full" << endl;
    }
    cout << "현재 들어있는 정수 개수" << a.size() << endl;
    int n;
    for (int i = 0; i < 10; i++) {
        if (a.pop(n)) cout << "pop 성공 " << n << endl;
        else cout << "스택 empty" << endl;
    }

    return 0;
}
