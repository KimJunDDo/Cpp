#include <iostream>
using namespace std;

class Oval {
private:
	int width;
	int height;
public:
	Oval() {
		width = 1;
		height = 1;
	}
	Oval(int w, int h) {
		this->width = w;
		this->height = h;
	}
	~Oval() {
		cout << "Oval 소멸, width = " << width << ", height = " << height << endl;
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	void set(int w, int h) {
		this->width = w;
		this->height = h;
	}
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
};
int main() {
	Oval o(3, 4);
	o.show();
	o.set(6, 8);
	cout << "너비: " << o.getWidth() << ", 높이: " << o.getHeight() << endl;

	return 0;
}