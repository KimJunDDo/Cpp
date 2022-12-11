#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T x[], T y[], int n) {
    for (int i = 0; i < n; ++i) {
        if (x[i] != y[i])
            return false;
    }
    return true;
}

int main() {
    int x[] = { 1,10,100,5,4 };
    int y[] = { 1,10,100,5,4 };

    char a[] = { 'a','b','c','d','e' };
    char b[] = { 'f','g','h','i','j' };

    if (equalArrays(x, y, 5))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;;
    if (equalArrays(a, b, 5))
        cout << "문자 배열 같다" << endl;
    else
        cout << "문자 배열 다르다" << endl;

    return 0;
}