#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

int main() {
    cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << "\n>>";
    char name[100], longname[100];
    int len = 0;

    for (int i = 0; i < 5; ++i) {
        cin.getline(name, 100, ';');
        cout << i + 1 << " : " << name << '\n';
        if (strlen(name) > len) {
            len = strlen(name);
            strcpy(longname, name);
        }
    }
    cout << "가장 긴 이름은 " << longname << endl;

    return 0;
}