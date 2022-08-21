#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string str) {
		this->str = str;
		cout << str << endl;
	}
	void put(string str) {
		this->str += str;
		cout << str;
	}
	void putc(char c) {
		this->str += c;
		cout << c;
	}
	void print() {
		int num = 0;
		int alpha[27] = { 0 };
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i]) != 0) {
				tolower(str[i]);
				alpha[str[i] - 97]++;
				num++;
			}
		}

		cout << endl << endl << "총 알파벳 수 " << num << endl << endl;
		for (int i = 0; i < 26; i++) {
			char ascii = i + 'a';
			cout << ascii << "(" << alpha[i] << ")";
			for (int j = 0; j < 4 - alpha[i] / 10; j++)
				cout << " ";
			cout << ":  ";
			for (int j = 1; j <= alpha[i]; j++)
				cout << "*";
			cout << endl;
		}
	}
};

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presely");
	elvisHisto.print();

	return 0;
}