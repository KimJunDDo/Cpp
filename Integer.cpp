#include <iostream>
#include <string>
using namespace std;

class Integer {
    int n;
    int True = 1;
    int False = 0;
public:
    Integer(int n);
    Integer(string n);
    void set(int n);
    int get();
    int isEven();
};
inline Integer::Integer(int n) {
    this->n = n;
}
inline Integer::Integer(string n) {
    this->n = stoi(n);
}
inline void Integer::set(int n) {
    this->n = n;
}
inline int Integer::get() {
    return n;
}
inline int Integer::isEven() {
    if (n % 2 == 0)
        return True;
    else
        return False;
}

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';
    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();

    return 0;
}