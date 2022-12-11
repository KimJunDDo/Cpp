#include <iostream>
using namespace std;

class BaseArray {
private:
    int capacity;
    int* mem;
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyQueue : protected BaseArray {
    int front;
    int rear;
public:
    MyQueue(int capacity) : BaseArray(capacity) { front = rear = 0; }
    void enqueue(int n) {
        rear = (rear + 1) % getCapacity();
        put(rear, n);
    }
    int dequeue() {
        front = (front + 1) % getCapacity();
        return get(front);
    }
    int capacity() { return getCapacity(); }
    int length() { return (rear - front) % getCapacity(); }
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' ';
    }
    cout << endl << "ť�� ����ũ�� : " << mQ.length() << endl;

    return 0;
}