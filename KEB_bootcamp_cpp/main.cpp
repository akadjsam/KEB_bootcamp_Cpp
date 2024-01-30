#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int* num2 = &num1; //num1의 주소값을 num2에 할당

    cout << num1 << endl; //10
    cout << &num1 << endl; //num1의 주소

    cout << num2 << endl; //num1의 주소
    cout << *num2 << endl; //10
    cout << &num2 << endl; //num2의 주소

    return 0;
}