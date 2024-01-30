#include <iostream>
#include <iomanip>
using namespace std;

void print(int(*pArr)[4], int row);

int main() {
    int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    print(arr, 3);

}
void print(int(*pArr)[4], int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 4; j++) {
            cout << pArr[i][j] << " ";
        }
        cout << endl;
    }
}