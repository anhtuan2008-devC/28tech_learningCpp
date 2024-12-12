#include <iostream>
using namespace std;

void main() {
	int x = -1;
	while (x < 0) {
		cin >> x;
	}
	long long rs = (long long)x * x * x + 3 * x * x + x + 1;
	cout << rs << endl;
}