﻿#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(){}
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size);
	void show();
	void setName(int index, string name);
	~Family();
};
Family::Family(string name, int size) {
	p = new Person[size];
	this->name = name;
	this->size = size;
}
void Family::show() {
	cout << "Simpson가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << '\t';
}
void Family::setName(int index, string name) {
	p[index].setName(name);
}
Family::~Family() {
	delete [] p;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();

	delete simpson;
	return 0;
}