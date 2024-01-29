#include <iostream>
#include <ctime>
#include <cstdlib>
#include "test.hpp"

using namespace std;

int main() {
	Time time(4,5,27);
	cout << "원래시간 : ";
	time.print();

	for(int i = 0;i<143500;i++){
		time.tick();
	}
	time.print();
 }