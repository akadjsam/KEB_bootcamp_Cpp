// #include <iostream>
// #include <cmath>
// #include <cassert>
// #include "test.hpp"

// using namespace std;

// Fraction::Fraction():number(0),denom(1)
// {

// }

// Fraction::Fraction(int num, int den = 1) : number(num), denom(den)
// {
//     normalize();
// }
// Fraction::Fraction(const Fraction& fract):number(fract.number), denom(fract.denom)
// {

// }
// Fraction::~Fraction()
// {

// }

// int Fraction::getNumber() const{
//     return number;
// }

// int Fraction::getDenom() const{
//     return denom;
// }

// void Fraction::print() const {
//     cout << number << "/" << denom << endl;
// }

// void Fraction::setNumber(int num){
//     number = num;
//     normalize();
// }

// void Fraction::setDenom(int den){
//     denom = den;
//     normalize();
// }

// void Fraction::normalize(){
//     if(denom == 0){
//         assert(false);
//     }
//     if(denom < 0){
//         denom = -denom;
//         number = - -number;
//     }
//     int divisor = gcd(abs(number),abs(denom));
//     number = number / divisor;
//     denom = denom / divisor;
// }

// int Fraction::gcd(int n, int m){
//     int gcd = 1;
//     for(int i=1;i<=n;i++){
//         if(n%i==0 && m%i==0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }