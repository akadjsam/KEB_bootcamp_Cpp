#include <iostream> //cpp는 오버,언더플로우에 대한 경고를 출력하지만 오류메세지는 출력 x
#include <limits>
using namespace std;

int main() {
	//uint의 최대값, 최소값
	unsigned int num1 = numeric_limits<unsigned int>::max(); // 4294967295이 max 4294967296 변수에 대입 시 0으로 출력(오버플로우)
	unsigned int num2 = numeric_limits<unsigned int>::min();

	cout << num1 << endl;
	cout << num2 << endl;
	//오버플로우, 언더플로우 발생
	num1 += 1;
	num2 -= 1;

	cout << num1 << endl; //오버플로우 발생 시 최소값이 된다.
	cout << num2 << endl; // 언더플로우 발생 시 최대값이 된다.
	return 0;
}