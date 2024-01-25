#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

void process(int& a) { //값의 주소를 전달
	a++;
	cout << &a << endl;
	return ;
}
int main() {

	int test = 1;
	cout << &test << endl;
	process(test);
	cout << test << endl; // 2출력
	cout << &test << endl;

	return 0;

}