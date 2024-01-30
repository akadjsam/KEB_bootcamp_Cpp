#include <iostream>
#include <iomanip>
using namespace std;

void swap(int* first, int* second);

int main() {
    int x = 10;
    int y = 20;
    swap(x,y);
    cout << x << endl;
    cout << y;
}

void swap(int* first, int* second){
    int temp = 0;
    temp = *first;
    *first = *second;
    *second = temp;
}