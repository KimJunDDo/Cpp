#include <iostream>
using namespace std;

// Ram.h
//#ifndef RAM_H
//#define RAM_H

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);
};
//#endif

// Ram.cpp
//#include "Ram.h"

Ram::Ram() {
	size = 100 * 1024;
	for (int i = 0; i < size; i++)
		mem[i] = 0;
}
Ram::~Ram() {
	cout << "메모리 제거됨";
}
inline char Ram::read(int address) {
	return mem[address];
}
inline void Ram::write(int address, char value) {
	mem[address] = value;
}

//main.cpp
//#include "Ram.h"

int main() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;

	return 0;
}