#include <iostream>
#include <string>
using namespace std;

class Book {
	string name;
	int price;
public:
	Book() {
		name = " ";
		price = 0;
	}
	Book(string name, int price) {
		this->name = name;
		this->price = price;
	}
	~Book() { };
	void set(string name, int price) {
		this->name = name;
		this->price = price;
	}
	void show() {
		cout << name << ' ' << price << "원" << endl;
	}
};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

	return 0;
}