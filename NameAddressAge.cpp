#include <iostream>
using namespace std;

int main() {
    char name[100], address[100];
    int age;
    cout << "�̸���?";
    cin.getline(name, 100);
    cout << "�ּҴ�?";
    cin.getline(address, 100);
    cout << "���̴�?";
    cin >> age;
    cout << name << ", " << address << ", " << age << "��" << endl;

    return 0;
}