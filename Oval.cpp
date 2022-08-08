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
		cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
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
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

	return 0;
}