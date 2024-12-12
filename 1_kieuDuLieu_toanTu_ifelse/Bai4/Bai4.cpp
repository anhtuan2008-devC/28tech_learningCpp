#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	int a, b=0;
	while (b == 0) {
		cin >> a >> b;
	}
	cout << a + b << " " << a - b << " " << 1LL*a * b << " " << fixed << setprecision(2) << 1.0 * a / b;
}