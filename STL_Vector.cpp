#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    while (true) {
        int n;
        int sum = 0;
        double ave;

        cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
        cin >> n;

        if (n == 0)
            break;
        v.push_back(n);

        for (int i = 0; i < v.size(); ++i) {
            sum += v[i];
            cout << v[i] << ' ';
        }
        cout << endl;

        ave = (double)sum / (double)v.size();
        cout << "��� = " << ave << endl;
    }
    return 0;
}