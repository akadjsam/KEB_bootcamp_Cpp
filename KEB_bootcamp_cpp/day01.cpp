#include <iostream>
using namespace std;

int main() {
	int a = 2;
	float b = 3.2F;
	double c = a * b;
	int d = a * b; //소수점은 버리고 int로 저장
	
	cout << 4 * 4 << endl; // 정수끼리 곱셉시 정수
	cout << 2.4 * 4.1 << endl; //더블끼리 곱셈시 더블
	cout << 4 * 4.1 << endl; // 정수 더블 곱셈시 더블
	cout << 7 / 4 << endl; // 정수끼리 나눗셈시 정수(나머지는 버림)
	cout << 7 / 4.0 << endl; //정수 더블 나눗셈시 더블

	cout << 30 % 5 << endl;
	cout << -4 * 4 << endl;

	cout << c << endl;
	cout << d << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;

	cout << sizeof(c/b) << endl; // float, double 연산 시 사이즈가 더 큰 double타입으로 형변환

}