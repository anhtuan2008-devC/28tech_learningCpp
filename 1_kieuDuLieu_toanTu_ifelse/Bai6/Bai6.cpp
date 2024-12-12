#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float kc = sqrt(pow(x1-x2*1.0, 2)+pow(y1-y2 * 1.0, 2));
	cout << fixed << setprecision(2) << kc;
}