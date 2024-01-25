// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <typeinfo>
// using namespace std;

// int main() {
// 	double sum = 0.0;
// 	double product = 1.0;
// 	double num;
// 	int count = 0;
// 	int size = 0;
// 	do {
// 		cout << "input size : ";
// 		cin >> size;
// 	} while (size < 0);

// 	while (count < size) {
// 		cout << "input : ";
// 		cin >> num;
// 		sum += num;
// 		product *= num;
// 		count++;
// 	}
// 	cout << sum << ", " << product;
// 	return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <typeinfo>
// using namespace std;

// int fac(int n) {
// 	if (n == 1) {
// 		return n;
// 	}
// 	else {
// 		return n * fac(n - 1);
// 	}
// }

// int main() {
// 	int num;
// 	do {
// 		cout << "input : ";
// 		cin >> num;
// 	} while (num < 1);
// 	cout << fac(num);
// 	return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <typeinfo>
// using namespace std;

// int user_pow(int x, int y) {
// 	int result = 1;
// 	for (int i = 0; i < y; i++) {
// 		result *= x;
// 	}
// 	return result;
// }

// int main() {
// 	int num1;
// 	int num2;
// 	do {
// 		cout << "input n1 : ";
// 		cin >> num1;
// 		cout << "input n2 : ";
// 		cin >> num2;
// 	} while (num1 < 2 || num2 < 1);
// 	cout << user_pow(num1, num2);
// 	return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <limits>

using namespace std;

int intvalue() {
	int number;
	while (1) {
		cout << "input number : ";
		if (cin >> number) {
			return number;
		}
		else {
			return 0;
		}
	}
}
int main() {
	int num = 0;
	num = intvalue();
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << endl;
		}
	}
}

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <typeinfo>
// #include <limits>

// using namespace std;

// double checking() {
// 	double a=0;
// 	while (1) {
		
// 		cout << "input score! : ";
// 		if (cin >> a) {
// 			return a;
// 		}
// 		else {
// 			return 0;
// 		}
// 	}
// }

// char result(int n) {
// 	char grade;
// 	if (n >= 90) {
// 		grade = 'A';
// 	}
// 	else if (n >= 80) {
// 		grade = 'B';
// 	}
// 	else if (n >= 70) {
// 		grade = 'C';
// 	}
// 	else if (n >= 60) {
// 		grade = 'D';
// 	}
// 	else {
// 		grade = 'F';
// 	}
// 	return grade;
// }

// int main() {
// 	double score;
// 	score = checking();
// 	cout << result(score);
// 	return 0;
// }