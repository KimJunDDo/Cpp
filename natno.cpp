#include <iostream>
#include <cstring>
//#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int sum_(int a, int b) {
    return a + b;
    }
int sub_(int a, int b) {
    return a - b;
}
int mul_(int a, int b) {
    return a * b;
}
int div_(int a, int b) {
    return a / b;
}
int rem_(int a, int b) {
    return a % b;
}

int main() {
    char str[100];
    char* ptr;
    int a, b;
    bool True = true;

    while (true) {
        cout << "? ";
        cin.getline(str, 100, '\n');

        a = atoi(strtok(str, " "));
        ptr = strtok(NULL, " ");
        b = atoi(strtok(NULL, " "));

        switch (*ptr) {
        case '+':
            cout << a << " + " << b << " = " << sum_(a, b) << "\n";
            break;
        case '-':
            cout << a << " - " << b << " = " << sub_(a, b) << "\n";
            break;
        case '*':
            cout << a << " * " << b << " = " << mul_(a, b) << "\n";
            break;
        case '/':
            cout << a << " / " << b << " = " << div_(a, b) << "\n";
            break;
        case '%':
            cout << a << " % " << b << " = " << rem_(a, b) << "\n";
            break;
        default:
            cout << "식을 다시 확인해주세요.\n";
            True = false;
            break;
        }
        if (True == false)
            break;
    }
    return 0;
}