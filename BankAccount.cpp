#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	string name;
	int id, money;
	Account(string name, int id, int money);
	void deposit(int m);
	int withdraw(int m);
	string getOwner();
	int inquiry();
};
Account::Account(string a, int i, int m) {
	name = a;
	id = i;
	money = m;
}
void Account::deposit(int m) {
	money += m;
}
int Account::withdraw(int m) {
	money -= m;
	return money;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return money;
}

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

	return 0;
}