#include <cmath>
#include <iostream>
#include "test.hpp"

using namespace std;

Point::Point():x(0), y(0)
{

}
Point::Point(int a, int b) : x(a), y(b)
{
    print();
}
Point::Point(const Point& po) : x(po.x), y(po.y){

}
Point::~Point(){

}

void Point::print() const{
    if(x>0 && y>0){
        cout << "점이 1사분면에 있습니다." << endl;;
    }
    else if(x>0 && y<0){
        cout << "점이 2사분면에 있습니다." << endl;;
    }
    else if(x<0 && y<0){
        cout << "점이 3사분면에 있습니다." << endl;;
    }
    else if(x>0 && y<0){
        cout << "점이 4사분면에 있습니다." << endl;;
    }
    
}

double Point::function(int a, int b){
    return sqrt(pow(a - x,2) + pow(b - y, 2));
}