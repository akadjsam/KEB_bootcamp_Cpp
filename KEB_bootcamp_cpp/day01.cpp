#include <iostream>
using namespace std;

int main() {

	cout << sizeof(int) << endl; //byte 단위로 return. int -> 4 byte
	int a = 0;
	double b = 0.12;
	cout << sizeof(b) << endl;
}