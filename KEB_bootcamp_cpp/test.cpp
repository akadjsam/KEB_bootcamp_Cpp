#include <iostream>
#include <ctime>
#include <cstdlib>
#include "test.hpp"

using namespace std;

RandomNumber::RandomNumber(int lw, int hh) {
    srand(time(0));
    int temp = rand();
    value = temp % (hh - lw + 1) + lw;
}

RandomNumber::~RandomNumber() {

}

void RandomNumber::print() const {
    cout << value << endl;
}