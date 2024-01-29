#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "test.hpp"

using namespace std;
void insert(int arr[], int index, int number){
	for(int i = 10;i>index;i++){
		arr[i] = arr[i-1];
	}
	arr[index] = number;

	for(int i = 0;i<10;i++){
		cout << arr[i] << ", ";
	}
}

int main() {
	int arr[10] = {12,7,8,11,45,22,78}; // 0~6 까지

	insert(arr,2,40);

	return 0;
}
