// #include <iostream> 

// using namespace std;
// int main() {
// 	int list[3];
// 	int maxlevel;
// 	int minlevel;

// 	int sum;
// 	double avr;

// 	for (int i = 0; i < 3; i++) {
// 		cout << "input : ";
// 		cin >> list[i];
// 	}

// 	//max
// 	if ((list[0] > list[1]) && (list[0] > list[2])) {
// 		cout << list[0] << " max!" << endl;
// 		maxlevel = 0;
// 	}
// 	else if ((list[1] > list[0]) && (list[1] > list[2]))
// 	{
// 		cout << list[1] << " max!" << endl;
// 		maxlevel = 1;
// 	}
// 	else {
// 		cout << list[2] << " max!" << endl;
// 		maxlevel = 2;
// 	}

// 	//min
// 	if ((list[0] < list[1]) && (list[0] < list[2])) {
// 		cout << list[0] << " min!" << endl;
// 		minlevel = 0;
// 	}
// 	else if ((list[1] < list[0]) && (list[1] < list[2]))
// 	{
// 		cout << list[1] << " min!" << endl;
// 		minlevel = 1;
// 	}
// 	else {
// 		cout << list[2] << " min!" << endl;
// 		minlevel = 2;
// 	}
// 	sum = list[minlevel] + list[maxlevel];
// 	if ((sum % 2) == 1) {
// 		sum += 1;
// 	}
// 	avr = sum / 2;
// 	cout << avr << " avr!";

// 	return 0;

// }

// #include <iostream> 

// using namespace std;
// int main() {
// 	int list[3];
// 	int maxlevel;
// 	int minlevel;

// 	int sum;
// 	double avr;

// 	for (int i = 0; i < 3; i++) {
// 		cout << "input : ";
// 		cin >> list[i];
// 	}

// 	//max
// 	if ((list[0] > list[1]) && (list[0] > list[2])) {
// 		cout << list[0] << " max!" << endl;
// 		maxlevel = 0;
// 	}
// 	else if ((list[1] > list[0]) && (list[1] > list[2]))
// 	{
// 		cout << list[1] << " max!" << endl;
// 		maxlevel = 1;
// 	}
// 	else {
// 		cout << list[2] << " max!" << endl;
// 		maxlevel = 2;
// 	}

// 	//min
// 	if ((list[0] < list[1]) && (list[0] < list[2])) {
// 		cout << list[0] << " min!" << endl;
// 		minlevel = 0;
// 	}
// 	else if ((list[1] < list[0]) && (list[1] < list[2]))
// 	{
// 		cout << list[1] << " min!" << endl;
// 		minlevel = 1;
// 	}
// 	else {
// 		cout << list[2] << " min!" << endl;
// 		minlevel = 2;
// 	}
// 	sum = list[minlevel] + list[maxlevel];
// 	if ((sum % 2) == 1) {
// 		sum += 1;
// 	}
// 	avr = sum / 2;
// 	cout << avr << " avr!";

// 	return 0;

// }

#include <iostream> 

using namespace std;
int main() {
	int m01 = 31;
	int m02 = 28;
	int m03 = 31;
	int m04 = 30;
	int m05 = 31;
	int m06 = 30;
	int m07 = 31;
	int m08 = 31;
	int m09 = 30;
	int m10 = 31;
	int m11 = 30;
	int m12 = 31;

	int month;
	int day;
	int result = 0;

	cout << "month : ";
	cin >> month;
	cout << "day : ";
	cin >> day;

	switch (month) {
	case 12:
		result += m11;
		if (day >= m12) {
			day = m12;
		}
	case 11:
		result += m10;
		if (day >= m11) {
			day = m11;
		}
	case 10:
		result += m09; 
		if (day >= m10) {
			day = m10;
		}
	case 9:
		result += m08;
		if (day >= m09) {
			day = m09;
		}
	case 8:
		result += m07;
		if (day >= m08) {
			day = m08;
		}
	case 7:
		result += m06;
		if (day >= m07) {
			day = m07;
		}
	case 6:
		result += m05;
		if (day >= m06) {
			day = m06;
		}
	case 5:
		result += m04;
		if (day >= m05) {
			day = m05;
		}
	case 4:
		result += m03;
		if (day >= m04) {
			day = m04;
		}
	case 3:
		result += m02;
		if (day >= m03) {
			day = m03;
		}
	case 2:
		result += m01;
		if (day >= m02) {
			day = m02;
		}
	case 1:
		result += 0;
		if (day >= m01) {
			day = m01;
		}
	}

	result += day;

	cout << result;
	return 0;
}