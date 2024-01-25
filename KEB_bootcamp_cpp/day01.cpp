#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

int main() {

	int input;
	int count = 0;
	srand(time(0));
	int guess = rand() % 100;
	while (1) {
		count++;
		cout << "input : ";
		cin >> input;
		if (input > 100 || input < 0) {
			cout << "oops" << endl;
			continue;
		}
		else {
			if (input > guess) {
				cout << "down!" << endl;
			}
			else if (input < guess) {
				cout << "up!" << endl;
			}
			else {
				cout << "good! : " << guess << endl;
				break;
			}
		}

	}
	cout << count;

	return 0;

}