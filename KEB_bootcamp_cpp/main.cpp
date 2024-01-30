#include <iostream>
using namespace std;

void insert(int arr[], int size, int index, int number) {
    if (index < 0 || index >= size) {
        cout << "Invalid index\n";
        return;
    }

    for (int i = size - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = number;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
}

int main() {
    const int size = 10;
    int arr[size] = { 12, 7, 8, 11, 45, 22, 78 }; // 0~6 까지

    insert(arr, size, 2, 40);

    return 0;
}