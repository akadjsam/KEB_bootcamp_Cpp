#include <iostream> 
using namespace std;

int main() {
	int a = 1234;
	// if (a = 0) //a의 값이 0가 대입되어 false
	// {
	// 	cout << a << endl;
	// }
	if(a=5){ //a의 값이 5가 대입되어 true
		cout << a << endl;
	}
	if(a==1234){ //a의 값이 5이므로 false
		cout << 9999 << endl;
	}
}