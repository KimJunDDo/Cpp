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
	Book operator+=(int price) {
		this->price += price;
		return *this;
	}
	Book operator-=(int price) {
		this->price -= price;
		return *this;
	}
};

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();

	return 0;
}