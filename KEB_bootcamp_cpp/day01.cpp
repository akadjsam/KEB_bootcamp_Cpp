#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

int cal(double a, double b){ //함수 오버로딩
	return a+b;
}
void cal(double& a){ 
	a++;
	return;
}

int main() {

	double test1 = 1.2;
	double test2 = 1.2;
	cal(test2);
	cout << cal(test1,test2) << endl; 

}