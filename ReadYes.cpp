#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char string[100];
	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(string, 100, '\n');

		if (strcmp(string, "yes") == 0)
			cout << "�����մϴ�" << "\n";
			break;
	}
}