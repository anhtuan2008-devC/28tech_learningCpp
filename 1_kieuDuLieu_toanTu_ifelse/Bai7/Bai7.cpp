#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	int n = 0;
	while (n <= 0) {
		cin >> n;
	}
	double rs = (1.0*n * 9 / 5) + 32;
	cout << fixed << setprecision(2) << rs;
}