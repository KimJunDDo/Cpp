#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	//복사 생성자
	//1. 객체로 초기화하여 객체가 생성될 때
	//2. 값에 의한 호출로 객체가 전달될 때
	//3. 함수가 객체를 리턴할 때
	//묵시적 복사 생성에 의해 복사 생성자가 자동으로 호출된다.
	//디폴트 복사 생성자는 얕은 복사이므로 동적 메모리를 할당받은 멤버가 있으면 에러가 난다.
	/*Dept(const Dept& dept) {
		this->size = dept.size;
		this->scores = new int[dept.size];
	}*/
	~Dept() {
		if(scores)
			delete[] scores;
	}
	int getSize() {
		return size;
	}
	void read() {
		cout << size << "개 점수 입력 >> ";
		for (int i = 0; i < size; i++) {
			int n;
			cin >> n;
			scores[i] = n;
		}
	}
	bool isOver60(int index) {
		if (scores[index] > 60)
			return true;
		else
			return false;
	}
};

int countPass(Dept& dept) { // 객체를 인자로 넘길 때 참조 객체 인자로 넘겨서 복사 생성자가 필요없다.
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))
			count++;
	}
	return count;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";

	return 0;
}