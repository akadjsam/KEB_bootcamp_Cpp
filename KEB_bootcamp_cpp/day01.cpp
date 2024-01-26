#include <iostream>
#include <ctime>
#include <cstdlib>
#include "test.hpp"
using namespace std;
// vscode에서 컴파일 및 실행방법
//파일 저장 후 할 것 
//g++ -c 파일이름.cpp 파일이름.cpp ..... (컴파일) - 생략해도 될듯?
//g++ -o 실행파일이름.exe 파일이름.o 파일이름.o ..... (실행파일 생성)
//실행파일이름.exe (실행파일 실행)
int main() {
	Rectangle rect1(3.2, 1.2);
	Rectangle rect2(1.5, 2.1);
	Rectangle rect3(1.5, 2.1);

	cout << rect2.getCount() << endl;
	cout << Rectangle::getCount() << endl; //static 메서드 같은 경우는 객체생성 없이 호출 가능.
	//cout << Rectangle::getCount << endl; 
}