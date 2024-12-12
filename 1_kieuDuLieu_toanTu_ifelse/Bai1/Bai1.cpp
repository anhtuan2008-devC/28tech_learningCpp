#include <iostream>
using namespace std;

void main() {
	long long a, b = 0;
	while (b == 0) {
		cin >> a >> b;
	}
	long long phanNguyen = a / b;
	long long phanDu = a % b;
	cout << phanNguyen << " " << phanDu << endl;
}