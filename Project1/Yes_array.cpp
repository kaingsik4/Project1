#include <iostream>
using namespace std;
#define Max_Day 30+1

int D, K;
int Food[Max_Day] = {0};

int main() {
	cin >> D >> K;
	for (int i = 1; i < K; ++i) {
		for (int j = i; j < K; ++j) {
			Food[1] = i;
			Food[2] = j;
			Food[3] = Food[1] + Food[2];
			for (int k = 4; k <= D; ++k) {
				Food[k] = Food[k - 1] + Food[k - 2];
			}
			if (Food[D] == K)
			{
				cout << i << "\n" << j;
				goto Bye;
			}
		}
	}
Bye:
	return 0;
}