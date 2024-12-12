#include <iostream>
#include <iomanip>
using namespace std;

const float pi = 3.14;
void main() {
	int r = -1;
	while (r < 1) {
		cin >> r;
	}
	float chuVi = 2 * pi * r, dienTich = pi * r * r;
	cout << fixed << setprecision(2) << chuVi << " " << fixed << setprecision(2) << dienTich;
}