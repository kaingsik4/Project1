#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int K = -1;
int arr[13] = { 0 };
int Lotto[6] = { 0 };

int main() {
	while (K != 0)
	{
		cin >> K;
		for (int i = 0; i < K; ++i) {
			cin >> arr[i];
		}
		for (int a = 0; a < K; ++a) {
			for (int b = a; b < K; ++b) {
				if (b == a) { continue; }
				for (int c = b; c < K; ++c) {
					if (c == b) { continue; }
					for (int d = c; d < K; ++d) {
						if (d == c) { continue; }
						for (int e = d; e < K; ++e) {
							if (e == d) { continue; }
							for (int f = e; f < K; ++f) {
								if (f == e) { continue; }
								Lotto[0] = arr[a];
								Lotto[1] = arr[b];
								Lotto[2] = arr[c];
								Lotto[3] = arr[d];
								Lotto[4] = arr[e];
								Lotto[5] = arr[f];
								
								sort(Lotto, Lotto + 5);

								for (int i = 0; i < 6; ++i) {
									cout << Lotto[i] << " ";
								}
								cout << "\n";
							}
						}
					}
				}
			}
		}
		cout << "\n";
	}
}
