#include <iostream>
#include <ctime>
#include <cstdlib>
#include "test.hpp"
int Rectangle::count = 0;
using namespace std;

Rectangle::Rectangle(double len, double hgt) :length(len), height(hgt)
{
    count++;
}

Rectangle::Rectangle() :length(0.0), height(0.0)
{
    count++;
}

Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), height(rect.height)
{
    count++;
}

Rectangle::~Rectangle()
{
    count--;
}
int Rectangle::getCount() {
    return count;
}