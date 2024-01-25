#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int sum = 0;
	int score = 0;
	double avr = 0;
	int count = 0;
	do {
		cout << "input : ";
		cin >> score;
		sum += score;
		count++;
		if (sum == 0) {
			count = 2;
			break;
		}
			
	}while (score > 0);

	cout << fixed << setprecision(2) << showpoint;
	avr = static_cast<double>(sum) / count-1;
	cout << "avr : " << avr;
	return 0;
}