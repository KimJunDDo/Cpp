#include <iostream>
#include <cstring>
using namespace std;

int esp(int n) {
	return n * 2000;
}
int ame(int n) {
	return n * 2300;
}
int cap(int n) {
	return n * 2500;
}

int main() {
	char coffee[100];
	int num, sum = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

	while (true) {
		if (sum >= 20000) {
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
		cout << "주문>> ";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			cout << esp(num) << "원입니다. 맛있게 드세요\n";
			sum += esp(num);
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			cout << ame(num) << "원입니다. 맛있게 드세요\n";
			sum += ame(num);
		}
		else if(strcmp(coffee, "카푸치노") == 0) {
			cout << cap(num) << "원입니다. 맛있게 드세요\n";
			sum += cap(num);
		}
	}
	return 0;
}