#include <iostream>
#include "test.hpp"
using namespace std;

Employee::Employee():name('a'),age(0),serviceYear(0),salary(0){

}

Employee::Employee(char n, int a, int serv, int sal):name(n),age(a),serviceYear(serv),salary(sal){
    print();
}

Employee::Employee(const Employee& em):name(em.name),age(em.age),serviceYear(em.serviceYear),salary(em.salary){

}
Employee::~Employee(){

}
void Employee::print() const {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "service : " << serviceYear << endl;
    cout << "salary : " << salary << endl;
}

void Employee::setName(char n){
    name = n;
}

void Employee::setAge(int n){
    age = n;
}

void Employee::setServiceYear(int n){
    serviceYear = n;
}

void Employee::setSalary(int n){
    salary = n;
}

char Employee::getName(){
    return name;
}
int Employee::getAge(){
    return age;
}
int Employee::getServiceYear(){
    return serviceYear;
}
int Employee::getSalary(){
    return salary;
}