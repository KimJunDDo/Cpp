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
	friend Book operator+=(Book& a, int price);
	friend Book operator-=(Book& a, int price);
};

Book operator+=(Book& a, int price) {
	a.price += price;
	return a;
}

Book operator-=(Book& a, int price) {
	a.price -= price;
	return a;
}

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();

	return 0;
}