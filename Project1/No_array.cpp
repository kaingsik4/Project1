#include <iostream>
using namespace std;

int D, K; //D: 할머니가 넘어온 날, K: 호랑이에게 준 떡의 개수
int A, B;
int new_one, new_two;
int main() {
	cin >> D >> K; //입력의 첫 째 줄에 각각 D와 K를 입력받음.

	// 첫번 째날 받은 떡의개수 i 두번째 받은 떡의개수 j에 대해 모두 탐색함
	for (int i = 1; i <= K; ++i) {
		for (int j = 1; j <= K; ++j) {
			// 3일차 까지 진행됨.
			int one = i;
			int two = j;
			int three = one + two;
			// 여기까지.

			// 그리고 3일차 부터는 다음과 같은 규칙을 따를 것임.
			for (int k = 3; k < D; ++k) {
				new_one = two;
				new_two = three;
				one = new_one;
				two = new_two;
				three = one + two;
			}
			if (three == K) {
				cout << i << "\n" << j;
				goto Bye;
			}
		}
	}
Bye: 
	return 0;
}