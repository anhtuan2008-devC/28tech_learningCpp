#include <iostream>
using namespace std;

void main() {
	int n = -1;
	long long sum = 0;
	while (n <= 0) {
		cin >> n;
	}
	for (int i = 1; i <= n; i++) {
		sum += 1LL*i;
	}
	cout << sum;
}