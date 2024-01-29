#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "test.hpp"

using namespace std;

void row(const int origin[][4], int size, int arr[]);
void col(const int origin[][4], int size, int arr[]);

int main() {
	int origin[2][4] = {{0,1,2,3},{10,11,12,13}};
	int arr[8] = {0};
	row(origin,2,arr);
	cout << endl;
	col(origin,2,arr);
 }

void row(const int origin[][4], int size, int arr[]){
	int count = 0;
	for(int i = 0;i<2;i++){
		for(int j = 0;j<4;j++){
			arr[count] = origin[i][j];
			count ++;
		}
	}

	for(int i = 0;i<8;i++){
		cout << arr[i] << " ";
	}

 }

void col(const int origin[][4], int size, int arr[]){
	int count = 0;
	for(int i = 0;i<4;i++){
		for(int j = 0;j<2;j++){
			arr[count] = origin[j][i];
			count ++;
		}
	}

	for(int i = 0;i<8;i++){
		cout << arr[i] << " ";
	}

 }