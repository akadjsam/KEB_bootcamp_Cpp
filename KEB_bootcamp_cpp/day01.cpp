// #include <iostream> 
// using namespace std;
// //p.138
// int main() {
// 	double a;
// 	int i;
// 	double j;
// 	cout << "input : ";
// 	cin >> a;
// 	i = static_cast<int>(a);
// 	j = a - i;

// 	cout << "output : " << a << ", " << i << ", " << j << endl;

// 	return 0;
// }

// #include <iostream> 
// using namespace std;
// int main() {
// 	int a;
// 	int b;
// 	cout << "input : ";
// 	cin >> a;
// 	b = a%10;
// 	cout << "output : " << a << ", " << b<< endl;
// 	cout << "output : " << sizeof(a);

// 	return 0;
// }

// #include <iostream> 
// #include <cmath>
// #include <string>
// using namespace std;
// int main() {
//     string a;
//     cout << "input : ";
//     cin >> a;

//     int b = stoi(a);
//     cout << "output : " << a.size() << endl << endl;

//     for (int i = 1; i <= a.size(); i++) {
//         int digit = b % 10;
//         cout << "output : " << digit << ", " << pow(1, i) << endl;
//         b /= 10;
//     }
//     return 0;
// }

// #include <iostream>  //초 입력시 시 분 초 로 나타내기
// using namespace std;
// int main() {
// 	int sec;
// 	int min;
// 	int hour;
// 	cout << "input : ";
// 	cin >> sec;
// 	hour = sec / 3600;
// 	min = (sec - (hour* 3600)) / 60;
// 	sec = (sec - (hour * 3600)) - (min * 60);

// 	cout << "output : " << hour << ", " << min << ", " << sec << endl;

// 	return 0;
// }


// #include <iostream> //3개의 입력, 합,평균,분산 계산하기
// #include <iomanip>
// using namespace std;
// int main() {
// 	int a;
// 	int b;
// 	int c;
// 	int sum;
// 	double avr;

// 	double d;
// 	double e;
// 	double f;

// 	cout << "input : ";
// 	cin >> a;
// 	cout << "input : ";
// 	cin >> b;
// 	cout << "input : ";
// 	cin >> c;

// 	sum = a + b + c;
// 	avr = static_cast<double>(sum) / 3;

// 	d = a - avr;
// 	e = b - avr;
// 	f = c - avr;
// 	cout << fixed << setprecision(2);
// 	cout << sum << endl;
// 	cout << avr << endl;
// 	cout << d << endl;
// 	cout << e << endl;
// 	cout << f << endl;

// 	return 0;
// }