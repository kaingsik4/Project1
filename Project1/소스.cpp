#include <iostream>
using namespace std;
#include <algorithm>

// ������� Ű�� �޾ƿ��� People����
// �ϰ� �����̰� �� Seven_People����
int People[9] = { 0 };
int Seven_People[7] = { 0 };

void Print_Seven() {
	for (int i = 0; i < 7; ++i) {
		cout << Seven_People[i] << " ";
	}
	cout << "\n";
}

int main()
{
	//�Է��� �޾ƿ�
	for (int i = 0; i < 9; ++i) {
		cin >> People[i];
	}
	//7������
	for (int a = 0; a < 9; ++a) {

		for (int b = a; b < 9; ++b) {

			if (b == a) { continue; }

			for (int c = b; c < 9; ++c) {

				if (c == b) { continue; }

				for (int d = c; d < 9; ++d) {

					if (d == c) { continue; }

					for (int e = d; e < 9; ++e) {

						if (e == d) { continue; }

						for (int f = e; f < 9; ++f) {

							if (f == e) { continue; }

							for (int g = f; g < 9; ++g) {

								if (g == f) { continue; }

								cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << "\n";
								if ((People[a] + People[b] + People[c] + People[d] + People[e] + People[f] + People[g]) == 100) {
									Seven_People[0] = People[a];
									Seven_People[1] = People[b];
									Seven_People[2] = People[c];
									Seven_People[3] = People[d];
									Seven_People[4] = People[e];
									Seven_People[5] = People[f];
									Seven_People[6] = People[g];
									goto Exit;
								}
							}
						}
					}
				}
			}
		}
	}
Exit:
	sort(Seven_People, Seven_People+7);
	Print_Seven();
	return 0;
}
