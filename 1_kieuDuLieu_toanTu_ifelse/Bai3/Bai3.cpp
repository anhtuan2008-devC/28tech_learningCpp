#include <iostream>
using namespace std;

void main() {
	int a = 0, b, c;
	while (a == 0 or b == 0 or c == 0) {
		cin >> a >> b >> c;
	}
	long long rs = 1LL * a * (b + c) + b * (a + c);
	cout << rs; 
}