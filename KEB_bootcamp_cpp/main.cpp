#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int size;
    int* pArr;

    do{
        cout << "input : ";
        cin >> size;
    }while(size<=0);
    pArr = new int[size];
    for(int i=0;i<size;i++){
        cout << "input value : ";
        cin >> *(pArr+i);
    }

    for(int i=0;i<size;i++){
        cout << *(pArr + i) << ' ';
    }
    delete[] pArr;
    return 0;
}
