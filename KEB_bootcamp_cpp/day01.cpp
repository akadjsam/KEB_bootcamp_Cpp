#include <iostream>
using namespace std;

int main() {
    int i0;
    int i1;
    int sum;

    int ia=0;
    double a;
    const double PI = 3.14; //�տ� const�� ���̸� ����� �ȴ�. �� ���� ���� �Ұ���.

    cout << "i0���� �Է��ϼ��� : ";
    cin >> i0;
    cout << "����� i0�� ���ؼ� : " << i0 << "�� �Է��߾��" << endl;

    cout << "i0���� �Է��ϼ��� : ";
    cin >> i1;
    cout << "����� i1�� ���ؼ� : " << i1 << "�� �Է��߾��" << endl;
    sum = i0 + 28;

    a = static_cast<double>(i0) / static_cast<double>(i1);
    a = static_cast<double>(i0) / static_cast<double>(i1);

    cout << "a : " << a << endl;
    cout << "a/PI : " << a/PI << endl;
    cout << "ia : " << ia << endl;
}