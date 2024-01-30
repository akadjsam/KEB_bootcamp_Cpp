#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    for(int i =0;i<5;i++){
        cout << arr + i << endl; //배열의 주소를 출력, int형으로 배열이 선언되었기 때문에 4byte 단위로 주소값이 출력된다.
    }
    return 0;
}