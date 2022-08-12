#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0));
	string str;
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;

	while (true) {
		cout << ">>";
		getline(cin, str, '\n');
		if (str == "exit")
			break;
		int index = rand() % str.length();
		char c = rand() % (122 - 97 + 1) + 97;
		str[index] = c;
		cout << str << endl;
	}

	return 0;
}