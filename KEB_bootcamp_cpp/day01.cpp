#include <iostream>
using namespace std;

int main() {
    int i0;
    int i1;
    int sum;

    int ia=0;
    double a;
    const double PI = 3.14; //앞에 const를 붙이면 상수가 된다. 즉 값의 변경 불가능.

    cout << "i0값을 입력하세요 : ";
    cin >> i0;
    cout << "당신은 i0를 위해서 : " << i0 << "를 입력했어요" << endl;

    cout << "i0값을 입력하세요 : ";
    cin >> i1;
    cout << "당신은 i1를 위해서 : " << i1 << "를 입력했어요" << endl;
    sum = i0 + 28;

    a = static_cast<double>(i0) / static_cast<double>(i1);
    a = static_cast<double>(i0) / static_cast<double>(i1);

    cout << "a : " << a << endl;
    cout << "a/PI : " << a/PI << endl;
    cout << "ia : " << ia << endl;
}