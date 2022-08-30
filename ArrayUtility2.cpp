#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* n = new int[size * 2];
		for (int i = 0; i < size; i++) {
			n[i] = s1[i];
			n[i + size] = s2[i];
		}  return n;
	}
	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int i, j, cnt = 0;
		for (i = 0; i < size; i++) {
			for (j = 0; j < size; j++) {
				if (s1[i] == s2[j]){
					s1[i] = NULL;
					break;
				}
			}
		}
		for (i = 0; i < size; i++) {
			if (s1[i] != NULL) {
				retSize++;
			}
		}
		if (retSize == 0)
			return NULL;

		int* m = new int[retSize];
		for (i = 0; i < size; i++) {
			if (s1[i] != NULL) {
				m[cnt] = s1[i];
				cnt++;
			}
		}
		return m;
	}
};

int main() {
	int x[5], y[5], * z;
	int retSize = 0;
	cout << "정수를 5 개 입력하라 . 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++)
		cin >> x[i];
	cout << "정수를 5 개 입력하라 . 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++)
		cin >> y[i];
	z = ArrayUtility::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다." << endl;
	for (int i = 0; i < 10; i++)
		cout << z[i] << ' ';
	cout << endl;

	z = ArrayUtility::remove(x, y, 5, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++)
		cout << z[i] << ' ';
	cout << endl;

	return 0;
}