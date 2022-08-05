#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class SelectableRandom {
    int in;
public:
    SelectableRandom(int k);
    int next();
    int nextInRange(int a, int b);
    string OddEven();
};
SelectableRandom::SelectableRandom(int k) {
    in = k;
    srand((unsigned)time(0));
}
int SelectableRandom::next() {
    if (in == 1) {
        int n = rand();
        if (n % 2 != 0)
            return n;
        else
            return n + 1;
    }
    else if (in == 2) {
        int n = rand();
        if (n % 2 == 0)
            return n;
        else
            return n + 1;
    }
}
int SelectableRandom::nextInRange(int a, int b) {
    if (in == 1) {
        int n = rand() % (b - a + 1) + a;
        if (n % 2 != 0)
            return n;
        else
            return n + 1;
    }
    else if (in == 2) {
        int n = rand() % (b - a + 1) + a;
        if (n % 2 == 0)
            return n;
        else
            return n + 1;
    }
}
string SelectableRandom::OddEven() {
    if (in == 1)
        return "홀수";
    else if (in == 2)
        return "짝수";
}

int main() {
    int in;
    cout << "홀수는 1, 짝수는 2를 입력해주세요. >> ";
    cin >> in;
    SelectableRandom r(in);
    cout << "\n-- 0에서 " << RAND_MAX << "까지의 랜덤 " << r.OddEven() << " 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << "\n\n\n홀수는 1, 짝수는 2를 입력해주세요. >> ";
    cin >> in;
    SelectableRandom r2(in);
    cout << "\n-- 2에서 " << "10 까지의 랜덤 " << r2.OddEven() << " 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r2.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}