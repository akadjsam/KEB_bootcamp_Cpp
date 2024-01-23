#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int sum;

    double a;
    const double PI = 3.14;
    cout << "input number1 : ";
    cin >> num1;
    cout << "input number2 : ";
    cin >> num2;
    sum = num1 + num2;
    cout << "num1,num2 sum is : " << sum << endl;

    a = static_cast<double>(num1) / static_cast<double>(num2);
    cout << "num1/num2 is : " << a << endl;
}