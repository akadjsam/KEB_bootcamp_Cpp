#include <iostream>
#include <cmath>
using namespace std;

int main() {

	const double PI = 3.14159265358979;
	int n;
	double s;
	double peri = 0.0;
	double area = 0.0;
	do {
		cout << "input n : ";
		cin >> n;
	} while (n < 4);

	do {
		cout << "input s : ";
		cin >> s;
	} while (s < 0.0);
	peri = n * s;
	area = (n * pow(s, 2)) / (4 * tan(PI / n));

	cout << peri << endl;
	cout << area << endl;

	return 0;

}