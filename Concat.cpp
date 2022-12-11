#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
    T* p = new T[sizea + sizeb];
    for (int i = 0; i < sizea; ++i)
        p[i] = a[i];
    for (int i = sizea; i < sizea + sizeb; ++i)
        p[i] = b[i - sizeb];
    return p;
}

int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 5,6,7,8,9 };
    int* p = concat(a, 5, b, 5);

    for (int i = 0; i < 10; ++i)
        cout << p[i] << ' ';
    cout << endl;
    delete[] p;

    char c[] = { 'a','b','c','d','e' };
    char d[] = { 'k','i','m','n','u' };
    char* q = concat(c, 5, d, 5);

    for (int i = 0; i < 10; ++i)
        cout << q[i] << ' ';
    cout << endl;
    delete[] q;

    return 0;
}