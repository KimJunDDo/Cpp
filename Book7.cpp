#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, page;
public:
	Book(string title = " ", int price = 0, int page = 0) {
		this->title = title;
		this->price = price;
		this->page = page;
	}
	friend bool operator<(Book op1, Book op2);
	string getTitle() {
		return this->title;
	}
};

bool operator<(Book op1, Book op2) {
	if (op1.title < op2.title)
		return true;
	else
		return false;
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;

	return 0;
}