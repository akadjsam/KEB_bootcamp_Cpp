#include <iostream> //cpp는 오버,언더플로우에 대한 경고를 출력하지만 오류메세지는 출력 x
using namespace std;

int main() {
	bool a = true;
	cout << a << endl; //true 이므로 1로 출력
	cout << boolalpha << a << endl; //boolalpha 사용하면 boolean으로 출력

	return 0;
}