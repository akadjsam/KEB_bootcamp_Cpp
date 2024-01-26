#include "test.hpp"
#include <iostream>
#include <cassert>
using namespace std;

#ifndef TEST_H
#define TEST_H

int Account::base = 0;
Account::Account(double bal):balance(bal){
    if(bal<0.0){
        cout << "it can't be minus!";
        assert(false);
    }
    base ++;
    accNumber = 100000 + base;

    cout << "create_#" << accNumber << endl;
    cout << "money $" << balance << endl;
}
Account::~Account(){
    cout << "close_#" << accNumber << endl;
    cout << "send $" << balance << endl;
}
void Account::checkBalance() const{
     cout << "account : " << accNumber << endl;
     cout << "checking money $" << balance << endl;
}
void Account::deposit(double amount){
    if (amount>0.0){
        balance += amount;
        cout << "account : " << accNumber << endl;
        cout << "add value : " << amount << endl;
        cout << "changed money $" << balance << endl;
    }
    else{
        cout << "stop!" << endl;
    }
}
void Account::withdraw(double amount){
    if(amount > balance){
        amount = balance;
    }
    balance -= amount;
    cout << "account : " << accNumber << endl;
    cout << "minus value : " << amount << endl;
    cout << "changed money $" << balance << endl;
}

#endif