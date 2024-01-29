#include <iostream>
#include <ctime>
#include <cstdlib>
#include "test.hpp"

using namespace std;

int main() {
	int arr1[10];
	const int size = 10;
	int arr2[size]; // [] 여기 안에는 const를 붙여서 상수를 넣어 주어야 한다.(변수를 넣으면 안됌)

	int arr3[] = {1,2,3,4,5};
	for(int i = 0; i <5;i++)
		cout << arr3[i];
}