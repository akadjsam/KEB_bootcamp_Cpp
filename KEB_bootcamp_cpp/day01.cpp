#include <iostream>
using namespace std;

int main() {

    //상수 정의
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dollarValue = 100;

    //변수 정의(각 코인의 수)
    unsigned int pennis;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;
    //전체 값을 나타내는 변수 선언
    unsigned long totalValue;

    //코인 입력받기
    cout << "페니의 수 : ";
    cin >> pennis;
    cout << "니켈의 수 : ";
    cin >> nickels;
    cout << "다임의 수 : ";
    cin >> dimes;
    cout << "쿼터의 수 : ";
    cin >> quarters;
    cout << "달러의 수 : ";
    cin >> dollars;
    totalValue = pennis * pennyValue + nickels * nickelValue + dimes * dimeValue + quarters * quarterValue + dollars * dollarValue;
    cout << "전체값은 " << totalValue << "입니다. ";
    return 0;
}