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
	cout << "원의 개수 >> ";
	int n;
	cin >> n;

	if (n <= 0)
		return 0;

	Circle *pArray = new Circle[n];
	int sum = 0;

	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int radius;
		cin >> radius;
		(pArray+i) -> setRadius(radius);
		if ((pArray+i) -> getArea() > 100)
			sum++;
	}
	cout << "면적이 100보다 큰 원은 " << sum << "개 입니다";

	delete[] pArray;
}