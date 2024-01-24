#include <iostream> 
using namespace std;

int main() {
	int a = 1234;
	double b = 123111114.1234;
	cout << oct << a << endl;
	cout << hex << a << endl;
	cout << showbase << hex << a << endl;

	cout << showpoint << b << endl;
	cout << b << scientific;
	return 0;
}