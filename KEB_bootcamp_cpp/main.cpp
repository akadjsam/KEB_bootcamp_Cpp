#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "test.hpp"

using namespace std;

int main() {
	int count = 9;
	int arr[20] = {3,2,3,8,7,8,0,6,2,5,4,2,9,3,1,1,4,4,7,9};
	int histogram[9][20] = {0};

	for(int i = 0;i<9;i++){
		for(int j=0;j<20;j++){
			if(arr[j]>=count)
				histogram[i][j] = 1;
		}
		count --;
	}

	for(int i = 0;i<9;i++){
		for(int j = 0;j<20;j++){
			cout << histogram[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0;i<20;i++){
		cout << arr[i] << " ";

	}	
		return 0;
}
