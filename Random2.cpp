#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};
int Random::nextInt(int min, int max) {
	int r = rand() % (max - min + 1) + 1;
	return r;
}
char Random::nextAlphabet() {
	char c = rand() % 2;
	if (c == 0) {
		c = (rand() % 26) + 97;
		return c;
	}
	else {
		c = (rand() % 26) + 65;
		return c;
	}
}
double Random::nextDouble() {
	double d = rand() / (double)(RAND_MAX + 1);
	return d;
}

int main() {
	Random::seed();
	int i;
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (i = 0; i < 10; i++)
		cout << Random::nextInt(1, 10) << ' ';
	cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (i = 0; i < 10; i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (i = 0; i < 5; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;
	for (i = 0; i < 5; i++)
		cout << Random::nextDouble() << ' ';
	cout << endl;

	return 0;
}