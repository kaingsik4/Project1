#include <iostream>
using namespace std;

int D, K; //D: �ҸӴϰ� �Ѿ�� ��, K: ȣ���̿��� �� ���� ����
int A, B;
int new_one, new_two;
int main() {
	cin >> D >> K; //�Է��� ù ° �ٿ� ���� D�� K�� �Է¹���.

	// ù�� °�� ���� ���ǰ��� i �ι�° ���� ���ǰ��� j�� ���� ��� Ž����
	for (int i = 1; i <= K; ++i) {
		for (int j = 1; j <= K; ++j) {
			// 3���� ���� �����.
			int one = i;
			int two = j;
			int three = one + two;
			// �������.

			// �׸��� 3���� ���ʹ� ������ ���� ��Ģ�� ���� ����.
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