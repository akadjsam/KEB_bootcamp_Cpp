#include <iostream>
#include <iomanip>
#include "test.hpp"
using namespace std;

int main() {

    Matrix m1(3, 4);
    m1.setup();
    m1.print();

    cout << endl;
    Matrix m2(3, 4);
    m2.setup();
    m2.print();

    cout << endl;
    Matrix m3(4, 2);
    m3.setup();
    m3.print();

    cout << endl;
    Matrix addR(3, 4);
    m1.add(m2, addR);
    addR.print();

    cout << endl;
    Matrix subR(3, 4);
    m1.sub(m2, subR);
    subR.print();

    cout << endl;
    Matrix mulR(3, 2);
    m1.mul(m3, mulR);
    mulR.print();
    return 0;

}
