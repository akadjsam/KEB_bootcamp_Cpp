#include <iostream> 
using namespace std;

int main() {
	int a;
	cout << "input : ";
	cin >> a;

	switch (a)
	{
	case 1:
		cout << 1 << endl; //break가 없으면 다음 case 실행.
		break;
	case 2:
		cout << 2 << endl;
		break;
	case 3:
		cout << 3 << endl;
		break;
	default:
		cout << "none" << endl;
		break;
	}
}