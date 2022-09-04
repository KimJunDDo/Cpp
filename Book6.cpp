#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, page;
public:
	Book(string title, int price, int page) {
		this->title = title;
		this->price = price;
		this->page = page;
	}
	bool operator!() {
		if (this->price == 0)
			return true;
		else
			return false;
	}
};
int main() {
	Book book("벼룩시장", 0, 50);
	if (!book)
		cout << "공짜다" << endl;

	return 0;
}