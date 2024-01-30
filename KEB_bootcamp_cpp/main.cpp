#include <iostream>
#include <iomanip>
using namespace std;

void reverse(int*, int);

int main() {
    const int constsize = 5;
    int arr[constsize] = {1,2,3,4,5};
    reverse(arr,constsize);
    for(int i=0;i<constsize;i++){
        cout<< *(arr+i);
    }
}

void reverse(int* pArr, int size){
    int i=0;
    int j = size-1;
    while(i<size/2){
        int temp = *(pArr + i);
        *(pArr + i) = *(pArr + j);
        *(pArr + j) = temp;
        i++;
        j--;
    }
}