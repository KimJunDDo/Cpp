#include <iostream>
#define PI 3.141592
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
inline void Circle::setRadius(int radius) {
	this->radius = radius;
}
inline double Circle::getArea() {
	return PI * radius * radius;
}

int main() {
	Circle circleArray[3];
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int radius;
		cin >> radius;
		circleArray[i].setRadius(radius);
		if (circleArray[i].getArea() > 100)
			sum++;
	}
	cout << "면적이 100보다 큰 원은 " << sum << "개 입니다";

	return 0;
}