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
	void show() {
		cout << title << " " << price << "원 " << page << " 페이지" << endl;
	}
	bool operator==(string title) {
		if (this->title == title)
			return true;
		else
			return false;
	}
	bool operator==(int price) {
		if (this->price == price)
			return true;
		else
			return false;
	}
	bool operator==(Book op2) {
		if (this->title == op2.title && this->price == price && this->page == page)
			return true;
		else
			return false;
	}
};

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000)
		cout << "정가 30000원" << endl;
	if (a == "명품 C++")
		cout << "명품 C++ 입니다." << endl;
	if (a == b)
		cout << "두 책이 같은 책입니다." << endl;

	return 0;
}