#include <iostream>
#include <ctime>
#include <cstdlib>
#include "test.hpp"

using namespace std;

int main() {
	Account acc1(2000);
	Account acc2(2000);
	Account acc3(2000);
	
	acc1.deposit(150);
	acc2.checkBalance();
	acc1.checkBalance();

	acc3.withdraw(800);
	acc1.withdraw(1000);
	acc2.deposit(120);

	return 0;
}