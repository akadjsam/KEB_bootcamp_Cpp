#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int sum = 0;
	int score = 0;
	double avr = 0;
	int count = 0;
	while (1) {
		cout << "input : ";
		cin >> score;
		if (score > 0) {
			sum += score;
			count++;
		}
		else {
			if (sum == 0) {
				count = 1;
			}
			break;
		}

	}
	cout << fixed << setprecision(2) << showpoint;
	avr = static_cast<double>(sum) / count;
	cout << "avr : " << avr;
	return 0;
}