#include <iostream>
#include <string>
#define PI 3.14;
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}
	double getArea() {
		return radius * radius * PI;
	}
	string getName() {
		return name;
	}
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size) {
		this->size = size;
		p = new Circle[size];
		string name;
		int radius;
		for (int i = 0; i < size; i++) {
			cout << "원 " << i+1 << "의 이름과 반지름 >> ";
			cin >> name >> radius;
			p[i].setCircle(name, radius);
		}
	}
	~CircleManager() {
		delete[] p;
	}
	void searchByName() {
		cout << "검색하고자 하는 원의 이름 >> ";
		string name;
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (p[i].getName() == name)
				cout << name << "의 면적은 " << p[i].getArea() << endl;
		}
	}
	void searchByArea() {
		cout << "최소 면적을 정수로 입력하세요 >> ";
		int area;
		cin >> area;
		cout << area << "보다 큰 원을 검색합니다." << endl;
		for (int i = 0; i < size; i++) {
			if (p[i].getArea() > area)
				cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
};

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager circle(n);
	circle.searchByName();
	circle.searchByArea();

	return 0;
}