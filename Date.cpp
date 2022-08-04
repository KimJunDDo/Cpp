﻿#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year, month, day;
	Date(int year, int month, int day);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
Date::Date(string str) {
	year = stoi(str.substr(0, 4));
	month = stoi(str.substr(5, 7));
	day = stoi(str.substr(7, 9));
}
void Date::show() {
	cout << year << "년" << month << "월" << day << "일\n";
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}