#include <iostream> //cpp는 오버,언더플로우에 대한 경고를 출력하지만 오류메세지는 출력 x
#include <limits>
using namespace std;

int main() {
	//uint의 최대값, 최소값
	double num1 = numeric_limits<double>::max(); 
	double num2 = -numeric_limits<double>::max();

	cout << num1 << endl;
	cout << num2 << endl;
	//값에 1000 곱하기
	num1 *= 1000;
	num2 *= 1000;

	cout << num1 << endl; //오버플로우 발생 시 inf 무한대(숫자가 아ㅉ님)
	cout << num2 << endl; // 언더플로우 발생 시 -inf
	return 0;
}